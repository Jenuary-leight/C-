/*
 *********************************************************************************************************
 *
 * 功能：   本程序主要是使得相同的数在括号内。
 *
 * 文件名： P6_1.cpp
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
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;

void same(vector<int> a)
{
	for(int i=0;i<a.size()-1;i++)
	{
		if(a[i+1]==a[i])
		{
			cout<<" "<<"("<<a[i]<<" "<<a[i+1]<<")"<<" ";
		}
		else
		{
			cout<<" "<<a[i];
		}
	}
}
int main()
{
	srand(time(0));
	cout<<"请输入你想要几个元素："<<endl;
	int n1;
	cin>>n1;
	vector<int> a(n1);
	for(int i=0;i<n1;i++)
	{
		a[i] = rand()%(6+1-1)+1;
	 } 
	same(a);
	
	return 0;
}
