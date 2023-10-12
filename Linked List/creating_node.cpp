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
int main(){
	Node* head = new Node(1);
//	Node* next = new Node(2);
	cout<<head->val<<" "<<head->next<<endl;
//	cout<<head->val<<" "<<head->next<<endl;
}


