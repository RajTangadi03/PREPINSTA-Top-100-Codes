// Find the prime numbers between 1 to 100

#include<bits/stdc++.h>

using namespace std;

const int n = 101;
vector<int> p(n, 0);

void findPrimes()
{
    p[0] = p[1] = -1;
    for(int i = 2; i < n; i++)
    {
        if(p[i] == 0)
        {
            for(long long j = i * i; j < n; j+=i)
            {
                p[j] = -1;
            }
        }
    }
    for(int i = 2; i < n; i++)  if(p[i] == 0)   cout << i << " ";
    cout << endl;
}

int main()
{
    findPrimes();
    return 0;
}