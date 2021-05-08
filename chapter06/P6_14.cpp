/*
 ******************************************************************
 *
 *  功能:     本程序主要是用于对实验得到的样本值进行平滑处理
 *
 *  文件名:   P6_14.cpp
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

 void smooth(double values[],int size);

 int main()
 {
     double values[10] = {5.5,6.8,7.7,8.9,9.9,11,12.1,13.2,14.3,15.5};
     smooth(values,10);
     return 0;
 }
 void smooth(double values[],int size)
 {
     for(int i = 1; i < size-1; i++)
     {
         values[i] = (values[i-1] + values[i+1]) / 2;
     }
     cout << "平滑处理后的实验数据为 : " << endl;
     for(int i = 0; i < size; i++)
     {
         cout << values[i] << " ";
     }

 }
