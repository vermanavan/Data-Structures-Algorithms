#include <iostream>
using namespace std;

void StringReversal(string g,int length)
{
    if(length==-1) return;
    cout<<g[length];
    StringReversal(g,length-1);
}


int main()
{
    string g="   v   ";
    int length = g.length()-1;
    StringReversal(g,length);
    cout<<endl;
    cout<<g;
    return 0;
}