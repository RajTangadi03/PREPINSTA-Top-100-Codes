#include<iostream>

using namespace std;

void solve()
{
    long long int num, sum = 1;
    cin >> num;
    for(long long int i = 2; i * i < num; i++)
    {
        if(num % i == 0)
        {
            sum += i;
            if(i != num/i)
                sum += (num / i);
        }
    }
    if(sum > num)
    {
        cout << "It is a Abundant Number." << endl;
    }
    else
    {
        cout << "It is NOT A Abundant Number." << endl;
    }
}

int main()
{
    solve();
    return 0;
}