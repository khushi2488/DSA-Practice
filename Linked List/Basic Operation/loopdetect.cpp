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

bool detectloop(Node* head){
    unordered_map<Node*,bool> mp;
    Node* temp=head;
    while(temp){
        if(mp.find(temp)!=mp.end()){
            return true;
        }
        mp[temp]=true;
        temp=temp->next;
    }
    return false;

}
//TC :O(n)
//SC :O(n)

bool detectloop2(Node* head){
Node* slow=head;
Node* fast=head;
while(fast and fast->next){
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast){
        return true;
    }
    return false;
}
}
//TC :O(n)
//SC:O(1)