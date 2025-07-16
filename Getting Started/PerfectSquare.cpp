#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int b = sqrt(n);
	if(b * b == n)	cout << "Yes\n";
	else cout << "No\n";
}

int main()
{
	int t;
	cin >> t;
	while(t--)	solve();
	return 0;
}