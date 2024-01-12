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

Node* reversing(Node* &head){

	Node* cur=head;
	Node* prev=NULL;
		while(cur!=NULL){
			Node* sec=cur->next;
			cur->next=prev;
			prev = cur;
			cur=sec;	
		}
	
	Node* new_head=prev;
	return new_head;
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }cout<<"NULL\n";
}
//void insert(Node* &head,int n){
//    Node* temp=head;
//    Node* new_node=new Node(n);
//    while(temp!=NULL){
//        if(temp->val<n && n<(temp->next)->val){
//            temp->next=new_node;
//            new_node->next=temp->next;
//        }
//    }
//}
int main(){
    int posi,l,data,num;
    Node* head=NULL;
    cin>>l;
    for(int i=0;i<l;i++){
        cin>>data;
        insertattail(head,data);
    }
    
    display(head);
    head=reversing(head);
    display(head);
}

