#include <iostream>
#include<map>
using namespace std;

int main()
{
    map <int,string>m;

    m[1]="abc";
    m[5]="cdc";
    m[3]="efg";
    m.insert({7,"bheem"});

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"before erase"<<endl;
    cout<<"finding 5 ->"<<m.count(5)<<endl;
    m.erase(5);
    cout<<"after erase"<<endl;
    cout<<"finding 5 ->"<<m.count(5)<<endl;

    return 0;

    
}