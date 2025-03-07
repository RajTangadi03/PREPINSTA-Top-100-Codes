// Check if two strings are Anagram or not

#include<bits/stdc++.h>

using namespace std;

void solve()
{
    vector<int> n(26, 0), m(26, 0);
    string a, b;
    cin >> a >> b;
    for(auto i : a)
    {
        i = tolower(i);
        n[i-'a'] +=1 ;
    }
    
    for(auto i : b)
    {
        i = tolower(i);
        m[i-'a'] +=1 ;
    }

    if(n == m) cout << "Anagram" << endl;
    else cout << "Not Anagram." << endl;
}

int main()
{
    solve();
    return 0;
}