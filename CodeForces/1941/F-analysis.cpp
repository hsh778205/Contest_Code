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



#define N 1000010


int a[N],d[N],f[N];
vector<int>sum;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cout.precision(10);
	freopen("F.in","r",stdin);
	int t=1;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<=m;i++)
		{
			cin>>d[i];
		}
		for(int i=1;i<=k;i++)
		{
			cin>>f[i];
		}
		
		
		for(int i=2;i<=n;i++) cout<<a[i]-a[i-1]<<" ";
		cout<<endl;
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=k;j++)
			{
				sum.push_back(d[i]+f[j]);
			}
		}
		
		sort(sum.begin(),sum.end());
		for(int i=0;i<(int)sum.size();i++) cout<<sum[i]<<" ";
		
	}
	return 0;
}
