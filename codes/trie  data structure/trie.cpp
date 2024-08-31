#include<bits/stdc++.h>
using namespace std;




class TrieNode{
    public:

    char data;
    TrieNode* children[26];
    bool is_terminal;
    TrieNode(char x='\0'){
        data=x;
    is_terminal=false;
    for (int i = 0; i < 26; i++)
    {
        children[i]=NULL;
    }
         
    }

};

class Trie{
    public:

    TrieNode*root;
    Trie(){
       root= new TrieNode();
    }


    void insertUtils(TrieNode*root,string s){

        if(s==""){
            root->is_terminal=1;
            return;
        }
         int x=s[0]-'a';
         TrieNode*temp=root;
        if(root->children[x]!=NULL){
            temp=temp->children[x];

        }else{
            TrieNode *n=new TrieNode(s[0]);
            temp->children[x]=n;
            temp=temp->children[x];
            
        
        }

        insertUtils(temp,s.substr(1));
    }

    void insert(string s){
        insertUtils(root,s);
    }
    bool searchUtils(TrieNode*root,string s){

        if(s==""){
            return root->is_terminal;
        }
          int x=s[0]-'a';
         TrieNode*temp=root;
        if(root->children[x]!=NULL){
            temp=temp->children[x];

        }else{
           return 0;
        }

        return searchUtils(temp,s.substr(1));


    }
    bool search(string s){
       return searchUtils(root,s);

    }
    void removeUtils(TrieNode*root,string s){

        if(s==""){
            root->is_terminal=0;
        }
          int x=s[0]-'a';
         TrieNode*temp=root;
        if(root->children[x]!=NULL){
            temp=temp->children[x];

        }else{
           return ;
        }

        return removeUtils(temp,s.substr(1));


    }
    void remove(string s){
       return removeUtils(root,s);

    }



};

signed main()
{ 
Trie*root=new Trie();
root->insert("anill");

cout<<root->search("anil");

  return 0;}