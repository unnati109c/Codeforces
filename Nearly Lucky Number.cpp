//  https://codeforces.com/contest/110/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
     long long int n;
     cin>>n;
     int count=0;
     int digit=0;
     while(n!=0)
     {
            digit=n%10;
            if(digit==4 || digit==7)
            count++;
            n=n/10;
     }
     
     if(count==4 ||count==7)
     cout<<"YES";
     else
     cout<<"NO";
     
       return 0;
}
