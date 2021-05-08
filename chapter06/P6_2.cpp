/*
 ******************************************************************
 *
 *  功能:     本程序主要是用于表记数组元素重复值
 *
 *  文件名:   P6_2.cpp
 *
 *  作者 :    Yipeng Zhang
 *
 *  单位 :    河南大学计算机与信息工程学院
 *
 *  E-mail:   1262223614@qq.com
 *
 *  时间 :    2021年5月1日
 *
 *  版本 :    1.0
 *
 ******************************************************************
 */
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    srand(time(0));
    int values[20];
    int counter[7]={0};
    for(int i = 0; i < 20; i++)
    {
        values[i] = rand() % 6 +1;
        counter[values[i]]++;
    }
    int max = counter[1];
    for(int i = 2; i < 7; i++)
    {
        if(counter[i] > max)
        {
            max = counter[i];
        }
    }
    for(int i = 1; i < 7; i++)
    {
        if(counter[i] == max)
            cout << "(";
        for(int j = 1; j < counter[i]; j++)
        {
            cout << counter[i] << " ";
        }
        if(counter[i] == max)
            cout << ")";
    }

    return 0;
}
