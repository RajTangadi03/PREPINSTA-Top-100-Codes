
// An Automorphic number is a special number, whose’s square ends with the same digits as the number itself

#include<bits/stdc++.h>

using namespace std;

void solve()
{
    long long int n, m;
    cin >> n;
    m = (n * n);
    while(n > 0)
    {
        if(n%10 != m%10)
        {
            cout << "Number is NOT A Automorphic Number." << endl;
            return ;
        }
        else
        {
            n /= 10;
            m /= 10;
        }
    }
    cout << "Number is a Automorphic Number." << endl;
}

int main()
{
    solve();
    return 0;
}