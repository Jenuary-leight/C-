/*
 *********************************************************************************************************
 *
 * 功能：   本程序主要是对6_14加以改变。
 *
 * 文件名： E6_15.cpp
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

void line(int a[],int size) 
{
	int b[100];
	int big=0;
	int n1;
	for(int i=0; i<size; i++) 
	{
		if(a[i]>big) 
		{
			big = a[i];
			n1= i;
		}
	}
	
	for(int i=0; i<size; i++) {
		b[i] = 20*(a[i]*1.0/a[n1]);
	}
	int c[100];
	for(int i=0; i<size; i++) {
		c[i] = 20-b[i];
	}
	int d[100]= {};
	
	for(int m=0; m<20; m++) 
	{
		for(int i=0; i<size; i++) //这行的内容 
		{
//			for(int j=0; j<size; j++) 
//			{
//				if(d[j]<c[j]) 
//				{
//					cout<<" ";
//				} 
//				else {
//					cout<<"*";
//				}
//				
//				cout<<d[j];
//			}
//			d[j]++;
			if(d[i]<c[i])
			{
				cout<<" ";
				d[i]++;
			}
			else 
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}

}
int main() {
	int a[100];
	int n;
	cout<<"请输入你想要几个数字："<<endl;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	
	line(a,n);

	return 0;
}
