/*
 ******************************************************************
 *
 *  功能:     本程序主要是用于给顾客打折扣
 *
 *  文件名:   P6_11.cpp
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

using namespace std;

void discount (double prices[],bool is_pet[],int n_names);

int main()
{
    const int CAPACITY = 1000;
    double prices[CAPACITY];
    bool is_pet[CAPACITY];
    int n_names = 0;
    char choice;
    cout << "请输入商品的价格:" << endl;
    cout << "如果商品为宠物，请输入Y，否则输入N:" << endl;
    cout << "如果要结束商品录入，请输入-1" << endl;
    while(1)
    {
        cin >> prices[n_names];
        if(prices[n_names] == -1)
            break;
        cin >> choice;
        if(choice == 'Y')
            is_pet[n_names] = 1;
        else
            is_pet[n_names] = 0;
        n_names++;
    }
    discount(prices,is_pet,n_names);

    return 0;
}
void discount (double prices[],bool is_pet[],int n_names)
{
    double sum_other = 0;
    double sum = 0;
    int counter1 = 0;
    int counter2 = 0;
    for(int i = 0; i < n_names; i++)
    {
        if(is_pet[i] == 0)
        {
            sum_other += prices[i];
            counter1++;
        }
        if(is_pet[i] == 1)
            counter2++;
        sum += prices[i];
    }
    if(counter2 >= 1 && counter1 >= 5)
        cout << "discount : " << 0.2 * sum_other << endl;
    else
        cout << "no discount." << endl;

}

