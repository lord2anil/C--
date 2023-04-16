#include<bits/stdc++.h>

using namespace std;
#include <vector>
#include <array>
using namespace std;
using std ::max;
using std ::min;
#include <set>
using std::pair;
using std::array;
#include <algorithm>
#include <functional>
#define ll long long int
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
      /* code */ temp = temp->next;
   }
   temp->next = n;
};
int lenght(Node*head){
    int l=0;
    Node*temp=head;
    while (temp!=NULL)
    {
        /* code */l++;
        temp=temp->next;
    }
    return l;
    
}


int intersection(Node*head1,Node*head2){
    int l1=lenght(head1);
    int l2=lenght(head2);
    Node*ptr1;
    Node*ptr2;
    int d;
    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;

    }else{
       d=l2-l1;
        ptr1=head2;
        ptr2=head1;  
    }
    
    while (d)
    {
        /* code */ptr1=ptr1->next;
        if(ptr1==NULL){
        return -1;
        }
    }
    while (ptr1!=NULL &&ptr1!=NULL)
    {if(ptr1==ptr2){
        return ptr1->data;

    }
       ptr1=ptr1->next;
       ptr2=ptr2->next;
    }
   
    return -1;
    
    

}



void display(Node *head)
{
   while (head != NULL)
   {
      /* code */ cout << head->data;
      head = head->next;
   }
};


int main(){
Node *head = NULL;
   insert_tail(head, 1);
   insert_tail(head, 2);
   insert_tail(head, 3);
   insert_tail(head, 4);
return 0;
}