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
		cicularLL(){
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
	l1.display();		
}
