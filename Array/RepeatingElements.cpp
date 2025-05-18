// Finding  Repeating elements in an Array

#include<bits/stdc++.h>

#define lli long long int

using namespace std;

void solve()
{
    unordered_map<int, int> umap;
    int n, k;
    cin >> n;
    while(n--)
    {
        cin >> k;
        umap[k]++;
    }
    for(auto i : umap)  if(i.second > 1)    cout << i.first << " ";
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}