//largest, smallest, mean, median, elements with highest frequency of the elements of all elements
#include<iostream>// Header Class
using namespace std;
int mean(int a[],int n)//Function to calculate the mean of the elements
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		s=s+a[i];
	}
	s=s/n;
	return s;
}
int median(int a[],int n)//Function to calculate the median of the elements
{
	int t;
	if(n%2==0)
	{
		t=(a[n/2]+a[(n/2)+1])/2;
	}
	else
	{
		t=a[(n+1)/2];
	}
	return t;
}
int freq(int a[],int n)//Function to calculate the maximum frequency element
{
	int in=0,c=1;
	for(int i=0;i<n;i++)
	{
		int k=0;
		for(int j=0;j<n;j++)
		{
			if(a[j]==a[i])
			{
				k++;
			}
		}
		if(k>c)
		{
			k=c;
			in=i;
		}
	}
	return in;
}

int main()
{
	//Taking Input
	int n;
	cout<<"Enter the number of elements";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		int t;
		cout<<"Enter the element";
		cin>>t;
		a[i]=t;
	}
	for(int i=0;i<(n-1);i++)
	{
		for(int j=0;j<(n-i-1);j++)
		{
			if(a[j]>a[j-1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	int me=mean(a,n);
	int md=median(a,n);
	int f=freq(a,n);
	int max=a[0];//Maximum Element
	int min=a[n-1];//Minimum Element
	//Printing the Results
	cout<<"The mean value"<<me;
	cout<<"The median value"<<md;
	cout<<"The highest frequency number is"<<a[f];
	cout<<"The maximum value"<<max;
	cout<<"The minimum value"<<min;
}








	
