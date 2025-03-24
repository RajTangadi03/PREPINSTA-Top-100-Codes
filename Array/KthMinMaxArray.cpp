// Find the “Kth” max and min element of an array

#include<bits/stdc++.h>

using namespace std;

void solve()
{
    priority_queue<int, vector<int>, greater<int>> pqmin;
    priority_queue<int, vector<int>, less<int>> pqmax;
    int n, k;
    cin >> k;
    while(cin >> n)
    {
        pqmin.push(n);
        pqmax.push(n);
    }
    while(!pqmax.empty() && !pqmin.empty() && k > 1) {
        pqmin.pop();
        pqmax.pop();
        k--;
    }
    cout << pqmin.top() << " " << pqmax.top() << endl;
}

int main()
{
    solve();
    return 0;
}