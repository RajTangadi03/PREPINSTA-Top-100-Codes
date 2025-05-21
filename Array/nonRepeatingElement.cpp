// Finding Non Repeating elements in an Array

// Example : 1 2 3 4 5 1 2 3 -> 4 5; 1 2 3 4 5 1 2 3 4 5 -> none/blank space; 1 2 3 4 5 -> 1 2 3 4 5;

#include<bits/stdc++.h>
using namespace std;

#define lli long long int 

void solve()
{
    unordered_map<int, bool> umap;
    int m;
    cin >> m;
    while(m--)
    {
        int n;
        cin >> n;
        if(umap.find(n) == umap.end()) umap[n] = true;
        else umap[n] = false;
    }
    for(auto i : umap)  if(i.second)    cout << i.first << " ";
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