// Capitalize the first and last character of each word of a string

#include<bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    s[0] = toupper(s[0]);
    for(int i = 0; i < s.size()-1; i++)
    {
        if(s[i+1] == ' ')
        {
            s[i] = toupper(s[i]);
            if(i+2 < s.size()-1)
            {
                s[i+2] = toupper(s[i+2]);
                i++;
            }
        }
    }
    s[s.size()-1] = toupper(s[s.size()-1]);
    cout << s << endl;
}

int main()
{
    solve();
    return 0;
}