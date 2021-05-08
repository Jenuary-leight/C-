/*
 *********************************************************************************************************
 *
 * 功能：   本程序主要是对数组进行排序。 
 *
 * 文件名： E6_12.cpp
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
 #include<algorithm>
 #include<ctime>

using namespace std;

void print(int a[])
{

	for(int i=0;i<20;i++)
	{
		a[i]=rand()%(99-0+1)+0;
	}
	cout<<"这20个数是："<<endl;
	for(int i=0;i<20;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void sort_a(int a[])
{
	sort(a,a+20);//sort(a,a+20,cmp)是从大到小排列 
	for(int i=0;i<20;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	srand(time(0));
	int a[100];
	print(a);
	sort_a(a);
	
	return 0;
}
