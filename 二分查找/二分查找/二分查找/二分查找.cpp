#include <iostream>
using namespace std;

//二分查找
//此函数接受一个有序数组，数组大小，和一个目标元素  如果在数组中找到了目标元素则返回下标，如果没有找到则返回-1
int Binary_Search(int nums[], int size, int target)
{
    //区间左值
    int left = 0;
    //区间右值
    int right = size - 1;

    //开始在数组中查找
    while (left <= right)
    {
        int mid = (left + right) / 2;
        //开始判断
        if (nums[mid] == target)//找到了
            return mid;
        else if (nums[mid] < target)//在左边
            left = mid + 1;
        else if (nums[mid] > target)//在右边
            right = mid - 1;
    }
    //如果没有找到就返回-1
    return -1;
}

int main()
{
    //测试用的数组
    int arry[10] = { 0,1,3,4,5,6,7,8,9,10 };
    int n = sizeof(arry) / sizeof(arry[0]);//统计数组长度

    //让用户输入一个目标值
    int target = 0;
    cout << "请输入你想要查找的元素：" << endl;
    cin >> target;

    //调用函数
    int result = 0;
    result = Binary_Search(arry, n, target);
    cout << "你要查找的元素下标为：" << result << endl;

    system("pause");
    return 0;
}