#include <iostream>
#include<stack>
using namespace std;

int main()
{
    string ent;
    cin>>ent;
    stack <char> s;
    for(int i=0;i<ent.length();i++)
    {
        s.push(ent[i]);
        
    }
    for(int i=0;i<ent.length();i++)
    {
        cout<<s.top();
        
        s.pop();
    }
    return 0;
}