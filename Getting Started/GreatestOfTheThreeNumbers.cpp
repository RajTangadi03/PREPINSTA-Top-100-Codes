
// Eg. 2,5,4 -> 5

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a, b, c;
    cin >> a >> b >> c;
    if(a > b && a > c)  cout << a << endl;
    else if(b > a && b > c)  cout << b << endl;
    else cout << c << endl;
    return 0;
}