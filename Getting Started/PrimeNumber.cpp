// Prime number

// Example : 7 : prime (divisible by 7 and 1 only); 18 : not prime (divisible by 1,2,3,6,9,18);

#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n, int i)
{
    if((long long)(i * i) > n)  return true;
    if(n % i == 0)  return false;
    return isPrime(n, i+1);
}

int main()
{
    int n;
    cin >> n;
    if(n == 2 || isPrime(n, 2))  cout << "Prime" << endl;
    else    cout << "Not Prime" << endl;
    return 0;
}