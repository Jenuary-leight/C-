/*
 *********************************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ƕ�6_14���Ըı䡣
 *
 * �ļ����� E6_17.cpp
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
vector<int> append(vector<int> a,vector<int> b)
{
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}
	for(int i=0;i<b.size();i++)
	{
		cout<<b[i]<<" ";
	}

}
int main()
{
	cout<<"������a�������м���Ԫ�أ�"<<endl;
	int n1;
	cin>>n1;
	vector<int> a(n1);
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
	}
	cout<<"������b�������м���Ԫ�أ�"<<endl;
	int n2;
	cin>>n2;
	vector<int> b(n1);
	for(int i=0;i<n1;i++)
	{
		cin>>b[i];
	}
	append(a,b);
	
	return 0;
}
