/*
 *********************************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ƕ����������˳����Ըı䡣
 *
 * �ļ����� E6_19.cpp
 *
 * ���ߣ�   Yipeng Zhang
 *
 * ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 * E-mail:  1262223614@qq.com
 *
 * ʱ�䣺   2021��4��27��
 *
 * �汾��   1.0
 *
 *********************************************************************************************************
 */
 #include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> a,vector<int> b)
{
	int n3;
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<" "<<b[i]<<" ";
		n3=i;
	}
	for(int i =n3+1;i<b.size();i++)
	{
		cout<<b[i]<<" ";
	}
}
int main()
{
	int n1;
	cout<<"������a�������м���Ԫ�أ�"<<endl;
	cin>>n1;
	int n2;
	cout<<"������b�������м���Ԫ�أ�"<<endl;
	cin>>n2;
	vector<int> a(n1);
	vector<int> b(n2);
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n2;i++)
	{
		cin>>b[i];
	}
	merge(a,b);
	
	return 0;
}
