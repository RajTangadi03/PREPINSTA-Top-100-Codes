// Finding Number of times x digit occurs in a given input

#include<bits/stdc++.h>

using namespace std;

void solve()
{
    string n, dig;
    int i = 0, j = 0, ans = 0;
    cin >> n >> dig;
    while(i < n.size())
    {
        if(n[i] == dig[j])
        {
            j++;
            if(j == dig.size())
            {
                ans++;
                j = 0;
                if(i+1 < n.size() && n[i] == n[i+1]) i--;
            }
        }
        else
        {
            j = 0;
        }
        i++;
    }
    cout << ans << endl;
}

int main()
{
    solve();
    return 0;
}