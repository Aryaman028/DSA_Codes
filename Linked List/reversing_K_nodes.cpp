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

Node* reversingknodes(Node* &head,int k){
	
	int count=0; //for reversing till k elements
	Node* cur=head;
	Node* prev=NULL;  //doing iterative reverse for the first k elements then further elements will be reversed by reccursion
		while(cur!=NULL && count<k){
			Node* sec=cur->next;
			cur->next=prev;
			prev = cur;
			cur=sec;
			count++;	
		}
	if(cur!=NULL){
		Node* new_head=reversingknodes(cur,k);
		head->next=new_head;
	}
	return prev;
	
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }cout<<"NULL\n";
}

int main(){
    int posi,l,data,num;
    Node* head=NULL;
    cin>>l;
    for(int i=0;i<l;i++){
        cin>>data;
        insertattail(head,data);
    }
    
    display(head);
    head=reversingknodes(head,2);
    display(head);
}

