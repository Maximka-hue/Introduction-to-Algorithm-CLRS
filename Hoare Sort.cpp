///@file Hoare Sort.cpp
///@biref ��Hoare���������п�������
///@author zhaowei
///@date 2014.07.29
///@version 1.0

#include <iostream>
using namespace std;

///@brief �����������ͱ���
///@param a, b ������������Ԫ��
///@author zhaowei
///@date 2014.07.29
///@version 1.0
void swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
	return;
}

///@brief Hoare����
///@param arr ����ָ��
///@param p ������ʼ�±�
///@param r ������ֹ�±�
///@return �����±�j��ʹ��arr[p..j]�е�ÿ��Ԫ�ض�������arr[j+1..r]�е���һԪ��
///@author zhaowei
///@date 2014.07.29
///@version 1.0
int HoarePartition(int* arr, const int p, const int r)
{
	int x = arr[p];
	int i = p - 1;
	int j = r + 1;
	while (1)
	{
		do 
		{
			j--;
		} while (arr[j] > x);

		do 
		{
			i++;
		} while (arr[i] < x);

		if(i < j)
			swap(arr[i], arr[j]);
		else
			return j;
	}
}

///@brief Hoare��������
///@param arr ����ָ��
///@param p ������ʼ�±�
///@param r ������ֹ�±� 
///@author zhaowei
///@date 2014.07.29
///@version 1.0
void HoareQuickSort(int* arr, const int p, const int r)
{
	if(p < r)
	{
		int q = HoarePartition(arr, p, r);
		HoareQuickSort(arr, p, q-1);
		HoareQuickSort(arr, q+1, r);
	}
	return;
}

int main()
{
	int array_size = 0;
	cout << "Output array size: ";
	cin >> array_size;

	int* array_int = new int[array_size];
	cout << "Input integers: ";
	for(int i = 0; i < array_size; i++)
		cin >> array_int[i];

	//����Hoare���������������
	HoareQuickSort(array_int, 0, array_size-1);

	cout << "Ascendingly Hoare quick-sorted array: ";
	for(int i = 0; i < array_size; i++)
		cout << array_int[i] << " ";
	cout << endl;	

	delete []array_int;
	return 0;
}