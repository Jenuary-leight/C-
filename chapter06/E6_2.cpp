#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void first_last_a(int a[],int n)
{
	swap(a[0],a[n-1]);
	cout<<"������������ǣ�"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void move_a(int a[],int n)
{
	int temp = a[n-1];
	for(int i=n-1;i>0;i--)
	{
		a[i] = a[i-1];
	}
	a[0]=temp;
	cout<<"�ƶ���������ǣ�"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void two_a(int a[],int n)//c
{
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			a[i] = 0;
		}
	}
	cout<<"�滻��������ǣ�"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void largest_a(int a[],int n)
{
	int largest = a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>largest)
		{
			largest = a[i];
		}
	}
	for(int i=1;i<n-1;i++)
	{
		a[i] = largest;
	}
	cout<<"���ֵ�滻��"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void length_a(int a[],int n)//e
{
	if(n%2==0)
	{
		if(n<=4)
		{
			if(n==2)
			{
				a[0] = 0;
				a[1] = 0;
				n-=2;
 			}
 			else if(n==4)
 			{
 				a[1] = a[3];
 				n-=2;
			 }
		}
		else
		{
			for(int i=(n-1)/2;i<=n-1;i++)
			{
				a[i] = a[i + 2];
			}
			n-=2;
		}
		
	}
	else
	{
		for(int i=(n-1)/2;i<n;i++)
		{
			a[i]=a[i+1];
		}
		n-=1;
	}
	cout<<"�ı��������ǣ�"<<endl; 
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void force_a(int a[],int n)//f
{
	int a1[10];
	int a2[10];
	int n1=0;
	int n2 = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			a1[n1] = a[i];
			n1++;
		}
		else
		{
			a2[n2] = a[i];
			n2++;
		}
	}
	cout<<"ż����ǰ��"<<endl;
	for(int i=0;i<n1;i++)
	{
		cout<<a1[i]<<" ";
	}
	for(int i=0;i<n2;i++)
	{
		cout<<a2[i]<<" ";
	}
	cout<<endl;
}
bool true_a(int a[],int n)//g
{
	for(int i=0;i<n;i++)
	{
		if(a[i] != a[i+1])
		{
			return false;
		}
		
	}
	return true;
}
void second_a(int a[],int n)//h
{
	int a1[100];
	for(int i=0;i<n;i++)
	{
		a1[i]=a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]<a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
	cout<<"�ڶ�������ǣ�"<<a1[1]<<endl;
}
bool list_a(int a[],int n)
{
	int a1[100];
	int out;
	for(int i=0;i<n;i++)
	{
		out = a[i];
		a1[i]=out;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]<a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]!=a[i+1])
		{
			return false;
		}
	}
	return true;
	
}
bool same_a(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==a[i+1])
		{
			return true;
		}
	}
}
bool all_a(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		int temp = a[i];
		int n=0;
		for(int j=0;j<n;j++)
		{
			if(a[i] == temp)
			{
				n++;
			}
		}
		if(n==2)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	srand(time(0));
	int a[100];
	cout<<"��������Ҫ��������"<<endl;
	int n;
	cin >>n;
	for(int i=0;i<n;i++)
	{
		a[i]=rand()%(100-0+1)+0;
	}
	cout<<"ԭ����Ϊ��"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	first_last_a(a,n);
	move_a(a,n);
	two_a(a,n);
	largest_a(a,n);
	length_a(a,n);
	force_a(a,n);
	
	second_a(a,n);
	bool g = true_a(a,n);
	cout<<"�����е�Ԫ���Ƿ���ͬ��"<<g<<endl;
	bool i = list_a(a,n);
	cout<<"�����е�Ԫ���Ƿ��ǵ����ģ�"<<i<<endl;
	bool j = same_a(a,n);
	cout<<"�������Ƿ�����������ڵ�ֵ��"<<j<<endl;
	bool k = all_a(a,n);
	cout<<"�������Ƿ�����ظ�ֵ��"<<k<<endl;

	
	return 0;
}
