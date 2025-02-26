// Power of a Number

#include<bits/stdc++.h>

using namespace std;

// Check this recursion although it is giving right answer
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