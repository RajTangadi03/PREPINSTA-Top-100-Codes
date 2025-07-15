#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int l, r;
	cin >> l >> r;
	for(int i = l; i <= r; i++)
	{
		int num = i;
		vector<int> n;
		while(num > 0)
		{
			n.push_back(num%10);
			num /= 10;
		}
		int total = 0;
		for(int j = 0; j < n.size(); j++)
		{
			total += pow(n[j], n.size());
		}
		if(total == i)
		{
			cout << i << " ";
		}
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