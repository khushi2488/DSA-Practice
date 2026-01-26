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
 public:
   Node* constructLL(vector<int>& arr){
       if(arr.size()==0){
        return nullptr;
       }
       Node* head=new Node(arr[0]);
       Node* curr=head;
       for(int i=1;i<arr.size();i++){
            curr->next=new Node(arr[i]);
            curr=curr->next;
       }
       return head;
   }
};
//TC: O(n)
//SC: Auxiliary Complexity ->O(1)->for creating the one node
// and we have to create n node so Overall ->O(n)
