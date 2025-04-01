
// Example : 1001 -> 1 + 0 + 0 + 1 -> 2

#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n, sum = 0;
    cin >> n;
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << sum << endl;
}

int main()
{
    solve();
    return 0;
}