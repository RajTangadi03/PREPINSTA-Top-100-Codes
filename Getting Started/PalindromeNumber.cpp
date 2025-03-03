#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b, c = 0;
    cin >> a;
    b = a;
    while(a > 0)
    {
        c = (c * 10) + (a % 10);
        a /= 10;
    }
    if(b == c)  cout << "P" << endl; // Palindromic Number
    else cout << "N" << endl; // Not a Palindromic Number
}

int main()
{
    solve();
    return 0;
}