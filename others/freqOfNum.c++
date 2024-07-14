#include<bits/stdc++.h>
using namespace std;

void freqOfNum(vector<int> v)
{
    unordered_map<int,int> mp;
    for(int i=0;i<v.size();i++)
    {
        mp[v[i]]++;
    }
    cout<<"Number" <<"        "<<"Frequency"<<endl;
    for(auto a:mp)
    {
        cout<<a.first<<"                "<<a.second<<endl;
    }
}
int main()
{
    vector<int> z{1,23,23,4,5,23,23,4,5,6,6,77,7,77,7};
    freqOfNum(z);
    return 0;
}
        