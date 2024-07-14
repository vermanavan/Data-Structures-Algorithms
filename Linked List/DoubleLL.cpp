
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<endl;
        cout<<"memory is freed of the data "<<value<<endl;    
    }
};

void addNodeAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    if(head!=NULL){
            head->prev=temp;
            temp->next=head;
        }
    head=temp;
}  
void addNodeAtTail(Node* &tail,int data){
    Node* temp= new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail = temp;
}
void addInMiddle(Node* &head,Node*&tail,int pos ,int data){
    if(pos==1)  
        addNodeAtHead(head,data);
    int count=1;
    Node* curr = head;
    while(count<pos-1){
        curr=curr->next;
        count++;
    }
    if(curr==tail)
        addNodeAtTail(tail,data);
   
    else
        {
        Node* temp = new Node(data);
        temp->next=curr->next;
        curr->next->prev=temp;
        temp->prev=curr;
        curr->next=temp;
        }
       
}   
void DeleteNode(Node* &head,Node*&tail,int pos){
   if(pos==1){
        Node* temp = head;
        temp->next->prev = NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
   }
   else{
    Node* curr= head;
    Node* prev= NULL;
    int count=1;
   
    while(count<pos){
        prev=curr;
        curr=curr->next;
        count++;
       } 
       curr->prev=NULL;
       prev->next=curr->next;
       curr->next=NULL;
       delete curr;
   }
 
}     


void printfromHead(Node* & head){
    Node* temp= head;
    cout<<"Printing from head -> tail"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
void printFromTail(Node* &tail){
    Node* temp= tail;
    cout<<"printing from tail -> head"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }cout<<endl;
}
int main()
{
    Node * node1 = new Node(15);
    Node* head= node1;
    Node* tail= node1; 
    addNodeAtHead(head,14);
    printfromHead(head);
    printFromTail(tail);
    addNodeAtTail(tail,16);
    printfromHead(head);
    
    addNodeAtHead(head,13);
    printfromHead(head);
    
    addInMiddle(head,tail,2,100);
    printfromHead(head);
    
    addInMiddle(head,tail,4,500);
    printfromHead(head);

    addNodeAtHead(head,12);
    printfromHead(head);

    DeleteNode(head,tail,1);
    printfromHead(head);

    DeleteNode(head,tail,5);
    printfromHead(head);

    DeleteNode(head,tail,3);
    printfromHead(head);
    

    return 0;
}