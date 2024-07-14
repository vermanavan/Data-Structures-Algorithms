#include <iostream>
using namespace std;

class Node
{   
    public:
    int data;
    Node* next;
    
    Node(int d){
        this-> data=d;
        this->next=NULL;
    }
    ~Node()
    {
        int value = this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        // cout<<"memory is freed of the data "<<value<<endl;
    }

};
void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next=head;
    head =temp;
}

void print(Node* &head){
    Node* temp = head;    
    while (temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void uniqueSortedList(Node* & head){
    if(head==NULL) return ;
    Node* curr = head;
    while (curr != NULL && curr->next != NULL) {
        if (curr->data == curr->next->data) {
            Node* nextNext = curr->next->next;
            delete(curr->next);
            curr->next = nextNext;
        } else {
            curr = curr->next;
        }
    }
}
    


int main(){
    Node* node1= new Node(10);
    Node* head= node1;
    insertAtHead(head,10);
    insertAtHead(head,10);
    insertAtHead(head,9);
    insertAtHead(head,9);
    insertAtHead(head,8);
    insertAtHead(head,8);
    insertAtHead(head,8);
    insertAtHead(head,7);
    insertAtHead(head,7);
    cout<<"before removing nodes"<<endl;
    print(head);
    cout<<"after removing nodes"<<endl;
    uniqueSortedList(head);
    print(head);
    return 0;
}