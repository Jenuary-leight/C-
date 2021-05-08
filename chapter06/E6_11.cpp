/*
 *********************************************************************************************************
 *
 * 功能：   本程序主要是移除重复项。 
 *
 * 文件名： E6_11.cpp
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

void remove_duplicates(int a[],int n)
{
	int n1;
	n1=n;
	for(int i=0;i<n1-1;i++)
	{
		for(int j=i+1;j<n1;j++)//一点一点向后遍历 
		{
			if(a[i]==a[j])
			{
				for(int m=j;m<n1-1;m++)
				{
					a[m] = a[m+1];
				} 
				n1--;
			}
		}
	}
	for(int i=0;i<n1;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int a[100];
	cout<<"请输入你想要几个数字的数组："<<endl;
	int n;
	cin >>n;
	cout<<"请输入这个数组："<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	 } 
	remove_duplicates(a,n);
	
	return 0;
}
