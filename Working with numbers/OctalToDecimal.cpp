#include<bits/stdc++.h>

using namespace std;

void solve()
{
	string ip;
	cin >> ip;

	// Method 1
	long long int ans = 0, p = 0;
	for(int i = ip.size()-1; i >= 0; i--)
	{
		ans += ((ip[i] - '0') * pow(8, p));
		p++;
	}

	// Method 2
	// format stoi(binary_in_string_format, 0, base_value)
	long long int ans2 = stoi(ip, 0, 8);

	cout << "Method 1 : " << ans << "\nMethod 2 : " << ans2 << "\n";
}

int main()
{
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}