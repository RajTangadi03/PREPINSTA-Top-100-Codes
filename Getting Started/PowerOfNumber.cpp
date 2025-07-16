#include<bits/stdc++.h>
using namespace std;

void solve()
{
	long long int n, p;
	cin >> n >> p;
	if(p == 0)
	{
		cout << 1 << "\n";
	}
	else if(p == 1)
	{
		cout << n << "\n";
	}
	else
	{
		long long int ans = n, currP = p;
		while(p != 1)
		{
			ans *= ans;
			p /= 2;
		}
		if(currP & 1)
		{
			ans *= n;
		}
		cout << ans << "\n";
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)	solve();
	return 0;
}