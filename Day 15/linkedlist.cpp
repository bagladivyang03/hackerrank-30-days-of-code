/*
Task
Complete the insert function in your editor so that it creates a new Node (pass data as the Node constructor argument) and inserts it at the tail of the linked list referenced by the head parameter. Once the new node is added, return the reference to the head node.

Note: If the head argument passed to the insert function is null, then the initial list is empty.

Input Format
The insert function has 2 parameters: a pointer to a Node named head, and an integer value,data .
The constructor for Node has 1 parameter: an integer value for the data field.
You do not need to read anything from stdin.

Output Format
Your insert function should return a reference to the head node of the linked list.
*/

#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
          //Complete this method
          if(head==NULL){
            
            head = new Node(data);
              head->next=NULL;
          }
          else{
              Node *temp = head;
              while(temp->next!=NULL){
                  temp = temp->next;
              }
              Node *nNode = new Node(data);
              temp->next=nNode;
              nNode->next=NULL;
          }
          return head;
      }
      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}
