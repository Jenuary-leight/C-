/*
 ******************************************************************
 *
 *  ����:     ��������Ҫ�����ڱ�д��������Ϸ
 *
 *  �ļ���:   P6_9.cpp
 *
 *  ���� :    Yipeng Zhang
 *
 *  ��λ :    ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 *  E-mail:   1262223614@qq.com
 *
 *  ʱ�� :    2021��5��4��
 *
 *  �汾 :    1.0
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
        cout << "���һλ����������ӵ�����:";
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
                    cout << "��ϲ��һλ��һ�ʤ" << endl;
                    flag1 = false;
                    flag2 = false;
                    break;
                }
            }
            cout << endl;
            if(!flag2)
                break;
        }

        cout << "��ڶ�λ����������ӵ�����:";
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
                    cout << "��ϲ�ڶ�λ��һ�ʤ" << endl;
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
