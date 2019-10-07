#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};
Node *tail=NULL;
Node * takeInput()
{
	int data;
	cin>>data;
	Node *head=NULL;
	while(data!=-1)
	{
	Node *newnode = new Node(data);
	if(head == NULL)
	{
		head = newnode;
		tail = newnode;
	}
	else
	{
		tail->next = newnode;
		tail = tail->next;
	}
	cin>>data;
   }
    tail->next = head;
    //cout<<tail->next->data<<" head"<<endl;
	return head;
}
void print(Node*head,Node *tail)
{
	Node * temp = head;
	while(temp->next!=head)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<tail->data<<" ";
	return;
}
Node * insertNode(Node*head,int pos,int data,Node*tail)
{
	Node *newnode = new Node(data);
	if(head==NULL)
	{
		head= newnode;
		tail = head;
	}
	if(pos==0)
	{
		newnode->next = head;
		head = newnode;
		tail->next = head;
		return head;
	}
	else
	{
		int i=0;
		Node *temp= head;
		while(i<pos-1)
		{
			temp = temp->next;
			i++;
		}
		if(temp==head)
		{
			tail->next = newnode;
			tail = tail->next;
			tail->next = head;
			return head;
		}
		newnode->next = temp->next;
		temp->next = newnode;
		return head;
	}
}
int main()
{
	Node *head = takeInput();
	int pos1,data;
	cin>>pos1>>data;
	head = insertNode(head,pos1,data,tail);
	print(head,tail);
}
