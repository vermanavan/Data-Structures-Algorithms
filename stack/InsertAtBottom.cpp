#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &s,int d){
    if(s.empty()){
        s.push(d);
        return;
    }
    int x = s.top();
    s.pop();
    solve(s,d);
    s.push(x);
}

int main()
{
    stack<int> dd;
    dd.push(4);
    dd.push(5);
    dd.push(8);
    dd.push(1);
    solve(dd,7);

    while(!dd.empty()){
        cout<<dd.top()<<" ";
        dd.pop();
    }
    return 0;
}