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
void insertatposi(Node* &head,int ind,int num){
	int cur=0;
	Node* new_node = new Node(num);
	if(ind==0){
		new_node->next=head;
		head=new_node;
	}else{
		Node* temp =head;
		while(cur!=ind-1){
			temp=temp->next;
			cur++;	
		}
		new_node->next=temp->next;
		temp->next=new_node;
	}
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
    cin>>posi;
    cin>>num;
    insertatposi(head,posi,num);
//    insert(head,n);
    display(head);
}
