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
void insertattail(Node* &head,int val){
	Node* temp=head;
	Node* new_node = new Node(val);
	if(head==NULL)
	{
		head=new_node;
	}
	else
	{
	while(temp->next!=NULL){
		temp =temp->next;
	}
	temp->next=new_node;
//	new_node->next=NULL;
	}
		
}
void display(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->val<<"->";
		temp=temp->next;	
	}
	cout<<"NUll"<<endl;
}
void InsertAtHead(Node* &head,int val){
	Node* new_node = new Node(val);
	new_node->next=head;
	
	head =new_node;
}
int main(){
	Node* head =NULL;
	//InsertAtHead(head,2);
	//display(head);
	//InsertAtHead(head,5);
	//display(head);
	insertattail(head,10);
	insertattail(head,4550);
	insertattail(head,190);
	display(head);
}
