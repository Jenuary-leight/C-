/*
 ******************************************************************
 *
 *  功能:     本程序主要是用于编写三连棋游戏
 *
 *  文件名:   P6_9.cpp
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

int main()
{
    char games[3][3] = { ' '};
    bool flag1 = true;
    bool flag2 = true;
    bool flag3 = true;
    while(flag1)
    {
        cout << "请第一位玩家输入棋子的坐标:";
        int row,column;
        cin >> row >> column;
        games[row][column] = 'o';
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout << games[i][j];
                if((games[i][0] == 'o' && games[i][1] == 'o' && games[i][2] == 'o') ||
                        (games[0][j] == 'o' && games[1][j] == 'o' && games[2][j] == 'o')||
                        (games[0][0] == 'o' && games[1][1] == 'o' && games[2][2] == 'o'))
                {
                    cout << "恭喜第一位玩家获胜" << endl;
                    flag1 = false;
                    flag2 = false;
                    break;
                }
            }
            cout << endl;
            if(!flag2)
                break;
        }

        cout << "请第二位玩家输入棋子的坐标:";
        int row2,column2;
        cin >> row2 >> column2;
        games[row2][column2] = '+';
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout << games[i][j];
                if((games[i][0] == '+' && games[i][1] == '+' && games[i][2] == '+') ||
                        (games[0][j] == '+' && games[1][j] == '+' && games[2][j] == '+')||
                        (games[0][0] == '+' && games[1][1] == '+' && games[2][2] == '+'))
                {
                    cout << "恭喜第二位玩家获胜" << endl;
                    flag1 = false;
                    flag3 = false;
                    break;
                }
            }
            cout << endl;
            if(!flag3)
                break;
        }

    }
    return 0;
}
