/*
 ******************************************************************
 *
 *  ����:     ��������Ҫ�����ڱ�������ֽ����Ϸ��
 *
 *  �ļ���:   P6_5.cpp
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
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;

void play_game(vector<int>& num);

int main()
{
    vector<int> num;
    srand(time(0));
    int values;
    int sum = 45;
    for(int i = 0; i < 4; i++)
    {
        values = rand() % 44 + 1;
        while(values+5-i-1>sum)
        {
            values = rand() % 44 +1;
        }
        sum -= values;
        num.push_back(values);
    }
    num.push_back(sum);
    cout << "��ʼʱ���ƶѵ�����Ϊ:" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    play_game(num);

    return 0;
}
void play_game(vector<int>& num)
{
    int counter[10] = {0};
    bool flag = true;
    for(int i = 0; i < num.size(); i++)
    {
        num[i] -= 1;
    }
    num.push_back(num.size());
    for(vector<int>::iterator it=num.begin(); it!=num.end();)
    {
        if(*it == 0)
        {
            it = num.erase(it);
        }
        else
        {

            it ++;
        }
    }

    cout << "���غ��ƶ����Ϊ:" << endl;
    for(int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < num.size(); i++)
    {
        if(num[i] < 10)
        {
            counter[num[i]]++;
        }
    }
    for(int i = 1; i < 10; i++)
    {
        if(counter[i] == 0)
        {
            flag = false;
            fill(counter,counter+10,0);
            break;
        }
    }
    if(num.size() == 9 && flag)
        return;

    play_game(num);

}



