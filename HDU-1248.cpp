#include<iostream>
using namespace std;
int main()
{
	int n,i,m,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m;
		int a[m]={};
		for(j=1;j<=m;j++)
		{
			if(j%150==0) a[j]=1;
			if(j%200==0) a[j]=1;
			if(j%350==0) a[j]=1;
		}
		for(j=m;j>=1;j--)
		{
			if(a[j]==1)
			{
				cout<<m-j<<endl;
				break;	
			} 
		}
	}
	return 0;
}
