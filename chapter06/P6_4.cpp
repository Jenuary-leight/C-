/*
 ******************************************************************
 *
 *  ����:     ��������Ҫ�����ڴ�ӡ�����ߵ������λ��
 *
 *  �ļ���:   P6_4.cpp
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

int next_vistor(bool occupied[],int stalls);

int main()
{
    bool occupied[10] = {false};
    cout << next_vistor(occupied,10) << endl;
    return 0;
}
int next_vistor(bool occupied[],int stalls)
{
    for(int i = 0; i < stalls; i++)
    {
        cout << "��" << (i+1) << "λ�����ߵ�λ��Ϊ" << stalls << endl;
    }
}
//��ʱû��˼· 
