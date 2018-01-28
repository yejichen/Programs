#include<iostream>
using namespace std;
char map[105][105];
void search(int x,int y)
{
	if(map[x-1][y]=='.') search(x-1,y);
	if(map[x+1][y]=='.') search(x+1,y);
	if(map[x][y-1]=='.') search(x,y-1);
	if(map[x][y+1]=='.') search(x,y+1);
	
}
int main()
{
	int t,m,n,k,x1,y1,x2,y2;;
	cin>>t;
	while(t!=0)
	{
		t--;
		cin>>m>>n;
		for(i=0;i<105;i++)
			for(j=0;j<105;j++)
				map[i][j]='*';
		for(i=1;i<=m;i++)
			for(j=1;j<=n;j++)
				cin>>map[i][j];
		cin>>k>>x1>>y1>>x2>>y2;
		search(x1,y1);
	}
}
