/*
 ******************************************************************
 *
 *  功能:     本程序主要是用于填充数组
 *
 *  文件名:   P6_3.cpp
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
    int num[10]= {0};
    int values[10]={1,2,3,4,5,6,7,8,9,10};
    int j;
    int p = 9;
    for(int i = 0; i < 10; i++)
    {
        if(p > 0)
        {
            j = rand() % p + 1;
        }
        if(p==0)
        {
            j = 0;
        }
        num[i] = values[j];
        if(j < p)
        {
            for(int k = j; k < p; k++)
            {
                values[k]=values[k+1];
            }
        }
            p--;
    }
    for(int i = 0; i < 10; i++)
        cout << num[i] << " ";

    return 0;
}
