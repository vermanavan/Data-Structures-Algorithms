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
void addInMiddle(Node* &head,Node* &tail,int pos,int data){
        Node* curr = head;
        int num=1;
        
        while(num<pos-1){
            curr=curr->next;
            num++;
        }
        if(curr->next==NULL){
            addNodeAtTail(tail,data);
        }            
        else    
        {
            Node* temp = new Node(data);
            temp->next=curr->next;
            curr->next=temp;
        }
}
void deleteNode( Node* &head,int pos) {
    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    } else {
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while (cnt < pos && curr != NULL) {
            prev = curr;
            curr = curr->next;
            cnt++;
        }        
        if (curr == NULL) {            
            return;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    Node * node1 = new Node(15);
    Node * head = node1;
    Node * tail = node1;
    addNodeAtHead(head,14);
    addNodeAtHead(head,13);
    addNodeAtTail(tail,16);
    addNodeAtHead(head,12);
    addInMiddle(head,tail,3,100);
    print(head);
    deleteNode(head,3);
    print(head);
    return 0;
}