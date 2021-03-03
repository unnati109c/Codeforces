//  https://codeforces.com/contest/233/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=2,j=1;

    if(n%2==1){
        cout<<"-1"<<endl;
    }
    else
    {
        n/=2;
    while(n--)
    {
        cout<<i<<" ";
        cout<<j<<" ";
        i+=2;
        j+=2;
    }
    }


    return 0;
}
