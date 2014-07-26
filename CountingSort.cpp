///@brief ʵ�ּ�������α����
///@author zhaowei
///@date 2014.07.26
#include<iostream>
using namespace std;

///@brief ��������
///@param a ����������
///@param b �ź���������
///@param a_size ����������Ĵ�С
///@param k ��ʱ��������Ԫ���±꣬��ֵ���ڴ��������������Ԫ�ص�ֵ
void CountingSort(int* a, int* b, const int a_size, int k)
{
	//���붯̬��ʱ���飬���ڱ��������������ÿ��Ԫ�ؼ�����С��Ԫ�س��ֵ�����
	int* c = new int[k+1];

	//����ʱ�����е�Ԫ�س�ʼ��Ϊ��
	for(int i = 0; i < k+1; i++)
		c[i] = 0;

	//ͳ�ƴ�����������ÿ��Ԫ�س��ֵ�����
	for(int j = 0; j < a_size; j++)
		c[a[j]]++;

	//ͳ�ƴ�������ÿ��Ԫ�ؼ�����С��Ԫ�س�������
	for(int i = 1; i < k+1; i++)
		c[i] += c[i-1];
	
	//������ʱ����c��ͳ�Ƶ�С�ڵ���iԪ����������a�����е�Ԫ�ط���b����
	for(int j = a_size-1; j >= 0; j--)
	{
		b[c[a[j]] - 1] = a[j];	//ע�⣺c[a[j]] - 1����Ϊ����b����ʼ�±�Ϊ0.�ڡ��㷨���ۡ����������ʼ�±�Ϊ1
		c[a[j]]--;	//Ϊ�˱�������ظ����ֵ�Ԫ�ط���ͬһλ�ã�ÿ�η���b�����������ʱ�����еļ���ֵ�Լ�1
	}

	delete []c;
	return ;
}

int GetMaximum(int* a, const int a_size)
{
	int max = 0;
	for(int i = 0; i < a_size; i++)
	{
		if(a[i] > max)
			max = a[i];
	}
	return max;
}

int main()
{
	cout << "��������������С�� ";
	int arr_size = 0;
	cin >> arr_size;

	cout << "������������飺 ";
	int *arr_input = new int[arr_size];
	for(int i = 0; i < arr_size; i++)
	{
		cin >> arr_input[i];
	}

	int* arr_rslt = new int[arr_size];
	int max = GetMaximum(arr_input, arr_size);
	CountingSort(arr_input, arr_rslt, arr_size, max);

	cout << "������������飺 ";
	for(int i = 0; i < arr_size; i++)
		cout << arr_rslt[i] << " ";
	cout << endl;

	delete []arr_input;
	delete []arr_rslt;
	return 0;
}