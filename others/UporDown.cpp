#include <iostream>
using namespace std;

bool UporDown(){
    int x,y=0;
    if(&x>&y)
        return true;
    return false;
}

int main()
{
    string s= UporDown()?"up":"down";
    cout<<s;
    return 0;
}
