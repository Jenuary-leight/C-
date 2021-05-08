/*
 ******************************************************************
 *
 *  功能:     本程序主要是用于构造n * n 幻方
 *
 *  文件名:   P6_7.cpp
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
#include<vector>
#include<iomanip>

using namespace std;

void magic_square(int n);

int main()
{
    cout << "请输入一个奇数且为正整数:" << endl;
    int n;
    cin >> n;
    while((n % 2 == 0) || (cin.fail()))
    {
        if(cin.fail())
        {
            cin.clear();
            string item;
            cin >> item;
        }
        cout << "您输入的数不是奇数，请重新输入" << endl;
        cin >> n;
    }
    magic_square(n);


    return 0;
}
void magic_square(int n)
{
    vector<vector<int> > ms(n, vector<int>(n, 0));
    int k = 1;
    int row = n - 1;
    int column = n / 2;
    bool flag1 = true;
    bool flag2 = true;
    bool flag = false;
    int counter = 0;
    while(1)
    {
        if((row == n) && flag1)
        {
            row = 0;
            flag1 = false;
        }
        if((column == n) && flag2)
        {
            column = 0;
            flag2 = false;
        }
        cout << "row " << row << endl;
        cout << "column " << column << endl;

        if(ms[row][column] == 0)
        {
            ms[row][column] = k;
        }
        else
        {
            if(column == 0 || column == n - 1)
                ms[row-1][column] = k;
            else
                ms[row][column-1] = k;
        }
        counter++;
        if(counter == n * n)
            break;
        if(flag1 && row < n)
            row++;
        else if(flag && n > 0)
            row--;
        else if(row < n-1)
        {
            row++;
            if(row == 4)
                flag = true;
        }

        if(flag2 && column < n)
            column++;
        else if (column < n-1)
            column++;
        k++;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << setw(4)<< ms[i][j];
        }
        cout << endl;
    }

}
//逻辑有点不太正确 
