#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    
    pair<string,int> p= make_pair("navan",23);
    m.insert(p);

    pair<string,int> pair2("verma",616);
    m.insert(pair2);
    m["chandigarh"]=999;
    m["Mohali"]=100;
    // cout<<m.size()<<endl;
    // m.erase("verma");
    // cout<<m["Mohali"]<<endl;
    // cout<<m.at("navan")<<endl;
    // cout<<m.count("navan")<<endl;
    // cout<<m.size()<<endl;
    // unordered_map<string,int> :: iterator itr = m.begin();

    // while (itr!=m.end())

    // {
    //     cout<<itr->first<<" "<<itr->second<<endl;
    //     itr++;
    // }
    for(auto a:m)
        cout<<a.first<<" "<<a.second<<endl;
    return 0;
}