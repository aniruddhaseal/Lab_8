#include <iostream>//Header class
using namespace std;
int sum(int a[],int n)//Function to add the elements
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		s=s+a[i];
	}
	return s;
}

int main()
{
	//Taking Input the elements of the Array
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
	int s=sum(a,n);
	//Printing the sum
	cout<<"The sum of elements"<<s;
}
	
