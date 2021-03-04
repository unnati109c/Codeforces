//  https://codeforces.com/contest/509/problem/A

#include<bits/stdc++.h>
using namespace std;
 
int table(int row, int col)
{
    if (row == 1 or col == 1)
        return 1;
    return table(row - 1, col) + table(row, col - 1);
}
 
int main()
{
    int n;
    cin >> n;
    cout << table(n,n);
    return 0;
}
