#include<iostream>

using namespace std;

int main()
{
    long long int num;
    cin >> num;
    cout << (num > 0 ? "Positive Number." : num < 0 ? "Negative Number." : "0 is niether positive nor negative number.") << endl;
    return 0;
}