//  https://codeforces.com/contest/448/problem/A

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int q,w,e,r,t,y;
	cin>>q>>w>>e>>r>>t>>y;
	int n;
	cin>>n;
	
	int cup=q+w+e;
	int medal=r+t+y;
	       

	if((ceil((double)cup/5)  + ceil((double)medal/10 )) <=n)
	   cout<<"YES"<<endl;
	else
	   cout<<"NO"<<endl;

	return 0;
}
