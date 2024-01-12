#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int data){
        val=data;
        next=NULL;
        prev=NULL;
    }
};
class doublylinkedlist{
	public:
		Node*head;
		Node*tail;
		doublylinkedlist(){
			head=NULL;
			tail=NULL;
		}
		void insertathead(int val){
			Node* new_node =new Node(val);
			if(head==NULL){
				head=new_node;
				tail=new_node;
				return;
			}
			new_node->next=head;
			head->prev=new_node; //dont forget to point the prev pointer
			head=new_node;
		}
		void display(){
    	Node* temp=head;
    	cout<<"NULL<-";
    	while(temp!=NULL){
        	cout<<temp->val<<"->";
        	temp=temp->next;
    	}cout<<"NULL\n";
	}
};








int main(){
	doublylinkedlist l1;
	l1.insertathead(10);
   	l1.insertathead(12);
   	l1.insertathead(24);
   	l1.display();
}

