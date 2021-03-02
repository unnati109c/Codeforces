//  https://codeforces.com/contest/445/problem/A


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{

              ll n,m;
              
              cin>>n>>m;
              
              char s[n][m];
              for(ll i=0;i<n;i++)
              {
                     for(int j=0;j<m;j++)
                     cin>>s[i][j];
                     
                     
              }
              
              for(int i=0;i<n;i++)
              {
                     for(int j=0;j<m;j++)
                     {
                            if(s[i][j]=='.')
                            {
                                   if(((i+j)%2)==0)
                                   s[i][j]='B';
                                   else
                                   s[i][j]='W';
                            }
                            cout<<s[i][j];
                     }
                     cout<<endl;
              }
            
	return 0;
}
