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
		void deletionathead(){
			Node* temp=head;
			head=head->next;
			if(head==NULL){
				tail=NULL;
			}else head->prev=NULL;
			free(temp);
		}
		void deletionatend(){
			if(head==NULL){
				return;
			}
			Node*temp=tail;
			tail=tail->prev;
			if(tail==NULL){
				head=NULL;
			}else tail->next=NULL;	
		}
		void deletionatposi(int posi){
			if(head==NULL){
				return;
			}
			int c=1;
			Node* cur=head;
			while(c!=posi-1){
				cur=cur->next;
				c++;
			}Node* temp =cur->next;
			cur->next=cur->next->next;
			temp->next->prev=cur;
			free(temp);
		}

		void display(){
    	Node* temp=head;
//    	cout<<"NULL<-";
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
   	l1.insertathead(40);
   	l1.insertathead(30);
   	l1.deletionatposi(2);
   	l1.display();
}

