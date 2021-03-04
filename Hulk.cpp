//  https://codeforces.com/contest/705/problem/A

#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;

cout<<"I hate";

for(int k=2; k<=n; k++)
{
    if(k%2==0)
    {
        cout<<" that I love";
    }
    else
        cout<<" that I hate";
}
cout<<" it";
return 0;}
