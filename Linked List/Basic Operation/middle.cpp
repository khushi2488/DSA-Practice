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
 int getMiddle(Node* head) {
      int count=0;
      Node* temp=head;
      while(temp!=NULL){
          temp=temp->next;
          count++;
      }
    //   cout<<count<<endl;
      int ans=count/2;
      
      temp=head;
      while(ans--){
          temp=temp->next;
      }
      return temp->data;
      
        
      
    }

     int getMiddle2(Node* head) {
      
      Node * slow = head;
      Node* fast =head;
      
while (fast != NULL and fast->next!= NULL)      
      {
          slow= slow->next;
          fast= fast->next->next;
      }
      return slow->data;
        
    }