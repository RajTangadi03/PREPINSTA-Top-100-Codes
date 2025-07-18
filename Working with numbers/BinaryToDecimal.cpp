#include<bits/stdc++.h>

using namespace std;

void solve(string s)
{
	int num = 0;
	for(int i = s.size()-1; i >= 0; i--)
	{
		if(s[i] == '1')
		{
			num += pow(2, s.size()-1-i);
		}
	}
	cout << num << "\n";
}

int main()
{
	string s;
	cin >> s;
	solve(s);
	return 0;
}