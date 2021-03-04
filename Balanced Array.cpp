//  https://codeforces.com/contest/1343/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
       int t;
       cin>>t;
       int n;
       while(t--)
       {
              cin>>n;
              int sum_even=0,sum_odd=0;
              
              if(n%4!=0)
              {
              cout<<"NO"<<endl;
              continue;
              }
              
              else
              {
                     cout<<"YES"<<endl;
                     for(int i=1;i<=n/2;i++)
                     {
                     cout<<i*2<<" ";
                     sum_even+=i*2;
                     }
                     
                     for(int i=1;i<n/2;i++)
                     {
                     cout<<i*2-1<<" ";
                     sum_odd+=(i*2-1);
                     }
              }
              
              cout<<sum_even-sum_odd<<endl;
       }
 return 0;
}
 
