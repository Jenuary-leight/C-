/*
 ******************************************************************
 *
 *  功能:     本程序主要是用于保加利亚纸牌游戏。
 *
 *  文件名:   P6_5.cpp
 *
 *  作者 :    Yipeng Zhang
 *
 *  单位 :    河南大学计算机与信息工程学院
 *
 *  E-mail:   1262223614@qq.com
 *
 *  时间 :    2021年5月1日
 *
 *  版本 :    1.0
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
    cout << "初始时各牌堆的数量为:" << endl;
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

    cout << "本回合牌堆情况为:" << endl;
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



