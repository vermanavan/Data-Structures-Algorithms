#include <iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int>&s,int num){
        if(s.empty() || (!s.empty() && s.top()<num)){
            s.push(num);
            return;
        }
        int n= s.top();
        s.pop();
        sortedInsert(s,num);
        s.push(n);
}
void SortStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int num= st.top();
    st.pop();
    SortStack(st);
    sortedInsert(st,num);
}
int main(){
    stack<int> ss;
    ss.push(5);
    ss.push(-2);
    ss.push(9);
    ss.push(-7);
    ss.push(3);
    SortStack(ss);
    while(!ss.empty()){
        cout<<ss.top()<<" ";
        ss.pop();
    }
    return 0;
}