#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
class Solution{
    public :
    Node* deleteNode(Node* head, int x){
    if(x==1){
       Node* temp=head;
       head=head->next;
       delete temp;
       return head;

    }
    Node* curr=head;
    for(int i=1;i<x-1;i++){
        curr=curr->next;
    }
    Node* nodetobedeleted=curr->next;
    curr->next=nodetobedeleted->next;
    delete nodetobedeleted;

    return head;
  
    }
};
//TC : O(n)
//SC :O(1)