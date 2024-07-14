#include <bits/stdc++.h>
using namespace std;

class StackLL{

    public:
        int data;
        StackLL* next;
    StackLL(int data){
        this->data=data;
        this->next = NULL;
    }
    ~StackLL(){
        int value = this->data;
        if(next!=NULL){
            delete next;
            this->next=NULL;
        }cout<<endl;
        cout<<"The node with data: "<<value<<" is freed"<<endl; 
    }

};
void Push(StackLL* &head,int data){
    StackLL * temp = new StackLL(data);
    temp->next = head;
    head=temp;  
}
void Peek(StackLL* &head){
    if(head==NULL){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Element at top is "<<head->data<<endl;
    }
}
void Pop(StackLL *&head){
    if(head==NULL){
        cout<<"Stack under-flow"<<endl;
    }
    else {
        StackLL * temp = head->next;
        head->next = NULL;
        delete head;
        head= temp; 
    }
}
bool isEmpty(StackLL* &head){
    if(head==NULL) return true;
    else return false;
}

int main()
{
    StackLL* node1=new StackLL(10);
    StackLL* head= node1;
    Pop(head);
    Peek(head);
    Pop(head);
    string s = (isEmpty(head))?"stack is empty":"Stack is not empty";
    cout<<s<<endl;
    

    return 0;
}