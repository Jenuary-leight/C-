/*
 *********************************************************************************************************
 *
 * ���ܣ�   ��������Ҫ���ж��Ƿ�����ĳ���������ͬ��Ԫ������ͬ�ĸ�����ͬ�� 
 *
 * �ļ����� E6_10.cpp
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

using namespace std;

bool same_elements(int a[],int n1,int b[],int n2)
{
	int c[100]={};
	int d[100]={};
	for(int i=0;i<n1;i++)
	{
		int high = a[i];
		for(int i=0;i<n1;i++)
		{
			if(a[i]==high)
			{
				c[i]++;
			}
		}
	}
	for(int i=0;i<n2;i++)
	{
		int high = b[i];
		for(int i=0;i<n2;i++)
		{
			if(b[i]==high)
			{
				d[i]++;
			}
		}
	}
	for(int i=0;i<n1-1;i++)
	{
		for(int j=0;j<n1-i;j++)
		{
			if(c[j]>c[j+1])
			{
				swap(c[j],c[j+1]);
			}
		}
	}
	for(int i=0;i<n1-1;i++)
	{
		for(int j=0;j<n1-i;j++)
		{
			if(d[j]>d[j+1])
			{
				swap(d[j],d[j+1]);
			}
		}
	}
	for(int i=0;i<n1;i++)
	{
		if(c[i]!=d[i])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	cout<<"����������Ҫ�������ֵ�����a��"<<endl;
	int n1;
	cin>>n1;
	cout<<"����������a��"<<endl;
	int a[100];
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
	}
	cout<<"����������Ҫ�������ֵ�����b(��Ҫ������a������ͬ)��"<<endl;
	int n2;
	cin>>n2;
	cout<<"����������b��"<<endl;
	int b[100];
	for(int i=0;i<n2;i++)
	{
		cin>>b[i];
	}
	bool yes = same_elements(a,n1,b,n2);
	cout<<"�Ƿ���ͬ��"<<yes;
	
	return 0;
}
