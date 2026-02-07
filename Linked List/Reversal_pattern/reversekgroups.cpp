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
Node* kgroups(Node* head, int k){
    if(head==NULL){
        return NULL;
    }
    Node* next=NULL;
    Node* curr=head;
    Node* prev=NULL;
    int cnt=0;
    while(curr!=NULL && cnt<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        cnt++;
    }
    if(next!=NULL){
        head->next=kgroups(next,k);
    }
    return prev;
}

//Tc : O(N
//SC :O(1)