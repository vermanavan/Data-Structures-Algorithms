#include <bits/stdc++.h>
using namespace std;

void rev (vector<int>& v)
{
    sort(v.begin(),v.end());
    
    for(auto a:v)
        cout<<a<<" ";
    
    cout<<endl;
}
int main()
{
    vector<int>v{48,36,21,34,56,67,13,454,56,94};
    cout<<"vector after reversal is"<<'\n';
    rev(v);
    cout<<endl;
    for (auto g:v)
        cout<<g<<" ";
return 0;
}