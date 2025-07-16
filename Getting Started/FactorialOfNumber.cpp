#include<bits/stdc++.h>
using namespace std;

void solve()
{
	long long int n, ans = 1;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		ans *= i;
	}
	cout << ans << "\n";
}

int main()
{
	int t;
	cin >> t;
	while(t--)	solve();
	return 0;
}