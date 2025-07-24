#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	stack<int> st;
	while(n > 0)
	{
		st.push(n%8);
		n /= 8;
	}
	while(!st.empty())
	{
		cout << st.top();
		st.pop();
	}
	return 0;
}