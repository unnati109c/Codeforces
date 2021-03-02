//  https://codeforces.com/contest/1345/problem/A

#import<bits/stdc++.h>
using namespace std;

int main()
{
  int m,n,t;
  cin>>t;
	while(t--)
	{
		cin>>n>>m;
		if(n==1 || m==1 || n==2 && m==2)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
  return 0;
}
