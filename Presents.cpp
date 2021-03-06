//  https://codeforces.com/contest/136/problem/A

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n;
       cin>>n;
       int a[n];
       int b[n];
       for(int i=0;i<n;i++)
       {
              cin>>a[i];
       }
     
       //input :  2 3 4 1
       //output : 4 1 2 3

       for(int i=0;i<n;i++)
       {
              b[a[i]-1]=i+1;
       }
       
       for(int i=0;i<n;i++)
       {
              cout<<b[i]<<" ";
       }
       
      return 0;
}
 
