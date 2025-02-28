#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int m;
    cin >> m;
    if(m == 0)
    {
        cout << 0 << endl;
        return ;
    }
    queue<int> q;
    while(m > 0)
    {
        q.push(m%10);
        m /= 10;
    }
    while(q.front() == 0) q.pop();
    while(!q.empty())
    {
        cout << q.front();
        q.pop();
    }
}

int main()
{
    solve();
    return 0;
}