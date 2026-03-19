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
class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        int count=0;
        Node* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        // cout<<count<<endl;
        if(k>count){
            return -1;
        }
        temp=head;
        for(int i=1;i<=count-k;i++){
            temp=temp->next;
        }
        // cout<<temp->data<<endl;
        return temp->data;
    }
};
// tc : O(N)
// sc :O(1)
