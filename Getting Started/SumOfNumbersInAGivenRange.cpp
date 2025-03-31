
// Example : Range 5 - 10 : 5+6+7+8+9+10 -> 45

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m;
    cout << "Enter Range : " << endl;
    cin >> n >> m;
    if(n >= 0 && m >= 0 && n <= m)
        cout << ((m*(m+1))/2) - ((n*(n+1))/2) + n << endl;
    else
        cout << 0 << endl;
    return 0;
}