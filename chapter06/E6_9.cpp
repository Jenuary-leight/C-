/*
 *********************************************************************************************************
 *
 * ���ܣ�   ��������Ҫ���ж��Ƿ�����ĳ���������ͬ��Ԫ�ء� 
 *
 * �ļ����� E6_9.cpp
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

void print(int a[],int n1,int b[],int n2)
{
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
}
void force_a(int a[],int n1,int b[],int n2)
{
	int c[100];
	int q=0;
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			if(b[j]==a[i])
			{
				cout<<"��ͬ��Ԫ���±��ǣ�"<<endl;
				cout<<i<<" "<<j<<endl;
			}
		}
	}
}
bool force1_a(int a[],int n1,int b[],int n2)
{
	for(int i=0;i<n1-1;i++)
	{
		for(int j=0;j<n1-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
	for(int i=0;i<n2-1;i++)
	{
		for(int j=0;j<n2-1-i;j++)
		{
			if(b[j]>b[j+1])
			{
				swap(b[j],b[j+1]);
			}
		}
	}
	for(int i=0;i<n1-1;i++)
	{
		if(a[i]==a[i+1])
		{
			for(int j=i+1;j<n1-1;j++)
			{
				a[j]=a[j+1];
			}
			n1-=1;
		}
	}
	for(int i=0;i<n2-1;i++)
	{
		if(b[i]==b[i+1])
		{
			for(int j=i+1;j<n1-1;j++)
			{
				b[j]=b[j+1];
			}
			n2-=1;
		}
	}
	
	for(int i=0;i<n1;i++)
	{
		if(a[i]!=b[i])
		{
			return false;
		}
	}
	
	return true;
}
int main()
{
	srand(time(0));
	cout<<"����������Ҫ����Ԫ�ص�����a��"<<endl;
	int n1;
	cin >>n1;
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
	print(a,n1,b,n2);
	force_a(a,n1,b,n2);
	bool yes = force1_a(a,n1,b,n2);
	cout<<"�Ƿ��������ĳ��˳����ڵ�����a������b��"<<yes<<endl;
	
	return 0;
}
