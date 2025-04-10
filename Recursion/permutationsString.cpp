// Print All Permutations of a String
// Example: 123: 123, 132, 213, 231, 312, 321

#include <bits/stdc++.h>

using namespace std;

void perm(vector<string> &ans, string &s, int i)
{
    if (i == s.size()-1)
    {
        ans.push_back(s);
        return;
    }
    for (int k = i; k < s.size(); k++)
    {
        if(k != i && s[k] == s[i])  continue;

        swap(s[k], s[i]);
        perm(ans, s, i + 1);
        swap(s[k], s[i]);
    }
    return;
}

int main()
{
    string s;
    cin >> s;
    
    vector<string> ans;
    sort(s.begin(), s.end());

    perm(ans, s, 0);

    for (auto i : ans)
        cout << i << " ";

    return 0;
}