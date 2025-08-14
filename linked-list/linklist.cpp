#include<iostream>
// #include<cmath>
using namespace std;
class node{
    public:
    int val;
    node * next;

    node(int value) : val(value), next(nullptr) {}

};

class singlyLinkedList{

    node* head;

public:
    singlyLinkedList() {
        
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
    while(count<pos-1 && temp->next!=NULL){
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

void insertAtEnd(int x) {
    node* newnode = new node(x);
    if(head==nullptr){
        head=newnode;
        }
        else{
            node* temp=head;
            while(temp->next!=nullptr){
                temp=temp->next;}
                newnode->next=nullptr;
                temp->next=newnode;
                }

            }


void display(){
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
cout<<"nullptr"<<endl;

}


void deleteAtBeg(){
    if(head==nullptr){
        cout<<"List is empty"<<endl;
        return;

}
else{
    node* temp=head;
    head=head->next;
    delete temp;
}
}

int main(){
    singlyLinkedList l;
    do{
        cout<<"1.Insert at beginning"<<endl;
        cout<<"2.Insert at position"<<endl;
        cout<<"3.insertAtEnd"<<endl;
        cout<<"4.Display"<<endl;
        cout<<"5.Delete from beginning"<<endl;
        cout<<"6.Exit"<<endl;
        int choice;
        cout<<"Enter your choice"<<endl;

        cin>>choice;

        switch(choice){
            case 1:
            cout << "Enter value to insert: ";
            int value;
                cin >> value;
                l.insertAtBeginning(value);
                break;

     case 2:
                cout << "Enter value to insert: ";
                int x,pos;
                cin >> x;
                cout<<"Enter position"<<endl;
                cin>>pos;
                l.insertAtPosition(x,pos);
                break;
                case 3:
                cout << "Enter value to insert: ";
                
                cin>>x;
                l.insertAtEnd(x);
                break;
                case 4:
                l.display();
                break;
                case 5:
                l.deleteAtBeg();
                cout<<"deleted "<<endl;
                break;

                case 6:
                return 0;
                default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while(true);
    return 0;


}
    
    
   
};