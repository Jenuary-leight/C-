/*
 ******************************************************************
 *
 *  ����:     ��������Ҫ�����ڻ÷�
 *
 *  �ļ���:   P6_6.cpp
 *
 *  ���� :    Yipeng Zhang
 *
 *  ��λ :    ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 *  E-mail:   1262223614@qq.com
 *
 *  ʱ�� :    2021��5��1��
 *
 *  �汾 :    1.0
 *
 ******************************************************************
 */
#include<iostream>

using namespace std;

int main()
{

    cout << "������16������ֵ:" << endl;
    int square[4][4];
    int counter[17] = {0};
    bool flag1 = true;
    bool flag2 = true;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> square[i][j];
            if(square[i][j] < 17)
            {
                counter[square[i][j]]++;
            }
        }
    }
    for(int i = 1; i < 17; i++)
    {
        if(counter[i] == 0)
        {
            flag1 = false;
            break;
        }

    }
    int sum[10] = {0};
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            sum[i] += square[i][j];
        }
    }
    for(int j = 0; j < 4; j++)
    {
        for(int i = 0; i < 4; i++)
        {
            sum[j+4] += square[i][j];
        }
    }
    for(int i = 0,j = 0; i < 4; i++,j++)
    {
        sum[i+8] +=square[i][j];
    }
    for(int i = 1; i < 12; i++)
    {
        if(sum[i] != sum[i-1])
        {
            flag2 = false;
        }
    }
    if(flag1 && flag2)
        cout << "����������ݿ��Թ��ɻ÷�." << endl;
    else
        cout << "����������ݲ����Թ��ɻ÷�." << endl;

    return 0;
}
