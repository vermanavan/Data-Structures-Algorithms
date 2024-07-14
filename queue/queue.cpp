#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    cout<<"Front of queue is "<<q.front()<<endl;
    q.push(11);
    q.push(12);
    cout<<"size of queue is "<<q.size()<<endl;
    q.pop();
    q.pop();
    q.pop();
    if(q.empty())
    {
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
    return 0;
}
        


