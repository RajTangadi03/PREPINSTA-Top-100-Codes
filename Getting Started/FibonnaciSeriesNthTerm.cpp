#include<bits/stdc++.h>
using namespace std;

void solve()
{
	long long int n;
	cin >> n;
	if(n == 1)
	{
		cout << 0;
	}
	else if(n == 2)
	{
		cout << "1";
	}
	else
	{
		long long int a = 0, b = 1;
		while(n--)
		{
			long long int temp = b;
			b += a;
			a = temp;
		}
		cout << a << " ";
	}
	cout << "\n";
}

int main()
{
	int n;
	cin >> n;
	while(n--)	solve();
	return 0;
}