//  https://codeforces.com/contest/757/problem/A

#include <bits/stdc++.h> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	
	int i,count=0;
	int B=0,u=0,l=0,b=0,a=0,s=0,r=0;
	
	string c;
	cin>>c;
	
	int l1=c.length();
	
	for(i=0;i<l1;i++)
	{
		if(c[i]=='B') B++;
		if(c[i]=='u') u++;
		if(c[i]=='l') l++;
		if(c[i]=='b') b++;
		if(c[i]=='a') a++;
		if(c[i]=='s') s++;
		if(c[i]=='r') r++;
	}
	for(i=0;i<l1;i++)
	{
		if(B>=1 && u>=2 && l>=1 && b>=1 && a>=2 && s>=1 && r>=1)
		{
		       count++;
		       B--;
		       u-=2;
		       l--;
		       b--;
		       a-=2;
		       s--;
		       r--;
		       
		}
		else break;
	}
	cout<<count<<endl;

	return 0;
}
