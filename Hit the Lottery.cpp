//  https://codeforces.com/contest/996/problem/A

#include <iostream>
using namespace std;

int main()
{
int x,total;
cin>>x;

total=x/100+(x%100/20)+(x%20/10)+(x%10/5)+(x%5);
cout<<total;
return 0;
}
