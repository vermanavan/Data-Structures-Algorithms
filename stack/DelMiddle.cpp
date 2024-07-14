#include <bits/stdc++.h>
using namespace std;

void solve(stack<int>&s,int count,int size){
    if(count=size/2){
        s.pop();
        return;
    }
    int num=s.top();
    s.pop();
    solve(s,count+1,size);
    s.push(num);
}


void DelMiddle(stack<int>&st,int N){
    int Count=0;
    solve(st,Count,N);
}

int main()
{
    stack<int> stk;
    stk.push(3);
    stk.push(5);
    stk.push(1);
    stk.push(8);
    stk.push(9);
    DelMiddle(stk,5);

    for(int i=0;i<4;i++){
        cout<<stk.top();
        stk.pop();
    }
    return 0;
}