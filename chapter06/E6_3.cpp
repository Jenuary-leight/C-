/*
 *********************************************************************************************************
 *
 * 功能：   本程序主要是使得二维数组交换两列。
 *
 * 文件名： E6_3.cpp
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

using namespace std;

int main()
{
	const int CAPACITY=1000;
    double values[CAPACITY];
    int current_size=0;
    cout<<"Please enter values,Q to quit: "<<endl;
    double input;
    while(cin>>input)
    {
        if(current_size<CAPACITY)
        {
            values[current_size]=input;
            current_size++;
        }
    }
    double largest=values[0];
    for(int i=1;i<current_size;i++)
    {
        if(values[i]>largest)
        {
            largest=values[i];
        }
    }
    for(int i=0;i<current_size;i++)
    {
        cout<<values[i];
        if(values[i]==largest)
        {
            cout<<"<==largest value";
        }
        cout<<endl;
    }
    double smallest=values[0];
    for(int i=1;i<current_size;i++)
    {
        if(values[i]<smallest)
        {
            smallest=values[i];
        }
    }
    for(int i=0;i<current_size;i++)
    {
        cout<<values[i];
        if(values[i]==smallest)
        {
            cout<<">==smallest value";
        }
        cout<<endl;
    }
	
	return 0;
}
