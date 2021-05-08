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
	cout<<"偶数下标为："<<endl;
	for(int i=0;i<10;i++)
	{
		temp=a[i];
		if(temp%2==0)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
	cout<<"这些偶数为："<<endl;
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
	cout<<"逆序输出为："<<endl;
	for(int i=9;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void first_last_a(int a[],int b)
{
	cout<<"第一个和最后一个元素为："<<endl;
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
