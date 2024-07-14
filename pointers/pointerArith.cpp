#include <iostream>
using namespace std;

int main()
{
    // int i=100;
    // int *p = &i;
    // cout<<p<<endl;
    // cout<<++ p<<endl;
    int arr[100];
    cout<<&arr<<endl;
    cout<<&arr[1]<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl; // this is how we de-reference the variable.
     
    

return 0;
}