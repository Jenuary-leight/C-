/*
 ******************************************************************
 *
 *  ����:     ��������Ҫ�������������
 *
 *  �ļ���:   P6_3.cpp
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
    int num[10]= {0};
    int values[10]={1,2,3,4,5,6,7,8,9,10};
    int j;
    int p = 9;
    for(int i = 0; i < 10; i++)
    {
        if(p > 0)
        {
            j = rand() % p + 1;
        }
        if(p==0)
        {
            j = 0;
        }
        num[i] = values[j];
        if(j < p)
        {
            for(int k = j; k < p; k++)
            {
                values[k]=values[k+1];
            }
        }
            p--;
    }
    for(int i = 0; i < 10; i++)
        cout << num[i] << " ";

    return 0;
}
