#include<iostream>
#include<cmath>
using namespace std;
int a[10000];
int val[10000]={0};
int n,p,bj=0,js=0,t=0;
/*
powered in 2017
setup: 1.all the numbers in the array "value" is 0 2.input the ordered values into the array "a"
step 1.use a loop to check the numbers. if we used the numbers, then mark it into '1'(val)
step 2.if the loop is finished, then loop from the end to give the numbers back, mark the numbers into '0'(val)
step 3.use a loop inside the back loop(j), if the loop inside have detected a number in val is 0,then go back to step 1
make sure you're right! GOOD LUCK ANYWAY.
*/
void print()
{
	for(int i=1;i<=n-1;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<a[n];
	cout<<endl;
	return;
}
void back(int x) 
{
	int i,j;
	if(x>n)
	{
		if(a[1]==1)
		{
			print();
			return;
		}
		else return;
	}
	for(i=1;i<=n;i++)
	{
		if(val[i]==0)
		{
			val[i]=1;
			a[x]=i;
			p=a[x]+a[x-1];
			bj=0;
			for(j=2;j<=sqrt(p);j++)
			{
				if(p%j==0)
				{
					bj=1;
					break;	
				} 
			}
			if(bj==0) back(x+1);
			val[i]=0;
		}
	}		
}
int main()
{
	cin>>n;
	if(n%2!=1)
		back(1);
	return 0;
}
