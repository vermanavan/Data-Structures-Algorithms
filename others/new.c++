#include <iostream>
using namespace std;

int Sum(int a,int b)
{
    if(b==0) return a;
    int sum = a^b;
    int carry = (a&b)<<1;
    return Sum(sum,carry);
}
int main()
{
    cout<<Sum(789,987);
    return 0;
}