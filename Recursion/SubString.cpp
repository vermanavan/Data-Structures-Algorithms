#include <bits/stdc++.h>
using namespace std;

void solve(string str,string output,int index,vector<string>&ans){
    if(index>=str.length()){
        if(output.length()>0)
            ans.push_back(output);
        return;
    }
    solve(str,output,index+1,ans);
    char element =str[index];
    output.push_back(element);
    solve(str,output,index+1,ans);
}

vector<string> SubString(string s){
    vector<string> ans;
    string output="";
    int index=0;
    solve(s,output,index,ans);
    return ans;
}



int main()
{
    string a="abc";
    vector<string>f=SubString(a);
    for(auto s:f)
        cout<<s<<" ";
    return 0;
}