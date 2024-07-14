
#include <bits/stdc++.h>
using namespace std;

class Node{   
    public:
    int data;
    Node* next;
    
    Node(int d){
        this-> data=d;
        this->next=NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is freed of the data "<<value<<endl;
    }
};
void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next=head;
    head = temp;
}
void print(Node* &head){
    Node* temp = head; 
    while (temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

Node* reverseLinkedList(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

int main()
{
    Node* node1 = new Node(7);
    Node* head1=node1;
    insertAtHead(head1,6);
    insertAtHead(head1,5);
    insertAtHead(head1,4);
    insertAtHead(head1,3);
    insertAtHead(head1,2);
    print(head1);
    head1=reverseLinkedList(head1);
    print(head1);
    return 0;
}