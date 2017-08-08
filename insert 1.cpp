#include<iostream>
using namespace std;
int a[100000];
int p,bj,js=0;
int b[100000];
void back(int x)
{
	int i;
	if(y==0)
	{
		print();
		return;
	}
	if(x>n) return;
	a[x]=1;
	back(x+1,y-1);
	a[x]=0;
	back(x+1,y);
}
int main()
{
	int n;
	int t=0;
	while(cin>>n)
	{
		t++;
		for(i=0;i<n;i++)
		{
			a[i]=i;
		}
	}
}
