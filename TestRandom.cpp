///@brief ������������ɺ���
///@author zhaowei
///@date 2014.07.24

#include <iostream>
#include <cstdlib>	//���������������ͷ�ļ�
#include <ctime>	//������ϵͳʱ����ýӿڵ�ͷ�ļ�

using namespace std;

///@brief  ����ָ����Χ����������ұ�֤ÿ�ε��ò������������һ��
///@param seed �������
///@param p �������Χ����
///@param r �������Χ����
///@return ���ز����������
///@author zhaowei
///@date 2014.07.24
int Random(int seed, const int p, const int r)
{
	//�������������
	srand(seed);

	int mod = r - p + 1;
	int rdm = (rand() % mod) + p;

	return rdm;
}

int main()
{
	for(int i = 0; i < 10; i++)
	{
		cout << "random number " << i << ": " << Random((int)time(0), 0, 100) << endl;

		// ���һ��forѭ�������������ε���ȡϵͳʱ�䷽���ļ��
		for(int j= 0; j < 1000000000; j++)
		{
			int k = 0;
			k++;
		}
	}
	return 0;
}