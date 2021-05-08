/*
 *********************************************************************************************************
 *
 * 功能：   本程序主要是对向量的输出顺序加以改变。
 *
 * 文件名： E6_19.cpp
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
#include<vector>
using namespace std;
vector<int> merge(vector<int> a,vector<int> b)
{
	int n3;
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<" "<<b[i]<<" ";
		n3=i;
	}
	for(int i =n3+1;i<b.size();i++)
	{
		cout<<b[i]<<" ";
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
	merge(a,b);
	
	return 0;
}
