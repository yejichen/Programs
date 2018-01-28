//洛谷 P1032 字串变换
#include<iostream>
#include<queue>
#include<cmath>
#include<algorithm> 
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
vector< pair<string,string> > v;
set<string>reappear;
char a[25],b[25];
struct node
{
	int num;
	string s;
	node(int num,string s):num(num),s(s){};
};
bool bfs()
{
	queue<node> q;
	q.push(node(0,a));
	while(!q.empty())
	{
		node u=q.front();
		q.pop();
		if(u.num>10){ cout<<"NO ANSWER!"<<endl; return false; }
		for(int i=0;i<v.size();i++)
		{
			if(u.s.find(v[i].first)!=-1)
			{
				for(int j=u.s.find(v[i].first);j<=u.s.length();j=u.s.find(v[i].first,j+1))
				{
					string t=u.s;
					t.replace(j,v[i].first.length(),v[i].second);
					if(t==b){ cout<<u.num+1<<endl; return true; }
					if(!reappear.count(t))
					{
						q.push(node(u.num+1,t));
						reappear.insert(t);
					}
				}
			}
		}
	}
	return false;
}
int main()
{
	cin>>a>>b;
	char A[25],B[25];
	while(cin>>A>>B)
	{
		v.push_back(make_pair(A,B));
	}
	bfs();
	return 0;
} 
