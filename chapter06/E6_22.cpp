/*
 *********************************************************************************************************
 *
 * ���ܣ�   ��������Ҫ���ж���ͬ��Ԫ���м�����
 *
 * �ļ����� E6_22.cpp
 *
 * ���ߣ�   Yipeng Zhang
 *
 * ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 * E-mail:  1262223614@qq.com
 *
 * ʱ�䣺   2021��5��5��
 *
 * �汾��   1.0
 *
 *********************************************************************************************************
 */
#include<iostream>
#include<vector>

using namespace std;
void same(vector<string> a)
{
	vector<int> b(a.size());
	for(int i=0;i<a.size();i++)
	{
		for(int j=0;j<a.size();j++)
		{
			if(a[j]==a[i])
			{
				b[i]++;
			}
		}
	}
	int big=0;
	for(int i=0;i<a.size();i++)
	{
		if(b[i]>=big)
		{
			big=b[i];
		}
	}
	cout<<"��ͬ��Ԫ����"<<big<<"��";
}
int main()
{
	cout<<"����������Ҫ����Ԫ�أ�"<<endl;
	int n1;
	cin >>n1;
	cout<<"��������ЩԪ�أ�"<<endl;
	vector<string> a(n1);
	for(int i=0;i<n1;i++)
	{
		cin>> a[i];
	}
	same(a);
	
	return 0;
}
