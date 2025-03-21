
// Counting the number of even and odd elements in an array
// eg. Arr: 1,2,3,4,5 -> Even = 2, Odd = 3;


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, even = 0, odd = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        if((m & 1) == 1)  odd++;
        else even++;
    }
    cout << odd << " " << even;
    return 0;
}