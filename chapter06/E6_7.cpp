/*
 *********************************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�ǽ��������е�Ԫ��λ�õ��á� 
 *
 * �ļ����� E6_7.cpp
 *
 * ���ߣ�   Yipeng Zhang 
 *
 * ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 * E-mail:  1262223614@qq.com
 *
 * ʱ�䣺   2021��4��27��
 *
 * �汾��   1.0
 *
 *********************************************************************************************************
 */
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void reverse(int a[],int n)
{
	int b[100];
	int n1 = 0;
	for(int i=0;i<n;i++)
	{
		b[n-1-i]=a[i];
	}
	cout<<"�ı��������ǣ�"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
}
int main()
{
	srand(time(0));
	cout<<"����������Ҫ��������"<<endl;
	int n;
	cin >>n;
	int a[100];
	for(int i=0;i<n;i++)
	{
		a[i] = rand()%(100-0+1)+0;
	}	
	cout<<"ԭ�����ǣ�"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	reverse(a,n);
	
	return 0;
}
