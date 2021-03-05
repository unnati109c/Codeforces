//  https://codeforces.com/contest/1283/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, a, b;
	cin >> t;
	while(t--)
	{
		cin >> a >> b;
		a = 23 - a;
		b = 60 - b;
		cout << a * 60 + b << "\n";
	}
  return 0;
}
