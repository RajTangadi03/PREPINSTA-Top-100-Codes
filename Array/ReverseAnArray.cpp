#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for(int i = 0; i < n; i++)  cin >> v[i];
    int i = 0, j = n-1;
    while(i < j)    swap(v[i++], v[j--]);
    for(auto i : v) cout << i << " ";
    cout << endl;
}

int main()
{
    solve();
    return 0;
}