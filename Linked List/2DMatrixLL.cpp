

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* down;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->down=NULL;
    }
};

void insertAtTail(Node* & head,Node* & tail,int data){
    if(head==tail){
        Node* temp= new Node(data);
        tail->next = temp;
        tail=temp;
    }
}
void CreateGrid(vector<vector<int>> twoDMat,Node*&head){
    
}
          

int main(){

    vector<vector<int>> TwoDMat {{1,2,3},{4,5,6},{7,8,9}};
    Node* head;


    return 0;   
}