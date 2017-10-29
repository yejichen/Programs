#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
int f[505];
void mul(int a)
{
    int i,j,k,temp=0;
    for(i=0;i<500;i++)
    {
        temp=temp+f[i]*a;
        f[i]=temp%10;
        temp=temp/10;
    }
}
void sub(int x)
{
    f[0]-=x;
    int k=0;
    while(k<500&&f[k]<0)
    {
        f[k]=f[k]+10;
        f[k+1]--;
        k++;
    }
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i,j,k;
        memset(f,0,sizeof(f));
        f[0]=1;
        for(i=0;i<n/10;i++) mul(1024);
        for(i=0,k=1;i<n%10;i++) k=k*2;
        mul(k);
        sub(1);
        printf("%d\n",int(n*log(2)/log(10)+1));
        for(i=0,k=499;i<10;i++)
        {
            for(j=0;j<50;j++)
            {
                printf("%d",f[k]);
                k--;
            }
            printf("\n");
        }
    }
    return 0;
}
