/*
 ******************************************************************
 *
 *  ����:     ��������Ҫ�����ڱ�д������Ϸ
 *
 *  �ļ���:   P6_10.cpp
 *
 *  ���� :    Yipeng Zhang
 *
 *  ��λ :    ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 *  E-mail:   1262223614@qq.com
 *
 *  ʱ�� :    2021��5��2��
 *
 *  �汾 :    1.0
 *
 ******************************************************************
 */
#include<iostream>

using namespace std;

int main()
{
    const int CAPACITY = 10000;
    char pattern[CAPACITY][CAPACITY];
    cout << "�������ʼͼ��������:" << endl;
    int i = 0; j = 0;
    int counter = 0;
    while(1)
    {
        cin >> i >> j;
        pattern[i][j] = 'o';
        counter++;
        if(cin.get() == '\n')
            break;
    }
    for(int i = 0; i < counter; i++;)
    {
        for(int j = 0; i < counter; j++)
        {
            cout << pattern[i][j];
        }
        cout << endl;
    }

    return 0;
}
//�����Ϸ̫�ѣ�����д 
