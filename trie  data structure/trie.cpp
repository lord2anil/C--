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
#define alpha_size 26
struct TrieNode{
    // TrieNode*root;
    public:
    char data;
    TrieNode*children[26];
    bool isterminal;


    TrieNode(char x){
        data=x;
        for (int i = 0; i < 26; i++)
        {
            /* code */children[i]=NULL;
            
        }
        isterminal=0;
        
    }
};

struct trie
{
    public:
     TrieNode *root;   
    trie() {
        root= new TrieNode('\0');
    }


void insert1(TrieNode*root,string word){
    if(word.size()==0){
        root->isterminal=1;
        return;
    }

    TrieNode*temp=root;

int index=word[0]-'A';
if(root->children[index]!=NULL){
    temp=temp->children[index];
}else{
    TrieNode*x=new TrieNode(word[0]);
    temp->children[index]=x;



}
insert1(temp,word.substr(1));

}


bool  search2(TrieNode*root,string word)
{
    if(word.size()==0){
        return root->isterminal;
    }

    int index=word[0]-'A';
TrieNode*chid;
    if(root->children[index]!=NULL){
       chid=root->children[index];
    }else{
        return 0;
    }
    return search2(chid,word.substr(1));

}

void insert(string s){
    insert1(root,s);
}
bool search(string s){
   return search2(root,s);
}



};
int main(){

    trie*root=new trie();
root->insert("anil");
cout<<root->search("anil");



return 0;
}