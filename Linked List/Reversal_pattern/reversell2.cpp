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