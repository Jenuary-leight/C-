/*
 *********************************************************************************************************
 *
 * 功能：   本程序主要是判断是否依照某程序存在相同的元素且相同的个数相同。 
 *
 * 文件名： E6_10.cpp
 *
 * 作者：   Yipeng Zhang 
 *
 * 单位：   河南大学计算机与信息工程学院
 *
 * E-mail:  1262223614@qq.com
 *
 * 时间：   2021年4月27日
 *
 * 版本：   1.0
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
	cout<<"请输入你想要几个数字的数组a："<<endl;
	int n1;
	cin>>n1;
	cout<<"请输入数组a："<<endl;
	int a[100];
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
	}
	cout<<"请输入你想要几个数字的数组b(需要与数组a个数相同)："<<endl;
	int n2;
	cin>>n2;
	cout<<"请输入数组b："<<endl;
	int b[100];
	for(int i=0;i<n2;i++)
	{
		cin>>b[i];
	}
	bool yes = same_elements(a,n1,b,n2);
	cout<<"是否相同？"<<yes;
	
	return 0;
}
