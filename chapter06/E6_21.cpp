/*
 *********************************************************************************************************
 *
 * ���ܣ�   ��������Ҫ��ʹ��д��ĸ��ǰ��
 *
 * �ļ����� E6_21.cpp
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

vector<string> c(vector<string> a)
{
	string temp;
	int high;
	string out;
	for(int i=0;i<a.size();i++)
	{
		temp = a[i];
		high = temp.length();
		for(int i=0;i<high;i++)
		{
			out = temp[i];
			if(out>="A"&&out<="Z")
			{
				swap(temp[0],temp[i]);
				a[i] = temp;
			}
		}
	}
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n1;
	cout<<"�����뼸��Ԫ�أ�"<<endl;
	cin>>n1;
	vector<string> a(n1);
	for(int i=0;i<n1;i++)
	{
		cin >>a[i];
	}
	c(a);
	
	return 0;
}
