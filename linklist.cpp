#include<bits/stdc++.h>

using namespace std;

struct Node{
 int data;
 Node *link;
};
//creating head pointer and equating to NULL
Node *head=NULL;
int main(){
Node *ptr=new Node();
 //Adding data and setting link to NULL
 ptr->data=2;
 ptr->link=NULL;
 //Pointing head to created Node
 head=ptr;
 cout<<"data is"<<head->data;
return 0;
}