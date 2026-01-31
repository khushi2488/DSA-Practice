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
void removeloop(Node* head){
    unordered_set<Node*> visited;
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL){
           if(visited.find(curr)!=visited.end()){
             prev->next=NULL;
             return;
           }
           visited.insert(curr);
           prev=curr;
           curr=curr->next;
    }

}
// TC :O(N)
// SC :O(N)