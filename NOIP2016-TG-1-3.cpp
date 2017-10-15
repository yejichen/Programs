#include<iostream>
using namespace std;
int r[1000005];
typedef struct
{
   int num[1000005];
   int sd[1000005];
   int ed[1000005];
}orders;
orders order;
int Q[10000000],n,m,i;
bool check(int x)
{
    int total=0;
    for(int i=1;i<=n;++i)Q[i]=0;
    for(int i=1;i<=x;++i)Q[order.sd[i]]+=order.num[i];Q[order.ed[i]+1]-=order.num[i];
    for(int i=1;i<=n;++i)
    {
        total+=Q[i];
        if(total>order.num[i])return false;
    }
    return true;
}
int main()
{
    cin>>n>>m;
    int le,ri,mid;
    for(i=1;i<=n;i++) cin>>r[i];
    for(i=1;i<=m;i++)
    {
       cin>>order.num[i]>>order.sd[i]>>order.ed[i];
    }
    le=1;ri=m;
    while(le<ri-1)
    {
       mid=(le+ri)/2;
       if(check(mid)) le=mid+1;
       else ri=mid-1; 
    }
    if(le<ri) cout<<0<<endl;
    else cout<<-1<<endl<<ri+1<<endl; 
    system("pause");
    return 0;
} 
