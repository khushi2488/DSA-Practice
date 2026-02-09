#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}*head;

class Solution {
  public:
    Node* pairWiseSwap(Node* head) {
 if (head == NULL || head->next == NULL)
        return head;

    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    int count = 0;

    
    while (count < 2 && curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    
    head->next = pairWiseSwap(curr);

    return prev;
        }
};