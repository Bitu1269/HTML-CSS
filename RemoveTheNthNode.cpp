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
void removeKthNodeLinkedList(Node* &head,int k){
    Node* ptr1=head;
    Node* ptr2=head;
    //move ptr2 by k steps a head
    int count=k;
    while(count--){
        ptr2=ptr2->next;
    }
    if(ptr2==nullptr){ // k is equal to length of linedlist
    //we have to delete head node
    Node* temp=head;
    head=head->next;;
    free(temp);
    return ;
    }
    // now ptr2 is k steps ahead of ptr1
    while(ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    Node* temp =ptr1->next;
    ptr1->next=ptr1->next->next;
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

    removeKthNodeLinkedList(head,3);
    displays(head);

}   