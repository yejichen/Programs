#include<iostream>
#include<cstring>
using namespace std;
int step[5][5];
char map[5][5];
int m,ans,t;
int judge(int x,int y)
{
    int k;
    if(x<0||x>=m||y<0||y>=m)
       return 0;
    if(step[x][y]==1||map[x][y]=='X')
       return 0;
    for(k=x-1;k>=0;k--)
    {
       if(map[k][y]=='X')
          break;
       if(step[k][y]==1)
          return 0;
    }
    for(k=y-1;k>=0;k--)
    {
       if(map[x][k]=='X')
          break;
       if(step[x][k]==1)
          return 0;
    } 
    return 1;
}
void fill(int s)
{
    int x,y;
    if(s==m*m)
    {
       if(ans<t)
          ans=t;
       return;
    }
    x=s/m;
    y=s%m;
    if(judge(x,y))
    {
       t++;
       step[x][y]=1;
       fill(s+1);
       t--;
       step[x][y]=0;
       fill(s+1); 
    }
    else
       fill(s+1);
}
int main()
{
    int i,j;
    while(cin>>m)
    {
       t=0;
       if(m==0) break;
       for(i=0;i<m;i++)
       {
          for(j=0;j<m;j++)
          {
             cin>>map[i][j];
          }
       }
       memset(step,0,sizeof(step));
       ans=0;
       fill(0);
       cout<<ans<<endl;
    }
    system("pause");
    return 0;
}
