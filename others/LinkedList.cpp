#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class LinkedList{
    public:
        node* head;
        LinkedList(){
            head=NULL;
        }
        void insertAtEnd(int data){
            node* temp = new node(data);
            if(head==NULL){
                head=temp;
                return;
            }
            node* temp1 = head;
            while(temp1->next!=NULL){
                temp1=temp1->next;
            }
            temp1->next=temp;
        }
        void insertAtFront(int data){
            node* temp = new node(data);
            if(head==NULL){
                head=temp;
                return;
            }
            temp->next=head;
            head=temp;
        }
        void deleteAtEnd(){
            if(head==NULL){
                cout<<"List is Empty"<<endl;
                return;
            }
            if(head->next==NULL){
                delete head;
                head=NULL;
                return;
            }
            node* temp = head;
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            delete temp->next;
            temp->next=NULL;
        }
        void deleteAtFront(){
            if(head==NULL){
                cout<<"List is Empty"<<endl;
                return;
            }
            if(head->next==NULL){
                delete head;
                head=NULL;
                return;
            }
            node* temp = head;
            head=head->next;
            delete temp;
        }
        void display(){
            node* temp = head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
};

int main(){
    LinkedList list;
    list.insertAtEnd(5);
    list.insertAtEnd(10);
    list.insertAtFront(2);
    list.display();
    list.deleteAtEnd();
    list.deleteAtFront();
    list.display();
return 0;
}