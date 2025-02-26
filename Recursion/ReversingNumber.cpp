// Reversing a Number

#include<bits/stdc++.h>

using namespace std;

int rvr(int num, int rvrNum)
{
    if(num == 0)    return rvrNum;
    rvrNum = (rvrNum * 10) + (num % 10);
    return rvr(num/10, rvrNum);
}

int main()
{
    int num, rvrNum = 0;
    cin >> num;
    cout << rvr(num, rvrNum) << endl;
    return 0;
}