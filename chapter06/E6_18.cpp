/*
 *********************************************************************************************************
 *
 * 功能：   本程序主要是对6_14加以改变。
 *
 * 文件名： E6_17.cpp
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
vector<int> append(vector<int> a,vector<int> b)
{
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}
	for(int i=0;i<b.size();i++)
	{
		cout<<b[i]<<" ";
	}

}
int main()
{
	cout<<"请输入a向量里有几个元素："<<endl;
	int n1;
	cin>>n1;
	vector<int> a(n1);
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
	}
	cout<<"请输入b向量里有几个元素："<<endl;
	int n2;
	cin>>n2;
	vector<int> b(n1);
	for(int i=0;i<n1;i++)
	{
		cin>>b[i];
	}
	append(a,b);
	
	return 0;
}
