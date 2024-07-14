#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"element at top is "<<s.top()<<endl;
    s.pop();
    cout<<"element at top is "<<s.top()<<endl;
    
    if(s.empty())
    {
        cout<<"the stack is empty"<<endl;
    }
    else
    {
        cout<<"stack is not empty"<<endl;
    }
    cout<<"size of stack is "<<s.size()<<endl;
    
    
    return 0;
}