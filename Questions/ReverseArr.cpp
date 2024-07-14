#include <bits/stdc++.h>
using namespace std;

vector<int> rev(vector<int>&a){
    int s=0,e=a.size()-1;
    while(s<=e){
        swap(a[s],a[e]);
        s++;e--;
    }
    return a;
}

int main()
{
    vector<int> s{11,7,3,12,4};
    vector<int> f=rev(s);
    for(auto a:f)
        cout<<a<<" ";
    
    return 0;
}