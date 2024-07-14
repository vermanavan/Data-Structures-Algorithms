#include <iostream>
using namespace std;

void update(int &n)
{
    n++;
}

int main()
{
    // int i=7;
    // int &j=i;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<j<<endl;
    int n=8;
    int &y=n;
    cout<<n<<endl;
    update(y);
    cout<<n<<endl;
    return 0;
}