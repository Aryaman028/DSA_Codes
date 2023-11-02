#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int val;
		Node* next;
		
		Node(int data){
			val=data;
			next= NULL;
		}		
};
class circularLL{
	public:
		Node*head;
		circularLL(){
			head=NULL;
		}
	void InsertAtHead(int val){
		Node* new_node= new Node(val);
		if(head==NULL){
			head=new_node;
			new_node->next=head;
		}
		Node*cur=head;
		while(cur->next!=head){
			cur=cur->next;
		}
		cur->next=new_node;
		new_node->next=head;
		head=new_node;	
	}
		void InsertAttail(int val){
		Node* new_node= new Node(val);
		if(head==NULL){
			head=new_node;
			new_node->next=head;
		}
		Node*cur=head;
		while(cur->next!=head){
			cur=cur->next;
		}
		cur->next=new_node;
		new_node->next=head;
	}
	void deletionathead(){
		if(head==NULL){
			return;
		}
		Node*cur=head;
		while(cur->next!=head){
			cur=cur->next;
		}
		Node*temp =head;
		head=head->next;
		cur->next=head;
		free(temp);
		
	}
		void deletionattail(){
		if(head==NULL){
			return;
		}
		Node*cur=head;
		while(cur->next->next!=head){
			cur=cur->next;
		}
		Node*temp =cur->next;
		cur->next=head;
		free(temp);
		
	}
	void display(){
		Node* temp =head;
		do{
			cout<<temp->val<<"->";
			temp=temp->next;
		}while(temp!=head);
	}
};
int main(){
	circularLL l1;
	l1.InsertAtHead(1);
	l1.InsertAtHead(2);	
	l1.InsertAtHead(3);
	l1.InsertAtHead(4);
	l1.InsertAtHead(5);
	l1.deletionathead();
	l1.deletionattail();
	l1.display();		
}
