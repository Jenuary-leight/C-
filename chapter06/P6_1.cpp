/*
 *********************************************************************************************************
 *
 * ���ܣ�   ��������Ҫ��ʹ����ͬ�����������ڡ�
 *
 * �ļ����� P6_1.cpp
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
#include<cstdlib>
#include<ctime>
#include<vector>

using namespace std;

void same(vector<int> a)
{
	for(int i=0;i<a.size()-1;i++)
	{
		if(a[i+1]==a[i])
		{
			cout<<" "<<"("<<a[i]<<" "<<a[i+1]<<")"<<" ";
		}
		else
		{
			cout<<" "<<a[i];
		}
	}
}
int main()
{
	srand(time(0));
	cout<<"����������Ҫ����Ԫ�أ�"<<endl;
	int n1;
	cin>>n1;
	vector<int> a(n1);
	for(int i=0;i<n1;i++)
	{
		a[i] = rand()%(6+1-1)+1;
	 } 
	same(a);
	
	return 0;
}
