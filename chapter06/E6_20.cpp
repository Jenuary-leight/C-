/*
 *********************************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ƕ����������˳����Ըı䡣
 *
 * �ļ����� E6_20.cpp
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
#include<vector>
using namespace std;
vector<int> merge_sorted(vector<int> a,vector<int> b)
{
	vector<int> c(a.size()+b.size());
//	for(int i=0;i<b.size();i++)
//	{
//		c[i] = b[i];
//	}
//	for(int i=0;i<a.size();i++)
//	{
//		for(int j=0;j<b.size();j++)
//		{
//			if(a[i]<c[j])
//			{
//				for(int m=j;m<b.size()-1;m++)
//				{
//					c[m+1] = c[m];
//				}
//				c[j] = a[i];
//				for(int i=0;i<a.size()+b.size();i++)
//				{
//					cout<<c[i]<<" ";
//				}
//			}
//		}
//	}
	for(int i=0;i<a.size();i++)
	{
		c[i] = a[i];
	}
	for(int i=0;i<b.size();i++)
	{
		c[i+a.size()] = b[i];
	}
	for(int i=0;i<a.size()+b.size();i++)
	{
		cout<<c[i]<<" ";
	}
	for(int i=0;i<c.size()-1;i++)
	{
		for(int j=0;j<c.size()-i-1;j++)
		{
			if(c[j]>c[j+1])
			{
				swap(c[j],c[j+1]);
			}
		}
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
	merge_sorted(a,b);
	
	return 0;
}
