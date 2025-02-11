#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int num;
    cin >> num;
    cout << (num < 0 ? 0 : ((num*(num+1))/2));
    return 0;
}