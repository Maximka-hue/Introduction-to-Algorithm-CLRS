///@file ͬʱ�ҳ������е������С����ʱ�临�ӶȲ�����O(n)������ȷ��˵������3n/2.
///@version 1.0
///@author zhaowei
///@date 2014.08.06

#include <iostream>
using namespace std;

///@brief ͬʱ�ҳ������е������С����ʱ�临�ӶȲ�����3n/2
///@param arr ����ָ��
///@param arr_len ���鳤��
///@param max ���ֵ
///@param min ��Сֵ
///@version 1.0
///@author zhaowei
///@date 2014.08.06
void SelectMaxMin(int* arr, const int arr_len, int& max, int& min)
{	
	//������鳤��Ϊż������ȷ����ǰ����Ԫ�صĴ�С����Ϊ�����Сֵ�ĳ�ʼֵ��Ȼ����������Ƚϣ��������С�����Ƚϼ���
	if(arr_len % 2 == 0)
	{
		max = arr[0];
		min = arr[0];
		for(int i = 0; i < arr_len; i += 2)
		{
			if(arr[i] >= arr[i+1])
			{
				if(arr[i] > max)
					max = arr[i];
				if(arr[i+1] < min)
					min = arr[i+1];
			}
			else
			{
				if(arr[i+1] > max)
					max = arr[i];
				if(arr[i] < min)
					min = arr[i];
			}
		}
	}
	//������鳤��Ϊ����������һ��Ԫ����Ϊ�����Сֵ�ĳ�ʼֵ��Ȼ����������Ƚϣ��������С�����Ƚϼ���
	else
	{
		max = arr[0];
		min = arr[0];
		for(int i = 1; i < arr_len; i += 2)
		{
			if(arr[i] >= arr[i+1])
			{
				if(arr[i] > max)
					max = arr[i];
				if(arr[i+1] < min)
					min = arr[i+1];
			}
			else
			{
				if(arr[i+1] > max)
					max = arr[i];
				if(arr[i] < min)
					min = arr[i];
			}
		}
	}
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

	int min = 0;
	int max = 2147483647;

	SelectMaxMin(arr, arr_len, max, min);
	cout << "�����е�������� ";
	cout << max << endl;
	cout << "�����е���С���� ";
	cout << min << endl;

	delete []arr;
	return 0;
}