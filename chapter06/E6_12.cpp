/*
 *********************************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ƕ������������ 
 *
 * �ļ����� E6_12.cpp
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
 #include<cstdlib>
 #include<algorithm>
 #include<ctime>

using namespace std;

void print(int a[])
{

	for(int i=0;i<20;i++)
	{
		a[i]=rand()%(99-0+1)+0;
	}
	cout<<"��20�����ǣ�"<<endl;
	for(int i=0;i<20;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void sort_a(int a[])
{
	sort(a,a+20);//sort(a,a+20,cmp)�ǴӴ�С���� 
	for(int i=0;i<20;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	srand(time(0));
	int a[100];
	print(a);
	sort_a(a);
	
	return 0;
}
