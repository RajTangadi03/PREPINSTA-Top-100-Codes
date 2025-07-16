#include<bits/stdc++.h>
using namespace std;

void solve()
{
	long long int n, sum = 0;
	cin >> n;
	if(n == 1)
	{
		cout << "Yes\n";
		return;
	}
	for(int i = 1; i <= n/2; i++)
	{
		if(n % i == 0)	sum += i;
	}
	if(sum == n)	cout << "Yes\n";
	else cout << "No\n";
}

int main()
{
	int t;
	cin >> t;
	while(t--)	solve();
	return 0;
}