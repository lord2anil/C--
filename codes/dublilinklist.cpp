#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <array>
using namespace std;
using std::array;
#include <algorithm>
#include <functional>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <array>
using namespace std;
using std::array;
#include <algorithm>
#include <functional>
class node
{
public:
 int data;
 node*next;
 node*prev;

 node(int val){
     next=NULL;
     prev=NULL;
 }
    
    
};


void insertAthead(node*&head, int val){
    node*n=new node(val);
    n->next=head;
    if (head!=NULL)
    {
        /* code */head->prev=n;
    head->prev=n;
    }
    
    head=n;
};

void inserAttail(node* & head,int val ){

    if (head==NULL)
    {
        /* code */ insertAthead(head,val);
    }
    
    node*n=new node(val);
    node*temp=head;
    while (temp->next!=NULL)
    {
        /* code */
        temp=temp->next;

    }
    temp->next=n;
    n->prev=temp;
    

	};

	
    void display(node*head){
        node*temp=head;
        while (temp!=NULL)
        {
            /* code */cout<<temp->data <<" ";
            temp=temp->next;


        }
        
    };






int main(){
    node*head=NULL;
    inserAttail(head,3);
    // inserAttail(head,4);
    // inserAttail(head,5);
    // inserAttail(head,6);
    // inserAttail(head,7);
    // inserAttail(head,8);
    // inserAttail(head,9);
    display(head);

return 0;
}