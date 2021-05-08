/*
 *********************************************************************************************************
 *
 * 功能：   本程序主要是判断相同的元素有几个。
 *
 * 文件名： E6_22.cpp
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
void same(vector<string> a)
{
	vector<int> b(a.size());
	for(int i=0;i<a.size();i++)
	{
		for(int j=0;j<a.size();j++)
		{
			if(a[j]==a[i])
			{
				b[i]++;
			}
		}
	}
	int big=0;
	for(int i=0;i<a.size();i++)
	{
		if(b[i]>=big)
		{
			big=b[i];
		}
	}
	cout<<"相同的元素有"<<big<<"个";
}
int main()
{
	cout<<"请输入你想要几个元素："<<endl;
	int n1;
	cin >>n1;
	cout<<"请输入这些元素："<<endl;
	vector<string> a(n1);
	for(int i=0;i<n1;i++)
	{
		cin>> a[i];
	}
	same(a);
	
	return 0;
}
