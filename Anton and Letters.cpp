//   https://codeforces.com/contest/443/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	set <char> s;
	char c;
	while (cin >> c) 
	{
		if (c == '{') continue;
		if (c == ' ') continue;
		if (c == ',') continue;
		if (c == '}') break;
		else s.insert(c);
	}
	cout << s.size() << endl;
	return 0;
}
