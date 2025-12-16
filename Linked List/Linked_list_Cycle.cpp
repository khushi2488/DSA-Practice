#include<bits/stdc++.h>
using namespace std;


//   Definition for singly-linked list.
  struct ListNode {
  int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
  class Solution {
public:
    bool hasCycle(ListNode *head) {
        
      ListNode* curr=head;
      unordered_map<ListNode*,bool> visited;
      while(curr!=NULL){
         if(visited[curr]==true){
            return true;
         }
         visited[curr]=true;
         curr=curr->next;

      }
      return false;

    }
};

//tc->o(n)
//sc->o(n)
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> visited;
        ListNode* curr=head;

        while(curr!=NULL){
            if(visited.count(curr)){
                return true;
            }
            visited.insert(curr);
            curr=curr->next;
        }
        return false;
    }
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next){
            return false;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};

// tc->o(n)
//  sc->o(1)->only use the slow and fast pointer