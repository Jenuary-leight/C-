#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void two_a(int a[],int size)
{
//		for(int i=0;i<10;i++)
//	{
//		a[i] = rand()%(100-0+1)+0;
//	}
	int temp;
	cout<<"ż���±�Ϊ��"<<endl;
	for(int i=0;i<10;i++)
	{
		temp=a[i];
		if(temp%2==0)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
	cout<<"��Щż��Ϊ��"<<endl;
		for(int i=0;i<10;i++)
	{
		temp=a[i];
		if(temp%2==0)
		{
			cout<<temp<<" ";
		}
	}
	cout<<endl;
}

void force_a(int a[],int n)
{
	cout<<"�������Ϊ��"<<endl;
	for(int i=9;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void first_last_a(int a[],int b)
{
	cout<<"��һ�������һ��Ԫ��Ϊ��"<<endl;
	cout<<a[0]<<" "<<a[b-1];
}
int main()
{
	srand(time(0));
	int a[10];
	
	for(int i=0;i<10;i++)
	{
		a[i] = rand()%(100-0+1)+0;
	}
    two_a(a,10);
    force_a(a,10);
    first_last_a(a,10);
//	for(int i=0;i<10;i++)
//	{
//		temp=a[i];
//		if(temp%2==0)
//		{
//			cout<<temp<<" ";
//		}
//	}
	
	return 0;
}
