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

int n,m,x;
set<int>dp,last;


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
		cin>>n>>m>>x;
		last.clear();
		dp.clear();
		last.insert(x-1);
		while(m--)
		{
			int r;
			string str;
			cin>>r>>str;
			for(set<int>::iterator it=last.begin();it!=last.end();it++)
			{
				if(str=="0"||str=="?")
				{
					dp.insert((*it+r)%n);
				}
				if(str=="1"||str=="?")
				{
					dp.insert((*it+n-r)%n);
				}
				
				
			}
			
			
			last=dp;
			dp.clear();
		}
		
		cout<<last.size()<<endl;
		for(set<int>::iterator it=last.begin();it!=last.end();it++)
		{
			cout<<*it+1<<" ";
		}
		cout<<endl;
	}
	return 0;
}
