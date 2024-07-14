//code not complete

#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &d,int element){
    if(d.empty()){
        d.push(element);
        return;
    }
    int num= d.top();
    d.pop();

}

void ReverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int num =s.top();
    s.pop();
    ReverseStack(s);
    insertAtBottom(s,num);
}


int main()
{
    stack<int> ss;
    ss.push(4);
    ss.push(5);
    ss.push(7);
    ss.push(3);
    ss.push(1);
    return 0;
}