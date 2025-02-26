#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if(b == 0)  return a;
    return gcd(b, abs(a-b));
}

int main()
{
    int a, b;
    cin >> a >> b;
    if(a == 0 && b == 0) cout << 0 << endl;
    else    cout << ((a*b)/gcd(a,b)) << endl;
    return 0;
}