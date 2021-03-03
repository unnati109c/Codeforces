//  https://codeforces.com/contest/112/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string t1, t2;
    cin>>t1>>t2;
    
    transform(t1.begin(), t1.end(), t1.begin(), ::tolower);
    transform(t2.begin(), t2.end(), t2.begin(), ::tolower);
    
    if(t1==t2) cout<<0;
    else if(t1<t2) cout<<-1;
    else if(t1>t2) cout<<1;
    
    return 0;
}
