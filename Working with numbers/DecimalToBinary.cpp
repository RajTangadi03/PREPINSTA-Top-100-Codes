#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	string sol;
	cin >> n;
	while(n > 0)
	{
		sol.push_back('0' + n%2);
		n /= 2;
	}
	for(int i = sol.size()-1; i >= 0; i--)	cout << sol[i];
	cout << "\n";
}

int main()
{
	int t;
	cin >> t;
	while(t--)	solve();
	return 0;
}