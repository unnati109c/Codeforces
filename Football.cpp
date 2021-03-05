//  https://codeforces.com/contest/96/problem/A

#include <bits/stdc++.h> 
using namespace std;

int main() 
{
       string s;
       cin>>s;
       int flag=0;
       if(s.length()>=7)
       {
       for(int i=0;i<s.length();i++)
       {
              if(s.substr(i,7)=="0000000" || s.substr(i,7)=="1111111" )
              {
              cout<<"YES"<<endl;
              flag=1;
              break;
              }
              
       }
       if(flag==0)
       cout<<"NO"<<endl;
       }
       else
       cout<<"NO"<<endl;
	
   
	
	
	return 0;
}
