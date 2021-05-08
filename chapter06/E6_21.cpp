/*
 *********************************************************************************************************
 *
 * 功能：   本程序主要是使大写字母提前。
 *
 * 文件名： E6_21.cpp
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

vector<string> c(vector<string> a)
{
	string temp;
	int high;
	string out;
	for(int i=0;i<a.size();i++)
	{
		temp = a[i];
		high = temp.length();
		for(int i=0;i<high;i++)
		{
			out = temp[i];
			if(out>="A"&&out<="Z")
			{
				swap(temp[0],temp[i]);
				a[i] = temp;
			}
		}
	}
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n1;
	cout<<"请输入几个元素："<<endl;
	cin>>n1;
	vector<string> a(n1);
	for(int i=0;i<n1;i++)
	{
		cin >>a[i];
	}
	c(a);
	
	return 0;
}
