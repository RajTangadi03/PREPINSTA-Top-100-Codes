// Find duplicate in an array of N+1 Integers

#include<bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<int, int> s;
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        if(s.find(m) != s.end() && s[m] < 2)    v.push_back(m);
        s[m]++;
    }
    for(auto i : v) cout << i << " ";
    cout << endl;
    return 0;
}