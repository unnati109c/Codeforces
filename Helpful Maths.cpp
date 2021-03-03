//  https://codeforces.com/contest/339/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; 
	cin>>s;   // 1+1+3+1+3
	sort(s.begin(),s.end());   // ++++11133
	int i;
	for(i=s.length()/2;i<s.length()-1;i++)
		cout<<s[i]<<"+";
	cout<<s[i]<<endl;
	
	return 0;
}
