#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=NULL;
    }
};
void insertattail(Node* &head,int data){
    Node* new_node = new Node(data);
    if(head==NULL){
        head=new_node;
    }else
    {Node* temp =head;
        while(temp->next!=NULL){
            temp=temp->next;
        }temp->next=new_node;
    }
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void insert(Node* &head,int n){
    Node* temp=head;
    Node* new_node=new Node(n);
    while(temp!=NULL){
        if(temp->val<n && n<(temp->next)->val){
            temp->next=new_node;
            new_node->next=temp->next;
        }
    }
}
int main(){
    int n,l,data;
    Node* head=NULL;
    cin>>l;
    for(int i=0;i<l;i++){
        cin>>data;
        insertattail(head,data);
    }
    cin>>n;
    insert(head,n);
    display(head);
}
