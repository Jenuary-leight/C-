/*
 ******************************************************************
 *
 *  功能:     本程序主要是用于幻方
 *
 *  文件名:   P6_6.cpp
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

using namespace std;

int main()
{

    cout << "请输入16个整数值:" << endl;
    int square[4][4];
    int counter[17] = {0};
    bool flag1 = true;
    bool flag2 = true;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> square[i][j];
            if(square[i][j] < 17)
            {
                counter[square[i][j]]++;
            }
        }
    }
    for(int i = 1; i < 17; i++)
    {
        if(counter[i] == 0)
        {
            flag1 = false;
            break;
        }

    }
    int sum[10] = {0};
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            sum[i] += square[i][j];
        }
    }
    for(int j = 0; j < 4; j++)
    {
        for(int i = 0; i < 4; i++)
        {
            sum[j+4] += square[i][j];
        }
    }
    for(int i = 0,j = 0; i < 4; i++,j++)
    {
        sum[i+8] +=square[i][j];
    }
    for(int i = 1; i < 12; i++)
    {
        if(sum[i] != sum[i-1])
        {
            flag2 = false;
        }
    }
    if(flag1 && flag2)
        cout << "您输入的数据可以构成幻方." << endl;
    else
        cout << "您输入的数据不可以构成幻方." << endl;

    return 0;
}
