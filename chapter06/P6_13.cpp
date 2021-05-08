/*
 ******************************************************************
 *
 *  功能:     本程序主要是用于奖励若干位最佳顾客
 *
 *  文件名:   P6_13.cpp
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

vector<string> name_of_best_customer(vector<double> sales,vector<string> customers);

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
    vector<string> top_n = name_of_best_customer(sales,customers);
    cout << "最佳顾客的姓名为:" << endl;
    for(int i = 0; i < top_n.size(); i++)
    {
        cout << top_n[i] << endl;
    }

    return 0;
}
vector<string> name_of_best_customer(vector<double> sales,vector<string> customers)
{
    int max = sales[0];
    int index = 0;
    string name;
    vector<string> top_n;
    for(int i = 1; i < sales.size(); i++)
    {
        if(sales[i] > max)
        {
            max = sales[i];
        }
    }
    for(int i = 0; i < sales.size(); i++)
    {
        if(sales[i] == max)
            top_n.push_back(customers[i]);
    }
    return top_n;
}
