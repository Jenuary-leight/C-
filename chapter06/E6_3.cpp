/*
 *********************************************************************************************************
 *
 * ���ܣ�   ��������Ҫ��ʹ�ö�ά���齻�����С�
 *
 * �ļ����� E6_3.cpp
 *
 * ���ߣ�   Yipeng Zhang
 *
 * ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 * E-mail:  1262223614@qq.com
 *
 * ʱ�䣺   2021��5��5��
 *
 * �汾��   1.0
 *
 *********************************************************************************************************
*/
#include<iostream>

using namespace std;

int main()
{
	const int CAPACITY=1000;
    double values[CAPACITY];
    int current_size=0;
    cout<<"Please enter values,Q to quit: "<<endl;
    double input;
    while(cin>>input)
    {
        if(current_size<CAPACITY)
        {
            values[current_size]=input;
            current_size++;
        }
    }
    double largest=values[0];
    for(int i=1;i<current_size;i++)
    {
        if(values[i]>largest)
        {
            largest=values[i];
        }
    }
    for(int i=0;i<current_size;i++)
    {
        cout<<values[i];
        if(values[i]==largest)
        {
            cout<<"<==largest value";
        }
        cout<<endl;
    }
    double smallest=values[0];
    for(int i=1;i<current_size;i++)
    {
        if(values[i]<smallest)
        {
            smallest=values[i];
        }
    }
    for(int i=0;i<current_size;i++)
    {
        cout<<values[i];
        if(values[i]==smallest)
        {
            cout<<">==smallest value";
        }
        cout<<endl;
    }
	
	return 0;
}
