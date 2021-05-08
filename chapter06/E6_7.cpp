/*
 *********************************************************************************************************
 *
 * 功能：   本程序主要是将将数组中的元素位置倒置。 
 *
 * 文件名： E6_7.cpp
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

void reverse(int a[],int n)
{
	int b[100];
	int n1 = 0;
	for(int i=0;i<n;i++)
	{
		b[n-1-i]=a[i];
	}
	cout<<"改变后的数组是："<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
}
int main()
{
	srand(time(0));
	cout<<"请输入你想要几个数："<<endl;
	int n;
	cin >>n;
	int a[100];
	for(int i=0;i<n;i++)
	{
		a[i] = rand()%(100-0+1)+0;
	}	
	cout<<"原数组是："<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	reverse(a,n);
	
	return 0;
}
