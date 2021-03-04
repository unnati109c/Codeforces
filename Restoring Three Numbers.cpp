//  https://codeforces.com/contest/1154/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
long int a[4];
cin>>a[0]>>a[1]>>a[2]>>a[3];
sort(a,a+4);
long int x,y,z;
x=a[3]-a[0];
y=a[3]-a[1];
z=a[3]-a[2];
cout<<x<<" "<<y<<" "<<z;
return 0;
}
