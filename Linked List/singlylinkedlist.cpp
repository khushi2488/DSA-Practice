#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
      int data;
      Node* next;

      Node(int data){
        this ->data=data;
        this->next=NULL;
        
      }
      ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }

      }
};
void insertathead(Node* &head, int d){
Node* temp=new Node(d);
temp->next=head;
head=temp;
}
void insertAttail(Node* &tail, int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void print(Node* &head){
    if(head==NULL){
        cout<<"List is empty"<<endl;

    }
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertatposition(Node* &tail,Node* &head,int position,int d){
    if(position==1){
        insertathead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAttail(tail,d);
        return;
}
       Node* nodetobeinserted=new Node(d);
       nodetobeinserted->next=temp->next;
       temp->next=nodetobeinserted;

}
