/*
 *********************************************************************************************************
 *
 * ���ܣ�   ��������Ҫ���ж��Ƿ������ͬ˳���Ԫ�ء� 
 *
 * �ļ����� E6_8.cpp
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

bool same(int a[],int n1,int b[],int n2)
{
	int num = min(n1,n2);
	if(num == n1)
	{
		for(int i=0;i<num;i++)
		{
			for(int j=0;j<n2;j++)
			{
				if(b[j]==a[i])
				{
					if(b[j+1]==a[i+1])
					{
						return true;
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
		}
	}
	else
	{
			for(int i=0;i<num;i++)
		{
			for(int j=0;j<n1;j++)
			{
				if(a[j]==b[i])
				{
					if(a[j+1]==b[i+1])
					{
						return true;
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
		}
	}
}
int main()
{
	srand(time(0));
	cout<<"����������Ҫ����Ԫ�ص�����a��"<<endl;
	int n1;
	cin>>n1;
	cout<<"����������Ҫ����Ԫ�ص�����b��"<<endl;
	int n2;
	cin>>n2;
	int a[100];
	int b[100];
	for(int i=0;i<n1;i++)
	{
		a[i] = rand()%(100-0+1)+0;
	
	}
	
	for(int i=0;i<n2;i++)
	{
		b[i] = rand()%(100-0+1)+0;
	}
	cout<<"����a:"<<endl;
	for(int i=0;i<n1;i++)
	{
		cout<<a[i]<<" ";
	 } 
	cout<<endl;
	cout<<"����b:"<<endl;
	for(int i=0;i<n2;i++)
	{
		cout<<b[i]<<" ";
	 } 
	 cout<<endl;
	bool yes=same(a,n1,b,n2);
	cout<<"�Ƿ������ͬ˳������ͬ��Ԫ�أ�"<<yes;
	
	return 0;
}
