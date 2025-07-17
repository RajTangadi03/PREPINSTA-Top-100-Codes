
// HCF = GCD

#include<bits/stdc++.h>
using namespace std;

int hcf(int a, int b)
{
	if(b <= 0)	return a;
	return hcf(min(a, b), abs(b-a));
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << hcf(a, b) << endl;
	return 0;
}