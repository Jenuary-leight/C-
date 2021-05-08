/*
 ******************************************************************
 *
 *  功能:     本程序主要是用于奖励最佳顾客
 *
 *  文件名:   P6_12.cpp
 *
 *  作者 :    Yipeng Zhang
 *
 *  单位 :    河南大学计算机与信息工程学院
 *
 *  E-mail:   1262223614@qq.com
 *
 *  时间 :    2021年5月4日
 *
 *  版本 :    1.0
 *
 ******************************************************************
 */
#include<iostream>
#include<string>
#include<vector>

using namespace std;

string name_of_best_customer(vector<double> sales,vector<string> customers);

int main()
{
    cout << "请输入所有价格和姓名:" << endl;
    vector<double> sales;
    vector<string> customers;
    int price;
    string name;
    while(1)
    {
        cin >> price;
        if(price == 0)
        {
            break;
        }
        sales.push_back(price);
        cin >> name;
        customers.push_back(name);
    }
    cout << "最佳顾客的姓名为:" << name_of_best_customer(sales,customers) << endl;;
    return 0;
}
string name_of_best_customer(vector<double> sales,vector<string> customers)
{
    int max = sales[0];
    int index = 0;
    for(int i = 1; i < sales.size(); i++)
    {
        if(sales[i] > max)
        {
            max = sales[i];
            index = i;
        }
    }
    return customers[index];
}

