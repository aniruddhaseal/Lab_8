#include<iostream>//Header File
using namespace std;
int kLarge(int a[],int n,int k)//kTH Largest Element
{
	return a[k-1];
}
int kSmall(int a[],int n,int k)//kTH Smallest Element
{
	return a[n-k];
}

int main()
{
	//Input
	int n;
	cout<<"Enter the number of elements";
	cin>>n;
	int a[n];
	int t;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the element";
		cin>>t;
		a[i]=t;
	}
	for(int i=0;i<(n-1);i++)//Sorting
	{
		for(int j=0;j<(n-i-1);j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=(i+1);j<n;j++)
		{
			if(a[j]==a[i])
			{
				a[j]=0;
			}
		}
	}
	for(int i=0;i<(n-1);i++)//Sorting
	{
		for(int j=0;j<(n-i-1);j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	int zi=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			zi=i;
			break;
		}
	}
	int s,l;
	//Output
	cout<<"Which is the smallest number you want";
	cin<<s;
	cout<<kSmall(a,zi,s);
	cout<<"Which is the largest number you want ";
	cin<<l;
	cout<<kLarge(a,zi,l);	
		
}
		





	
