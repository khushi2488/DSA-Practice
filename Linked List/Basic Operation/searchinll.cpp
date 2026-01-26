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
      bool searchKey(Node* head,int key){
            Node* temp=head;
            while(temp!=NULL){
                if(temp->data==key){
                    return true;
                }
            }
            return false;
         
      }
       
};

//Time complexity --> O(n) --> n is number is node
//Space Complexity --> O(1)--> Constant