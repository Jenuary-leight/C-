/*
 *********************************************************************************************************
 *
 * 功能：   本程序主要是访问二维数组。
 *
 * 文件名： E6_23.cpp
 *
 * 作者：   Yipeng Zhang
 *
 * 单位：   河南大学计算机与信息工程学院
 *
 * E-mail:  1262223614@qq.com
 *
 * 时间：   2021年5月5日
 *
 * 版本：   1.0
 *
 *********************************************************************************************************
*/
 #include<iostream>

using namespace std;
void judge(vector<string>a,int num)
{
    for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(num==a[i][j])
                {
                    cout<<i<<" "<<j<<endl;
                    break;
                }
            }
        }
}
int main()
{
	cout<<"请输入一个数组"<<endl;
    int a[4][4]={};
    {
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                cin>>a[i][j];
            }
        }
    }
    cout<<"请输入你要找的数"<<endl;
    int num;
    cin>>num;
    judge(a,num);
    return 0;
	
	return 0;
}
