#include<bits/stdc++.h>

using namespace std;

long long int calpow(int a, int y)
{
    if(y == 0)  return 1;
    if(y % 2 == 0)  return calpow(a, y/2) * calpow(a, y/2);
    return a * calpow(a, y/2) * calpow(a, y/2);
}

int main()
{
    long long int n, sum = 0, m;
    vector<int> digits;
    int p;
    cin >> n;
    m = n;
    while(n > 0)
    {
        digits.push_back(n % 10);
        n /= 10;
    }
    for(auto i : digits)
    {
        sum += calpow(i, digits.size());
        cout << sum << " ";
    }
    cout << sum << endl;
    cout << (sum == m ? "Armstrong Number." : "NOT AN Armstrong Number.");
    return 0;
}