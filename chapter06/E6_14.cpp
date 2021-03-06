/*
 *********************************************************************************************************
 *
 * 功能：   本程序主要是用有限的星号得出柱状图。 
 *
 * 文件名： E6_14.cpp
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

void bar_chart(double values[],int size)
{
//	double sum = 0; 
//	for(int i=0;i<size;i++)
//	{
//		sum = values[i]+sum;
//	}
//	double a[100];
//	for(int i=0;i<size;i++)
//	{
//		a[i] = values[i]/sum;
//	}
//	int b[100];
//	for(int i=0;i<size;i++)
//	{
//		b[i] = 40*a[i];
//	}
//	for(int i =0 ;i<size;i++)
//	{
//		for(int j=0;j<b[i];j++)
//		{
//			cout<<"*";
//		}
//		cout<<endl;
//	}
	int big= 0;
	int n1;
	for(int i=0;i<size;i++)
	{
		if(values[i]>big)
		{
			big = values[i];
			n1 = i;
			
		}
	}
	
	int b[100];
	for(int i=0;i<size;i++)
	{
		b[i] = 40*(values[i]/values[n1]);
	}
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<b[i];j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

int main()
{
	double values[100];
	int n;
	cout<<"请输入你想要几个数字？"<<endl;
	cin>>n; 
	for(int i=0;i<n;i++)
	{
		cin>>values[i];
	}
	bar_chart(values,n);
	
	return 0;
}
