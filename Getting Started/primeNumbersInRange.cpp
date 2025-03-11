// Prime number within a given range

/*  Given a range between Left and Right we have to find all primes in between them.
    EX. l = 10, r = 20; Ans = 11, 13, 17, 19;
*/

#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int l, r;
    cin >> l >> r;
    vector<int> p(r+10, 0);
    p[0] = p[1] = 1;
    for(long long int i = 2; i * i <= r; i++)
    {
        if(p[i] == 0)
        {
            for(long long int j = i * i; j <= r; j+=i)
            {
                p[j] = 1;
            }
        }
    }
    for(int i = l; i <= r; i++)
    {
        if(p[i] == 0)   cout << i << " ";
    }
    cout << endl;
}

int main()
{
    solve();
    return 0;
}