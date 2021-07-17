int countPairs(Node* root1, Node* root2, int x)
{
    stack<Node*>s1,s2;
    int ans=0;
    while(1)
    {
        while(root1)
        {
            s1.push(root1);
            root1=root1->left;
        }
        while(root2)
        {
            s2.push(root2);
            root2=root2->right;
        }
        if(s1.empty() || s2.empty())
        break;
        Node* top1=s1.top();
        Node* top2=s2.top();
        if((top1->data + top2->data) == x)
        {
            ans++;
            s1.pop();
            s2.pop();
            root1=top1->right;
            root2=top2->left;
        }
        else if((top1->data+top2->data)<x)
        {
            s1.pop();
            root1=top1->right;
        }
        else
        {
            s2.pop();
            root2=top2->left;
        }
    }
    return ans;
    // Code here
}
