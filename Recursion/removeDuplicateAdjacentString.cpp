// Given a string s, remove all its adjacent duplicate characters recursively

// Example : abcbcbs -> abs

#include<bits/stdc++.h>
using namespace std;

vector<char> removeAdjacentDup(vector<char>& v, int i)
{
    if(i == v.size())   return v;
    if(i == 0)   return removeAdjacentDup(v, i+1);
    if(v[i-1] == v[i])  
    {
        v[i-1] = '0';
    }
    return removeAdjacentDup(v, i+1);
}

int main()
{
    string s;
    cin >> s;
    int j = 0;
    vector<char> v(s.size());
    for(auto i : s) v[j++] = i;
    removeAdjacentDup(v, 0);
    for(auto s : v) if(s != '0') cout << s;
    return 0;
}