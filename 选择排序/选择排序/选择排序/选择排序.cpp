#include <iostream>
using namespace std;

//选择排序
//传入一个数组和这个数组的长度
void SelectionSort(int arry[],int n)
{
	//temp用来临时存储值  k用来作比较
	int temp, k = 0;

	for (int i = 0; i < n; i++)
	{
		k = i;
		for (int j = i; j < n; j++)
		{
			if (arry[k] > arry[j])
				k = j;
		}
		//调换位置
		temp = arry[i];
		arry[i] = arry[k];
		arry[k] = temp;
	}

	//打印排序后的数组
	for (int i = 0; i < n; i++)
	{
		cout << arry[i] << "  ";
	}
}

int main()
{
	//测试数组
	int nums[10] = { 3,  5,  2,  9,  7,  8,  4,  1,  6,  10 };
	//数组长度
	int size = sizeof(nums) / sizeof(nums[0]);
	//调用SelectionSort
	SelectionSort(nums, size);

	system("pause");
	return 0;
}