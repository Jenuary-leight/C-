/*
 ******************************************************************
 *
 *  ����:     ��������Ҫ�����ڱ������Ԫ���ظ�ֵ
 *
 *  �ļ���:   P6_2.cpp
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
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    srand(time(0));
    int values[20];
    int counter[7]={0};
    for(int i = 0; i < 20; i++)
    {
        values[i] = rand() % 6 +1;
        counter[values[i]]++;
    }
    int max = counter[1];
    for(int i = 2; i < 7; i++)
    {
        if(counter[i] > max)
        {
            max = counter[i];
        }
    }
    for(int i = 1; i < 7; i++)
    {
        if(counter[i] == max)
            cout << "(";
        for(int j = 1; j < counter[i]; j++)
        {
            cout << counter[i] << " ";
        }
        if(counter[i] == max)
            cout << ")";
    }

    return 0;
}
