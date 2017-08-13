#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int a[10000];
int val[10000];
int n;
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
    cout<<1;
    for(int i=2;i<=n;i++)
    {
        cout<<' '<<a[i];
    }
    cout<<endl;
    return;
}
bool prime(int x)
{
    int bj=0;
    for(int j=2;j<=sqrt(x);j++)
    {
        if(x%j==0)
        {
            bj=1;
            break;    
        } 
    }
    if(bj==0) return true;
    else return false;
}
void back(int x) 
{
    int i;
    if(x==n)
    {
        if(prime(a[n]+1)==true) print();
        return;
    }
    for(i=1;i<=n;i++)
    {
        if(val[i]==0&&prime(a[x]+i)==true)
        {
            val[i]=1;
            a[x+1]=i;
            back(x+1);
            val[i]=0;
        }
    }    
    return;    
}
int main()
{
    int t=0;
    while(cin>>n)
    {
        t++;
        cout<<"Case "<<t<<":"<<endl;
        memset(a,0,sizeof(a));
        memset(val,0,sizeof(val));
        a[1]=1;
        val[1]=1;    
        back(1);
        cout<<endl;
    }
    return 0;
}
