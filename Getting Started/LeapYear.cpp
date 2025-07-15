#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int year;
	cin >> year;
	if(year % 100 == 0 && year % 400 != 0)
	{
		cout << "No\n";
	}
	else if(year % 4 == 0 || year % 400 == 0)
	{
		cout << "Yes\n";
	}
	else
	{
		cout << "No\n";
	}
}

int main()
{
	int n;
	cin >> n;
	while(n--)	solve();
	return 0;
}