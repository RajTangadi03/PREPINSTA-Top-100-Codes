#include<bits/stdc++.h>

using namespace std;

bool isStrong()
{
    long long int n, ans = 0, m;
    cin >> n;
    m = n;
    unordered_map<int, long long int> umap;
    umap[0] = 1;
    umap[1] = 1;
    for(int i = 2; i < 10; i++)
    {
        umap[i] = umap[i-1] * i;
    }
    while(n > 0)
    {
        ans += umap[n % 10];
        n /= 10;
    }
    return (m == ans);
}

int main()
{
    cout << isStrong();
    return 0;
}