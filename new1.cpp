#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
    Node(){}

};
void insertNode(Node* &head,int value){
    Node* newNode=new Node(value);
    if(head==NULL){
        head=newNode;
        return ;
    }
    Node* temp=head;
    while(temp->next !=NULL){
        temp=temp->next;

    }
    temp->next=newNode;
}
void insertBeg(Node* &head,int value){
    Node* newNode=new Node(value);
    newNode->next=head;
    head=newNode;

}
void deleteNode(Node* &head){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    head=head->next;
    free(temp);
}
void displays(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head=NULL;
    insertNode(head,5);
    insertNode(head,10);
    insertNode(head,15);
    insertNode(head,20);
    insertNode(head,25);
    displays(head);
    deleteNode(head);
    displays(head);
    insertBeg(head,2);
    insertBeg(head,5);
    insertBeg(head,8);
    insertBeg(head,9);
    insertBeg(head,1);
    insertBeg(head,3);
    displays(head);

    return 0;
}