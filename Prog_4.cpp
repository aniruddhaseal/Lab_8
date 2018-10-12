#include<iostream>//Header File
using namespace std;
int maxima(int x[],int n,int m)//Calculating Maximum Element
{
	int max=x[0];
	for(int i=0;i<(m+n);i++)
	{
		if(x[i]>max)
		{
			max=x[i];
		}
	}
	return max;
}
int minima(int x[],int n,int m)//Calculating Minimum Element
{
	int min=x[0];
	for(int i=0;i<(m+n);i++)
	{
		if(x[i]<min)
		{
			min=x[i];
		}
	}
	return min;
}



int main()
{
	//Input
	int n,m;
	cout<<"Enter the number of elements";
	cin>>n;
	int arr[n];
	int t;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the element";
		cin>>t;
		arr[i]=t;
	}
	cout<<"Enter the number of elements";
	cin>>m;
	int a[m];
	for(int i=0;i<m;i++)
	{
		cout<<"Enter the element";
		cin>>t;
		a[i]=t;
	}
	//Merging two Arrays
	int x[m+n];
	for(int i=0;i<(m+n);i++)
	{
		if(i<m)
		{
			x[i]=arr[i];
		}
		else
		{
			x[i]=a[i-m];
		}
	}
	for(int i=0;i<(m+n-1);i++)
	{
		for(int j=0;j<(n+m-i-1);j++)
		{
			if(x[j]>x[j-1])
			{
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
	}
	//Output
	int min=minima(x,n,m);
	int max=maxima(x,n,m);
	cout<<"Maximum"<<max;
	cout<<"Mininmum"<<min;
	return 0;
}



	
