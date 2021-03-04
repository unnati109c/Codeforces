//  https://codeforces.com/contest/731/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;

int sum=0;
int anticlock, clock;
int a=97;
for(int i=0;i<s.length();i++)
{
clock=abs(s[i]-a);
anticlock=26-clock;

if(clock<anticlock)
sum+=clock;
else sum+=anticlock;

a=s[i];
}
cout<<sum<<endl;

return 0;
}
