/* This code is about the use of algorithm library . it has some usefull functions like binary_search() 
that performs binary serach on an array or a vector */
  
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector <int> a;

    a.push_back(10);
    a.push_back(11);
    a.push_back(12);
    a.push_back(13);
    a.push_back(14);
    a.push_back(15);
    a.push_back(16);
    a.push_back(17);

    cout<<binary_search(a.begin(),a.end(),12)<<endl;

    int c=9;
    int d=10;
    cout<<"min "<<min(c,d)<<endl;
    cout<<"max "<<max(c,d)<<endl;

    string s="abcdefgh";

    reverse(s.begin(),s.end());
    cout<<s<<endl;
    rotate(a.begin(),a.begin()+3,a.end());
    for (auto i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    sort(a.begin(),a.end());
     for (auto i:a)
    {
        cout<<i<<" ";
    }
    return 0;
}