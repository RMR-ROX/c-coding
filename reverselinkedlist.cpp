#include<iostream>
using namespace std;

class Node{//singly linked list
	
	public:
		int data;
		Node* next;
		
		Node(int data)
		{
			this->data=data;
			this->next=NULL;
		}
		
};

void insertAttail(Node* &tail,int val)
{
	
	Node* new_node=new Node(val);
	tail->next=new_node;
	tail=new_node;
	
}

void print(Node* &head)
{
	
	Node* temp=head;
	
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<endl;
	
}

void reverse(Node* head,Node* tail)
{
	static int marker=1;
	
	Node* curr=head->next;
	Node* prev=head;
	Node* temp=curr->next;
	
	
	//base case
    if(tail == curr)
    {	
    	curr->next=prev;//or we can also write it as tail->next=prev
    	prev->next=NULL;
    	tail=prev;
    	return;
	}
	else{

	while(temp != tail)
	{
		curr=curr->next;
		prev=prev->next;
		temp=temp->next;
		
	}
	//curr and prev points to the correct addresses after the loop is completed
	tail->next=curr;	
	tail=curr;
	
}	

    marker++;
	reverse(head,tail);	
	
//	head=future_head;
	
}
int main()
{
	//create a linked list
	
	Node* head=new Node(1);
	Node* tail=head;
	
	for(int i=2;i<=10;i++)
	{
	insertAttail(tail,i);
}
Node* futurehead=tail;

print(head);


reverse(head,tail);

head=futurehead;

print(head);

return 0;

}
