#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void remove_min(int a[],int n)
{
	int small = a[0];
	int pos=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<small)
		{
			small = a[i];
			pos = i;
		}
	}
	for(int i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n-=1;
	cout<<"�Ķ�������飺"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	srand(time(0));
	int a[100];
	cout<<"����������Ҫ��������"<<endl;
	int n;
	cin >>n;
	for(int i=0;i<n;i++)
	{
		a[i] = rand()%(100-0+1)+0;
	}
	cout<<"ԭ�������飺"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	remove_min(a,n);
	
	return 0;
}
