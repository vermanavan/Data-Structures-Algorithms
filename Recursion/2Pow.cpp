#include <iostream>
using namespace std;


int power(int n){
    if(n==0) return 1;
    return 2*power(n-1);
}

int main()
{
    cout<<"2 power 10 = "<<power(10);

return 0;
}