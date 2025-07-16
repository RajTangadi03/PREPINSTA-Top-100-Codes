#include<bits/stdc++.h>
using namespace std;

void solve()
{
	long long int n;
	cin >> n;
	for(int i = 1; i <= n/2; i++)
	{
		if(n % i == 0)	cout << i << " ";
	}
	cout << n << "\n";
}

int main()
{
	int t;
	cin >> t;
	while(t--)	solve();
	return 0;
}