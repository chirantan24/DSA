void inorder(Node* root)
{
  stack<Node*>s;
  Node* curr=root;
  while(!s.empty() || curr)
  {
    if(curr)
    {
      s.push(curr);
      curr=curr->left;
    }
    else
    {
      curr=s.top();
      s.pop();
      cout<<curr->data<<" ";
      curr=curr->right;
    }
  }
}
