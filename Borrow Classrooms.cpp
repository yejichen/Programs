#include<iostream>
using namespace std; 
/*struct node
{
    int l,r,w;
}tree[4*n+5];
void buildtree(int l,int r,int k)
{
    tree[k].l=l;
    tree[k].r=k;
    if(l==r)
    {
        cin>>tree[k].w;
        return;
    }
    int m=(l+r)/2;
    buildtree(l,m,k*2);
    buildtree(m+1,r,k*2+1);
    tree[k].w=tree[k*2].w+tree[k*2+1].w; 
}*/
int d[1000000],s[1000000],t[1000000];
int S[1000000],T[1000000];
int last;
bool check(int l,int r)
{
    int mid=(l+r)/2; 
    if(last>mid)
    {
        for(i=mid+1;i<=last;i++)
        {
            S[s[i]]-=d[i];
            T[t[i]]+=
        }
    }
    if(last<mid)
    {
        for(i=last;i<=mid;i++)
        {
            S[s[i]]-=
            T[t[i]]+=
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int r[n];
    for(i=0;i<n;i++) cin>>r[i];
    for(i=0;i<m;i++)
    {
        cin>>d[i]>>s[i]>>t[i]; //d代表需要的教室数，s、t 
    }
    if(check(0,m))
    {
            
    }
}
