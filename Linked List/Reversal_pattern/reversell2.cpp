#include<bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
Node* reversebetween(Node* head , int a , int b){
    vector<int> arr;
    Node* temp=head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    reverse(arr.begin()+(a-1),arr.end()+b);

    temp=head;
    int i=0;
    while(temp!=NULL){
        temp->data=arr[i++];
        temp=temp->next;
    }
    return head;

}
//TC :O(N)
//SC :O(N)


Node* reversebetween(Node* head,int a ,int b){
  if(!head ||a==b){
    return head;
  }
    Node* prev=NULL;
    Node* curr=head;
    for(int i=1;i<a;i++){
      prev=curr;
      curr=curr->next;
    }

    Node* left=prev;
    Node* start=curr;
    Node* nextNode=NULL;
    for(int i=0;i<=b-a;i++){
      nextNode=curr->next;
      curr->next=prev;
      prev=curr;
      curr=nextNode;
    }
    if(left!=NULL){
      left->next=prev;
    }
    else{
      head=prev;
    }
    start->next=curr;

  return head;
}

//TC :O(N)
//SC :O(1)