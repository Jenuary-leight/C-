#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void alternating_sum(int a[],int n)
{
	int sum =0;
	for(int i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			a[i] = (-1)*a[i];
		}
		sum = sum + a[i];
	}
	cout<<"�����Ϊ��"<<endl;
	cout<<sum;
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
		a[i]=rand()%(100-0+1)+0;
	}
	cout<<"ԭ���������ǣ�"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	alternating_sum(a,n);
	
	return 0;
}
