//  https://codeforces.com/contest/459/problem/B

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
              ll n;
              cin>>n;
              ll a[n];
              
              for(ll i=0;i<n;i++)
              {
                     cin>>a[i];
              }
              
              sort(a,a+n);
              ll min=a[0];
              ll max=a[n-1];
              ll c1=0,c2=0;
              
              for(ll i=0;i<n;i++)
              {
              if(a[i]==min)
              c1++;
              if(a[i]==max)
              c2++;
              }
              
              ll combinations = c1*c2;
              
              ll diff=max-min;
              
              cout<<diff<<" ";
              
              
              // case : 2 2 2 2
              // min=max=2 
              
              if(min==max)
              cout<<n*(n-1)/2;
              else
              cout<<combinations;
    
	            return 0;
}
