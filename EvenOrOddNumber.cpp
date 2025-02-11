#include<iostream>

using namespace std;

int main()
{
    long long int num;
    cin >> num;
    if(num < 1)
        cout << "Negative Number." << endl;
    else
        cout << ((num & 1) == 1 ? "Odd Number." : "Even Number.") << endl;
    return 0;
}