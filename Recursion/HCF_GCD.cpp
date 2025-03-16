
// Here we have to find GCD or HCF of given two numbers.
// EX. 5, 10 -> 5; 13, 11 -> 1; 10, 12 -> 2;
// 12, 8 -> 4; etc.

#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if(b == 0)  return a;
    return gcd(b, abs(a-b));
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b) << endl;
    return 0;
}