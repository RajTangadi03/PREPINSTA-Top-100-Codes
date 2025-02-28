// Finding Prime Factors of a number

#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n, i = 2;
    vector<int> factors;
    cin >> n;
    while(n > 1)
    {
        if(n % i == 0)
        {
            factors.push_back(i);
            while(n > 1 && n % i == 0)
            {
                n /= i;
            }
        }
        i++;
    }
    for(auto i : factors)   cout << i << " ";
}

int main()
{
    solve();
    return 0;
}