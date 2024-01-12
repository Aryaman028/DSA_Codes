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
void InsertAtHead(Node* &head,int val){
	Node* new_node = new Node(val);
	new_node->next=head;
	
	head =new_node;
}
void display(Node* head){
	Node* temp =head;
	while(temp!=NULL){
		cout<<temp->val<<"->";
		temp=temp->next;
	}cout<<"NULL"<<endl;
}
int main(){
	Node* head =NULL;
	InsertAtHead(head,2);
	display(head);
	InsertAtHead(head,5);
	display(head);	
}
