#include<bits/stdc++.h>

using namespace std;

void solve()
{
    long long int n, m, sum = 0;
    cin >> n;
    m = n;
    while(m > 0)
    {
        sum += (m % 10);
        m /= 10;
    }
    if(n % sum == 0)    cout << "Harshad Number." << endl;
    else    cout << "NOT A Harshad Number." << endl;
}

int main()
{
    solve();
    return 0;
}