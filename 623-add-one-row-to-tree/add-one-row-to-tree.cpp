class Solution {
public:

    void dfs(TreeNode* node, int currDepth, int depth, int val) {

        if (node == NULL)
            return;

        // We are at the level just above where
        // the new row needs to be inserted
        if (currDepth == depth - 1) {

            TreeNode* left = node->left;
            TreeNode* right = node->right;

            node->left = new TreeNode(val);
            node->right = new TreeNode(val);

            node->left->left = left;
            node->right->right = right;

            return;
        }

        dfs(node->left, currDepth + 1, depth, val);
        dfs(node->right, currDepth + 1, depth, val);
    }

    TreeNode* addOneRow(TreeNode* root, int val, int depth) {

        if (depth == 1) {
            TreeNode* newnode = new TreeNode(val);
            newnode->left = root;
            return newnode;
        }

        dfs(root, 1, depth, val);

        return root;
    }
};