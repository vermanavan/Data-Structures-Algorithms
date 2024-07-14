#include <iostream>
using namespace std;

void Walking(int src,int dest)
{
    cout<<"Position "<<src<<" Destination "<< dest<<endl;
    if(src==dest) 
    {
        cout<<"Reached"<<endl;
        return;
    }
    Walking(src+1,dest);
}

int main()
{
    int src=1,dest=10;
    Walking(src,dest);

    return 0;
}