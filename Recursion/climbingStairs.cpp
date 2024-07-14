#include <iostream>
using namespace std;

int countingStairs(int n)
{
    
    if(n==1) return 1;
    if(n==2) return 2;

    return countingStairs(n-1)+countingStairs(n-2);
}

int main()
{
    int TotalStairs= 5;

    cout<<countingStairs(TotalStairs);
    return 0;
}