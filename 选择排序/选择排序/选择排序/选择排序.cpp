#include <iostream>
using namespace std;

//ѡ������
//����һ��������������ĳ���
void SelectionSort(int arry[],int n)
{
	//temp������ʱ�洢ֵ  k�������Ƚ�
	int temp, k = 0;

	for (int i = 0; i < n; i++)
	{
		k = i;
		for (int j = i; j < n; j++)
		{
			if (arry[k] > arry[j])
				k = j;
		}
		//����λ��
		temp = arry[i];
		arry[i] = arry[k];
		arry[k] = temp;
	}

	//��ӡ����������
	for (int i = 0; i < n; i++)
	{
		cout << arry[i] << "  ";
	}
}

int main()
{
	//��������
	int nums[10] = { 3,  5,  2,  9,  7,  8,  4,  1,  6,  10 };
	//���鳤��
	int size = sizeof(nums) / sizeof(nums[0]);
	//����SelectionSort
	SelectionSort(nums, size);

	system("pause");
	return 0;
}