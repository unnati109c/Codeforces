//  https://codeforces.com/contest/32/problem/B

#include<iostream>
using namespace std;

int main()
{
       // 0 as . 
       //1 as -.
       //2 as --
       
       string s;
       cin>>s;
       string ans="";
       for(int i=0;i<s.length();i++)     //--.
       {
              if(s[i]=='.')
              {
              ans+="0";
              }
              else
              {
              if(s[i]=='-')
              {
                  if(s[i+1]=='.')
                  {
                  ans+="1";
                  ++i; 
                  }
                  
                  else if(s[i+1]=='-')
                  {
                  ans+="2";
                  ++i; 
                  } 
              }
              
            }
              
       }
       cout<<ans<<endl;
       
       return 0;
}
