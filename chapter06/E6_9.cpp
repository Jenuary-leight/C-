/*
 *********************************************************************************************************
 *
 * 功能：   本程序主要是判断是否依照某程序存在相同的元素。 
 *
 * 文件名： E6_9.cpp
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
#include<cstdlib>
#include<ctime> 

using namespace std;

void print(int a[],int n1,int b[],int n2)
{
	cout<<"数组a:"<<endl;
	for(int i=0;i<n1;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"数组b:"<<endl; 
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
				cout<<"相同的元素下标是："<<endl;
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
	cout<<"请输入你想要几个元素的数组a："<<endl;
	int n1;
	cin >>n1;
	cout<<"请输入你想要几个元素的数组b："<<endl;
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
	cout<<"是否存在依照某种顺序存在的数组a和数组b？"<<yes<<endl;
	
	return 0;
}
