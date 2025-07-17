#include<bits/stdc++.h>
using namespace std;

int hcf(int a, int b)
{
	if(b <= 0)	return a;
	return hcf(min(a, b), b-a);
}

int main()
{
	int a, b;
	cin >> a >> b;
	int req = hcf(a, b);
	int ans = (a * b) / req;
	cout << ans << endl;
	return 0;
}