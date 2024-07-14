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

Node * MergeSort(Node*&head){
    
}




int main()
{
    Node* node1= new Node(10);
    Node* head = node1;
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,45);
    insertAtHead(head,2);
    insertAtHead(head,9);
    insertAtHead(head,30);
    insertAtHead(head,24);
    print(head);
    return 0;
}