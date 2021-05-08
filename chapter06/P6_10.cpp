/*
 ******************************************************************
 *
 *  功能:     本程序主要是用于编写生命游戏
 *
 *  文件名:   P6_10.cpp
 *
 *  作者 :    Yipeng Zhang
 *
 *  单位 :    河南大学计算机与信息工程学院
 *
 *  E-mail:   1262223614@qq.com
 *
 *  时间 :    2021年5月2日
 *
 *  版本 :    1.0
 *
 ******************************************************************
 */
#include<iostream>

using namespace std;

int main()
{
    const int CAPACITY = 10000;
    char pattern[CAPACITY][CAPACITY];
    cout << "请输入初始图案的坐标:" << endl;
    int i = 0; j = 0;
    int counter = 0;
    while(1)
    {
        cin >> i >> j;
        pattern[i][j] = 'o';
        counter++;
        if(cin.get() == '\n')
            break;
    }
    for(int i = 0; i < counter; i++;)
    {
        for(int j = 0; i < counter; j++)
        {
            cout << pattern[i][j];
        }
        cout << endl;
    }

    return 0;
}
//这个游戏太难，不会写 
