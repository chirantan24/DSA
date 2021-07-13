void postorder(Node* root)
{
  stack<Node*>s,p;
  s.push(root);
  while(!s.empty())
  {
    p.push(s.top());
    if(p.top()->left)
      s.push(p.top()->left);
    if(p.top()->right)
      s.push(p.top()->right);
  }
  while(!p.empty())
  {
    cout<<p.top()->data<<" ";
    p.pop();
  }
}
