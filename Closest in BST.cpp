class Solution {
  public:
    int minDiff(Node *root, int k) {
        // code here
        if(root)
        {
            if(root->data == k)
            {
                return 0;
            }
            if(root->data > k)
            {
                return min(root->data - k, minDiff(root->left, k));
            }
            else
            {
                return min(k - root->data, minDiff(root->right, k));
            }
        }
        else
        
        {
            return INT_MAX;
        }
    }
};
