#include <bits/stdc++.h>

//#include <bits/stdc++.h>

//deleting duplicates from the linked list
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
    }cout<<"NULL\n";
}
//void deletionathead(Node* &head){
//	Node* temp=head;
//	head=head->next;
//	free(temp);
//}
//void deletionattail(Node* &head){
//	Node* sec_last=head;
//	while(sec_last->next->next!=NULL){
//		sec_last=sec_last->next;
//	}Node*temp = sec_last->next;
//	sec_last->next=NULL;
//	free(temp);	
//}
void removing_duplicates(Node* &head){
	Node* cur=head;
	while(cur!=NULL && cur->next!=NULL){
		if(cur->val==cur->next->val){
			Node* temp=cur->next;
			cur->next=cur->next->next;
			free(temp);
		}
		else{
		cur=cur->next;
	}
	}
	
}

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
    removing_duplicates(head);
    display(head);
    

}
