//In this question we are given a linked list . each node has a next pointer and a random pointer . we have to create a clone of the original linked list.

#include<bits/stdc++.h>

class Node{
    public:
        int data;
        Node* next;
        Node* random;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
      
void insertatTail(Node* &head,Node* &tail,int data){
    Node* newNode = new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
}

Node* cloneLL(Node* &head){
    //step1: create a clone list
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;

    Node* temp= head;
    while(temp!=NULL){
        insertatTail(cloneHead,cloneTail,temp->data);
        temp=temp->next;
    }
    // unordered_map<Node*,Node*> oldToNewNode;
    temp=head;
    while(temp!=NULL){
        
    }

}