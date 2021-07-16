int minValue(Node* root)
{
    if(root)
    {
        if(root->left)
        return minValue(root->left);
        return root->data;
    }
    // Code here
}
