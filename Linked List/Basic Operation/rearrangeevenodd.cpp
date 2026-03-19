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
Node* rearrangeEvenOdd(Node* head){
    if(head==NULL){
        return head;
    }
    vector<int> arr;
    Node* temp=head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    vector<int> result;
    for(int i=0;i<arr.size();i+=2){
        result.push_back(arr[i]);
    }
    for(int i=1;i<arr.size();i+=2){
        result.push_back(arr[i]);
    }
    temp=head;
    int idx=0;
    while(temp!=NULL){
        temp->data=result[idx++];
        temp=temp->next;
    }
    return head;


}
void rearrangeEvenOdd2(Node *head) {
        // Your Code here
        Node* prev=head;
        Node* curr=head->next;
        Node* secondHead=head->next;
        while(curr!=NULL && curr->next!=NULL){
            prev->next=curr->next;
            prev=curr->next;
            curr->next=prev->next;
            curr=prev->next;
        }
        prev->next=secondHead;
}
//TC : O(n)
//SC: O(n)