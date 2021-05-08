/*
 ******************************************************************
 *
 *  功能:     本程序主要是用于打印来访者到达隔间位置
 *
 *  文件名:   P6_4.cpp
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

int next_vistor(bool occupied[],int stalls);

int main()
{
    bool occupied[10] = {false};
    cout << next_vistor(occupied,10) << endl;
    return 0;
}
int next_vistor(bool occupied[],int stalls)
{
    for(int i = 0; i < stalls; i++)
    {
        cout << "第" << (i+1) << "位来访者的位置为" << stalls << endl;
    }
}
//暂时没有思路 
