/*
 ******************************************************************
 *
 *  功能:     本程序主要是用于打印洪水地图
 *
 *  文件名:   P6_15.cpp
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

void flood_map(double heights[10][10], double water_level);

int main()
{
    double heights[10][10] = {
        {8.8,8.9,9.0,15.5,9.8,9.9,10.1,10.2,10.5,15.6},
        {9.1,8.9,10.0,60.5,80.8,56.9,10.1,10.2,10.5,10.6},
        {9.2,12.9,11.0,50.5,9.8,9.9,21.1,10.2,10.5,10.6},
        {9.6,8.9,9.6,36.5,9.8,54.9,33.1,10.2,10.5,25.6},
        {9.5,8.9,9.8,33.5,9.8,16.9,77.1,15.2,10.5,10.6},
        {9.3,32.9,9.5,30.5,9.8,19.9,99.1,10.2,10.5,36.6},
        {9.6,8.9,9.6,25.5,9.8,20.9,66.1,10.2,15.5,10.6},
        {9.7,8.9,10.1,20.5,35.8,9.9,10.1,10.2,10.5,13.6},
        {9.8,15.9,11.0,19.5,23.8,9.9,10.1,10.2,10.5,12.6},
        {9.8,8.9,12.0,13.5,12.8,9.9,10.1,10.2,10.5,11.6},
        };
        cout << "请输入水位深度:"<< endl;
        double water_level;
        cin >> water_level;
        flood_map(heights,water_level);

    return 0;
}
void flood_map(double heights[10][10], double water_level)
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(heights[i][j] < water_level)
                cout << " * ";
            else
                cout << "   ";
        }
        cout <<endl;
    }
}
