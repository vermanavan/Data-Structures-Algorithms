#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
        int data;
        Node*next;
    Node(int data){
        this->data=data;
        this->next =NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<endl;
        cout<<"memory is freed of the data "<<value<<endl; 
    }
};
void addNodeAtHead(Node* &head,int d){
    Node*temp = new Node(d);
    temp->next= head;
    head = temp;
}
void addNodeAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next =temp;
    tail=temp; 
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
vector<Node*> printAddress(Node* &head){
    vector<Node*> addresses;
    Node*temp=head;
    while(temp!=NULL){
        addresses.push_back(temp);
        temp=temp->next;
    }
    return addresses;
}
int main(){

    Node* temp= new Node(18);
    Node* head=temp;
    print(head);
    addNodeAtHead(head,14);
    addNodeAtHead(head,12);
    addNodeAtHead(head,10);
    print(head);
    vector<Node*> f= printAddress(head);
    for(auto d:f)
        cout<<d<<" ";
    return 0;
}
