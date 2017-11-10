#include<iostream>
using namespace std;
int n;
struct car
{
    int a;
    int b;
    int g;
    int k;
}c[10000+10];
int ans=-1;
int main()
{
    int tx,ty;
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
        cin>>c[i].a>>c[i].b>>c[i].g>>c[i].k;
    int p,q;
    cin>>p>>q;
    for(i=1;i<=n;i++)
    {
        tx=c[i].a+c[i].g;
        ty=c[i].b+c[i].k;
        if(p<=tx&&p>=c[i].a&&q<=ty&&q>=c[i].b)
            ans=i;		
    }
    cout<<ans<<endl;
    return 0;
}
