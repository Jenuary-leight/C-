/*
 *********************************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ƕ�6_14���Ըı䡣
 *
 * �ļ����� E6_16.cpp
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
#include<cmath>

using namespace std;

void bar_chart(double val[],int size)
{
//	double sum = 0; 
//	for(int i=0;i<size;i++)
//	{
//		sum = values[i]+sum;
//	}
//	double a[100];
//	for(int i=0;i<size;i++)
//	{
//		a[i] = values[i]/sum;
//	}
//	int b[100];
//	for(int i=0;i<size;i++)
//	{
//		b[i] = 40*a[i];
//	}
//	for(int i =0 ;i<size;i++)
//	{
//		for(int j=0;j<b[i];j++)
//		{
//			cout<<"*";
//		}
//		cout<<endl;
//	}
	int big= 0;
	int n1;
	double values[100];
	for(int i=0;i<size;i++)
	{
		values[i] = abs(val[i]);
	}
	
	for(int i=0;i<size;i++)//�������±� 
	{
		if(values[i]>big)
		{
			big = values[i];
			n1 = i;
		}
	}
	int b[100];
	for(int i=0;i<size;i++)
	{
		b[i] = 40*(values[i]*1.0/values[n1]);
	}
	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<b[i];j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

int main()
{
	double val[100];
	int n;
	cout<<"����������Ҫ�������֣�"<<endl;
	cin>>n; 
	cout<<"������������飺"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>val[i];
	}
	bar_chart(val,n);
	
	return 0;
}
