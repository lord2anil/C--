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

struct node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;}  
};

void insert_tail(node* &head,int val){
    node*n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node*temp=head;
    while (temp->next!=NULL)
    {temp=temp->next;
    }

    temp->next=n;

}
void make(node* &head ,int pos){
    node*temp=head;
    node*start;
    int count=0;
    while (temp->next!=NULL)
    {
        if(count==pos){
            start=temp;
        }
        count++;
        temp=temp->next;
    }
    temp->next=start;

    

    
}
bool detect(node*head){

 
    node*slow=head;
    node*fast=head;

    while (fast->next!=NULL&&fast!=NULL)
    {
        /* code */slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return 1;
        }
    }
    return 0;
    

}
void remov(node*&head){
    node*slow=head;
    node*fast=head;
   do
   {
    slow=slow->next;
    fast=fast->next->next;

   } while (fast!=slow);

   fast=head;
   while (fast->next!=slow->next)

   { slow=slow->next;
    fast=fast->next;
    /* code */
   }
   slow->next=NULL;
   
   
    

}











void display(node* head){
    node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" " ;
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node*head=NULL;
    insert_tail(head,2);
    insert_tail(head,3);
    insert_tail(head,4);
    insert_tail(head,5);
    insert_tail(head,6);

    display(head);
    make(head,2);
cout<<detect(head);
remov(head);
cout<<detect(head);
 
 

   

return 0;
}