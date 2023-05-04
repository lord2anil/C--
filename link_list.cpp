#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <array>
using namespace std;
using std::array;
#include <algorithm>
#include <functional>
class Node
{
public:
   int data;
   Node *next;

   Node(int val)
   {
      data = val;
      next = NULL;
   }
};

void insert_head(Node *&head, int val)
{
   Node *n = new Node(val);
   n->next = head;
   head = n;
};
void insert_tail(Node *&head, int val)
{
   Node *n = new Node(val);
   if (head == NULL)
   {
      head = n;
      return;
   }
   Node *temp = head;
   while (temp->next != NULL)
   {
       temp = temp->next;
   }
   temp->next = n;
}

;

void display(Node *head)
{
   while (head != NULL)
   {
      /* code */ cout << head->data;
      head = head->next;
   }
};

void find(Node *head, int val)
{

   while (head != NULL)
   {
      /* code */ if (head->data == val)
      {
         /* code */ cout << "yes";
      }
      head = head->next;
   }
   cout << "no";
}

void deleteAthead(Node* &head){
   Node*todelete=head;
   head=head->next;
   delete todelete;

}

void deletion(Node*& head,int val){
   Node*temp=head;
   if (head==NULL)

   {
      /* code */return;
   }
   
   if (head->next==NULL)
   {
      /* code */deleteAthead(head);
   }
   


   while (temp->next->data!=val)
   {
      /* code */ temp=temp->next;
   }
   Node*todelete=temp->next;
   temp->next=temp->next->next;
    delete todelete;

}



Node*reverse(Node* &head){

   Node*prevptr =NULL;
   Node*currptr=head;
   Node*nextptr;
   while (currptr!=NULL){
      /* code */
      nextptr=currptr->next;
      currptr->next=prevptr;
      prevptr=currptr;
      currptr=nextptr;
   }
      return prevptr;
   
}
Node*reversek(Node*& head ,int k){
    Node*prevptr=NULL;
    Node*currptr=head;
    Node*nextptr;

    int count=0;
    while (currptr!=NULL && count<k)
    {
       /* code */ nextptr=currptr->next;
       currptr->next=prevptr;
       prevptr=currptr;
       currptr=nextptr;
       count++;
    }

    if (nextptr!=NULL)
    {
       /* code */
    head->next =reversek(nextptr,k);
    
    }
    return prevptr;
    
}


Node*rec(Node*&head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node*newhead=rec(head->next);
    head->next->next=head;
    head->next=NULL;
    return  newhead;

}



int main()
{
   Node *head = NULL;
   insert_tail(head, 1);
   insert_tail(head, 2);
   insert_tail(head, 3);
   insert_tail(head, 4);
   // insert_head(head, 4);
   // deletion(head,3);
   // deleteAthead(head);
   display(head);
   // Node*newhead=reverse(head);
   
   // display(newhead);

   // find(head, 6);
   Node*newhead=reversek(head,2);
   display(newhead);


   return 0;
}