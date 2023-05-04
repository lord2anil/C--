vector<int> diagonal(Node *root)
{
   // your code here
   vector<int> ans;
    queue<Node *> q;
    q.push(root);
    while(q.size()){
        Node *curr = q.front();
        q.pop();
        while(curr != NULL){
            ans.push_back(curr->data);
            if(curr->left)  q.push(curr->left);
            curr = curr->right;
        }
    }
    return ans;
}