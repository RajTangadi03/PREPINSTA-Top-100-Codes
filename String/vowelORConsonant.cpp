// Check whether a character is a vowel or consonant
// EX. U = vowel, u = vowel, z = consonant, Z = consonant;

#include<bits/stdc++.h>

using namespace std;

void solve()
{
    char c;
    cin >> c;
    unordered_set<char> s = {'a','e','i','o','u','A','E','I','O','U'};
    if(s.find(c) != s.end())    cout << "vowel" << endl;
    else    cout << "consonant" << endl;
}

int main()
{
    solve();
    return 0;
}