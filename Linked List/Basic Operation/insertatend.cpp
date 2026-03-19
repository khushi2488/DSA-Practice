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

    Node* insertattail(Node* head,int x){
        Node* newNode=new Node(x);
        if(head==nullptr){
            return newNode;
        }
        Node* temp=head;
        while(temp->next!=NULL){
           temp=temp->next;
        }
        temp->next=newNode;
        return head;
    }
    //TC -> O(n)
    //Sc->O(1)
};