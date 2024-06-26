/**************************************************************
 * Problem: 
 * Author: Vanilla_chan
 * Date: 
 * E-Mail: heshaohong2015@outlook.com
 **************************************************************/
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
#include<cstring>
#include<cmath>
#include<map>
#include<set>
#include<queue>
#include<vector>
#include<limits.h>
#define IL inline
#define re register
#define LL long long
#define ULL unsigned long long
#ifdef TH
#define debug printf("Now is %d\n",__LINE__);
#else
#define debug
#endif
#ifdef ONLINE_JUDGE
char buf[1<<23],* p1=buf,* p2=buf,obuf[1<<23],* O=obuf;
#define getchar() (p1==p2&&(p2=(p1=buf)+fread(buf,1,1<<21,stdin),p1==p2)?EOF:*p1++)
#endif
using namespace std;



#define N 300000
int a[N];

map<int,int>mp;
int n,c,d;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cout.precision(10);
	int t=1;
	cin>>t;
	while(t--)
	{
		cin>>n>>c>>d;
		mp.clear();
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				mp[i*c+j*d]++;
			}
		}
		
		int mn=1000000009;
		for(int i=1;i<=n*n;i++)
		{
			cin>>a[i];
			mn=min(mn,a[i]);
		}
		
		for(int i=1;i<=n*n;i++) a[i]-=mn;
		bool win=1;
		for(int i=1;i<=n*n;i++)
		{
			if(mp.find(a[i])!=mp.end()&&mp[a[i]]>0)
			{
				mp[a[i]]--;
			}
			else 
			{
				win=0;
			}
		}
		if(win) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
	}
	return 0;
}
