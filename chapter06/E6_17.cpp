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
#include<iomanip>

using namespace std;
void bar_chart(int a[],int size)
{
	int b[100];
	int big=0;
	int n1;
	for(int i=0;i<size;i++)
	{
		if(a[i]>big)
		{
			n1 = i;
			big = a[i];
		}
	}
	for(int i=0;i<size;i++)
	{
		b[i] = 40*(a[i]*1.0/a[n1]);
	}
	
	for(int i = 0; i < size; i++)
    {
        switch(i)
        {
            case 0 : cout << setw(12) << "Egypt ";
            break;
            case 1 : cout << setw(12) << "France ";
            break;
            case 2 : cout << setw(12) << "Japan ";
            break;
            case 3 : cout << setw(12) << "Uruguay ";
            break;
            case 4 : cout << setw(12) << "Switzerland ";
            break;
        }
        for(int j=0;j<b[i];j++)
        {
        	cout<<"*";
		}
		cout<<endl;
    }
}

int main()
{
	int a[100];
	cout<<"请输入这五个数的值："<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	bar_chart(a,5);
	
	
	return 0;
}
