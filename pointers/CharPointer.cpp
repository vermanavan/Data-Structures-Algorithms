#include <iostream>
using namespace std;

int main()
{
    char ch[6]="abcde";
    char *x =&ch[0];
    cout<<ch<<endl;
    cout<<x<<endl;
    return 0;
}