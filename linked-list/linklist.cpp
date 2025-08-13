#include<iostream>
// #include<cmath>
using namespace std;
class node{
    public:
    int val;
    node * next;

    node(int value) : val(value), next(nullptr) {}

};

class LinkedList{

    node* head;

public:
    LinkedList() {
        
        head = nullptr;
    }


void insertAtBeginning(int x){

    node* newnode = new node(x);
    newnode->next = head;

    head=newnode;

}

void insertAtPosition(int x,int pos){
    node*  newnode= new node(x);
    if(pos==0){
        insertAtBeginning(x);
        return;
}
    int count=1;
    node* temp=head;
    while(count<pos && temp->next!=NULL){
        temp=temp->next;
        temp++;
        if(temp==nullptr){
            cout<<"Position out of range"<<endl;
        }else{
            newnode->next=temp->next;
            temp->next=newnode;
        }
        
    }
}


};