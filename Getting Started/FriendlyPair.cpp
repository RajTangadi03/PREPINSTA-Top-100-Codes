#include<bits/stdc++.h>

using namespace std;

void solve()
{
    long long int a, b, sumA = 0, sumB = 0;
    cin >> a >> b;
    for(long long int i = 1; i * i <= a; i++)
    {
        if(a % i == 0)
        {
            sumA += i;
            if(i != a / i)  
                sumA += a / i;
        }
    }
    for(long long int i = 1; i * i <= b; i++)
    {
        if(b % i == 0)
        {
            sumB += i;
            if(i != b / i)  
                sumB += b / i;
        }
    }
    if((sumA / a) == (sumB / b))
    {
        cout << "Friendly Pair." << endl;
    }
    else
    {
        cout << "Not A Friendly Pair." << endl;
    }
}

int main()
{
    solve();
    return 0;
}