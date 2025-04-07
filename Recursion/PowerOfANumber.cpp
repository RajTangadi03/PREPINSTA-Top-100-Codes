// Power of a Number
// Example: 2^3 = 2 * 2 * 2 = 8

#include<bits/stdc++.h>

using namespace std;

void calPower(long long int x, long long int y, long long int& ans)
{
    if(x <= 1)  return ;
    ans *= ans;
    calPower(x/2, y, ans);
    if(x%2 == 1)
        ans *= y;
}

int main()
{
    int x, y;
    long long int ans;
    cin >> x >> y;
    ans = x;
    calPower(y, x, ans);
    cout << ans << endl;
    return 0;
}