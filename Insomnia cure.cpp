//  https://codeforces.com/contest/148/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,l,m,k,d;
      cin>>n>>l>>m>>k>>d;
      
      int count=0;
      
      for(int i=1;i<=d;i++)
      {
        
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
        count++;
      }
    cout<<count;
       return 0;
}
