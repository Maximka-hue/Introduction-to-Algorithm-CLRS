///@file �ҳ������е���Сֵ
///@author zhaowei
///@date 2014.08.06
///@version 1.0

#include <iostream>
using namespace std;

///@brief �ҳ������е���Сֵ
///@param arr ����ָ��
///@param arr_len ���鳤��
///@return ���������е���Сֵ
///@version 1.0
///@author zhaowei
///@date 2014.08.06
int SelectMin(int* arr, const int arr_len)
{
	int min = 2147483647;
	for(int i = 0; i < arr_len; i++)
	{
		if(min > arr[i])
			min = arr[i];
	}
	return min;
}

int main()
{
	cout << "��������Ĵ�С�� ";
	int arr_len = 0;
	cin >> arr_len;

	cout << "�������飺 ";
	int* arr = new int[arr_len];
	for(int i = 0; i < arr_len; i++)
	{
		cin >> arr[i];
	}

	cout << "�����е���С���� ";
	cout << SelectMin(arr, arr_len) << endl;
	delete []arr;
	return 0;
}