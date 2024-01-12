//return the node at which the two lists intersect 
//if the 2 linked lists have no intersection at all, return null.


#include <bits/stdc++.h>

using namespace std;
class Node{
    public:
    int val;
    Node* next;
    int size;
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
Node* moveheadbyk(Node* head,int k){
	int c=0;
	Node* cur=head;
	while(cur!=NULL){
		cur=cur->next;
	}return cur;
	
}
int length(Node* head){
	Node* cur=head;
	int l=0;
	while(cur!=NULL){
		l++;
		cur=cur->next;
	}return l;
}
Node* intersection_check(Node* head1,Node* head2){
	int l=length(head1);
	int n=length(head2);
	Node* ptr1=head1;
	Node* ptr2=head2;
	if(l>n){
		int k=l-n;
		ptr1=moveheadbyk(head1,k);
		ptr2 =head2;
	}
	else if(n>l){
		int k=n-l;
		ptr2=moveheadbyk(head2,k);
		ptr1=head1;
	}
	while(ptr1){
		if(ptr1==ptr2){
			return ptr1;
		}ptr1=ptr1->next;
		ptr2=ptr2->next;			
	}
	return NULL;
	
}



void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }cout<<"NULL\n";
}

int main(){
    int posi,l,data,num,n;
    cout<<"length of first";
    Node* head1=NULL;
	Node* head2=NULL;
    cin>>l;
    for(int i=0;i<l;i++){
        cin>>data;
        insertattail(head1,data);
    }
    cout<<"length of second";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        insertattail(head2,data);
    }
    head2->next=head1->next->next;
    
    display(head1);
    display(head2);
    cout<<intersection_check(head1,head2);
}

