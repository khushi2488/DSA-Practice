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

Node* reverselist(Node* head){
        Node* prev=nullptr;
        Node* curr=head;
        while(curr){
            Node* nexttemp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nexttemp;
        }
        return prev;
}


bool ispalindrome(Node* head){
if(!head || !head->next){
    return true;
}
Node* slow=head;
Node* fast=head;

while(fast && fast->next){
    slow=slow->next;
    fast=fast->next->next;
}
Node* sechalf=reverselist(slow);
Node* firsthalf=head;;
bool ispalin=true;
while(sechalf){
    if(firsthalf->data !=sechalf->data){
        ispalin=false;
        break;
    }
    firsthalf=firsthalf->next;
    sechalf=sechalf->next;
}
return ispalin;

}

//Tc : O(N)
//SC :O(1)