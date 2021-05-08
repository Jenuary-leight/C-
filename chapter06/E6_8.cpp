/*
 *********************************************************************************************************
 *
 * 功能：   本程序主要是判断是否存在相同顺序的元素。 
 *
 * 文件名： E6_8.cpp
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
	cout<<"请输入你想要几个元素的数组a："<<endl;
	int n1;
	cin>>n1;
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
	bool yes=same(a,n1,b,n2);
	cout<<"是否存在相同顺序且相同的元素？"<<yes;
	
	return 0;
}
