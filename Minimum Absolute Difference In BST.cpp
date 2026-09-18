/* Binary Tree Node Structure
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; 
*/

#pragma GCC optimize ("-O3")
class Solution {
  public:
    int absDiff(Node *root) {
        int mndiff = INT_MAX, prev = -1;
        while(root){
            Node *pre = root -> left;
            if(!pre){
                if(prev != -1)
                    mndiff = min(mndiff, root -> data - prev);
                prev = root -> data;
                root = root -> right;
            }
            else{
                while(pre -> right && pre -> right != root)
                    pre = pre -> right;

                if(!pre -> right){
                    pre -> right = root;
                    root = root -> left;
                }
                else{
                    pre -> right = nullptr;
                    mndiff = min(mndiff, root -> data - prev);
                    prev = root -> data;
                    root = root -> right;
                }
            }
        }
        return mndiff;
    }
};
