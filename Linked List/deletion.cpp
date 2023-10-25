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
        cout<<temp->val<<"->";
        temp=temp->next;
    }cout<<"\n";
}
void deletionathead(Node* &head){
	Node* temp=head;
	head=head->next;
	free(temp);
}
void deletionattail(Node* &head){
	Node* sec_last=head;
	while(sec_last->next->next!=NULL){
		sec_last=sec_last->next;
	}Node*temp = sec_last->next;
	sec_last->next=NULL;
	free(temp);	
}
void deletionatindex(Node* &head,int i){
	int posi=0;
	if (i==0){
		deletionathead(head);
		return;
	}
	Node* prev=head;
	while(posi!=i-1){
		prev=prev->next;
		posi++;
	}Node*temp=prev->next;
	prev->next=prev->next->next;
	free(temp);
	
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
    int i,n,l,data;
    Node* head=NULL;
    cout<<"enter length of list:";
    cin>>l;
    cout<<"elements";
    for(i=0;i<l;i++){
        cin>>data;
        insertattail(head,data);
    }
//    cin>>n;
//    insert(head,n);
	cout<<"Position you want to delete";
//	cin>>i;
//	deletionatindex(head,i);
	
    display(head);
    deletionathead(head);
    display(head);
}
