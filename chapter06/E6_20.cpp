/*
 *********************************************************************************************************
 *
 * 功能：   本程序主要是对向量的输出顺序加以改变。
 *
 * 文件名： E6_20.cpp
 *
 * 作者：   Yipeng Zhang
 *
 * 单位：   河南大学计算机与信息工程学院
 *
 * E-mail:  1262223614@qq.com
 *
 * 时间：   2021年5月5日
 *
 * 版本：   1.0
 *
 *********************************************************************************************************
 */
 #include<iostream>
#include<vector>
using namespace std;
vector<int> merge_sorted(vector<int> a,vector<int> b)
{
	vector<int> c(a.size()+b.size());
//	for(int i=0;i<b.size();i++)
//	{
//		c[i] = b[i];
//	}
//	for(int i=0;i<a.size();i++)
//	{
//		for(int j=0;j<b.size();j++)
//		{
//			if(a[i]<c[j])
//			{
//				for(int m=j;m<b.size()-1;m++)
//				{
//					c[m+1] = c[m];
//				}
//				c[j] = a[i];
//				for(int i=0;i<a.size()+b.size();i++)
//				{
//					cout<<c[i]<<" ";
//				}
//			}
//		}
//	}
	for(int i=0;i<a.size();i++)
	{
		c[i] = a[i];
	}
	for(int i=0;i<b.size();i++)
	{
		c[i+a.size()] = b[i];
	}
	for(int i=0;i<a.size()+b.size();i++)
	{
		cout<<c[i]<<" ";
	}
	for(int i=0;i<c.size()-1;i++)
	{
		for(int j=0;j<c.size()-i-1;j++)
		{
			if(c[j]>c[j+1])
			{
				swap(c[j],c[j+1]);
			}
		}
	}
	
}
int main()
{
	int n1;
	cout<<"请输入a向量里有几个元素："<<endl;
	cin>>n1;
	int n2;
	cout<<"请输入b向量里有几个元素："<<endl;
	cin>>n2;
	vector<int> a(n1);
	vector<int> b(n2);
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n2;i++)
	{
		cin>>b[i];
	}
	merge_sorted(a,b);
	
	return 0;
}
