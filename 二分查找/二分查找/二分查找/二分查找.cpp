#include <iostream>
using namespace std;

//���ֲ���
//�˺�������һ���������飬�����С����һ��Ŀ��Ԫ��  ������������ҵ���Ŀ��Ԫ���򷵻��±꣬���û���ҵ��򷵻�-1
int Binary_Search(int nums[], int size, int target)
{
    //������ֵ
    int left = 0;
    //������ֵ
    int right = size - 1;

    //��ʼ�������в���
    while (left <= right)
    {
        int mid = (left + right) / 2;
        //��ʼ�ж�
        if (nums[mid] == target)//�ҵ���
            return mid;
        else if (nums[mid] < target)//�����
            left = mid + 1;
        else if (nums[mid] > target)//���ұ�
            right = mid - 1;
    }
    //���û���ҵ��ͷ���-1
    return -1;
}

int main()
{
    //�����õ�����
    int arry[10] = { 0,1,3,4,5,6,7,8,9,10 };
    int n = sizeof(arry) / sizeof(arry[0]);//ͳ�����鳤��

    //���û�����һ��Ŀ��ֵ
    int target = 0;
    cout << "����������Ҫ���ҵ�Ԫ�أ�" << endl;
    cin >> target;

    //���ú���
    int result = 0;
    result = Binary_Search(arry, n, target);
    cout << "��Ҫ���ҵ�Ԫ���±�Ϊ��" << result << endl;

    system("pause");
    return 0;
}