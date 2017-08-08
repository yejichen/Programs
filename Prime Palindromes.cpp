#include<iostream>
#include<cmath>
using namespace std;
int c[100000005];
int d[10];
int e[100000005];
int t;
void split(int num)
{
    int n=num;
    int count=0;  
    int temp,power;

    while(num!=0)  
    {
        num=num / 10;
        count++;
    }

    for(int i= 1;i <= count;i++)
    {
        power=pow(10.0,count - i);
        temp=n / power;
        d[t]=temp;
        t++;
        n=n%power;
    }
}
int main()
{
    int m,z,p=0,i,j,bj,q,r=0,js;
    cin>>m>>z; //m<z
    for(i=m;i<=z;i++)
    {
        if(i<10)
        { 
            if(i==2 || i==3 || i==5 ||i==7) cout<<i<<endl;
        }
        else
        {
            if(i%2==1)
            {
                c[p]=i;
                p++;
            }
        }
    }
    for(i=0;i<p;i++)
    {
        t=0;
        split(c[i]);
        q=t-1;
        bj=0;
        for(j=0;j<t;j++)
        {
            if(d[j]==d[q])
            {
                bj++;
            }
            q=q-1;
            if(j>=q) break;
        }
        if(bj==t/2)
        {
            e[r]=c[i];
            r++;
        }
    }
    for(i=0;i<r;i++)
    {
        js=0;
        for(j=2;j<=sqrt(e[i]);j++)
        {
            if(e[i]%i==0)
            {
                js=1;
                break;
            }
        }
        if(js==0) cout<<e[i]<<endl;
    }
    return 0;
}
