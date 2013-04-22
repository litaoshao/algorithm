#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    void flatten(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        pre_order(root);
        
    }

    void pre_order(TreeNode *root){
        
        if (root == NULL)
            return;
        if(root->left != NULL){
            pre_order(root->left);
        }
        if(root->right != NULL){
            pre_order(root->right);
        }
        
        TreeNode *tmp_right = root->right;
        root->right = root->left;
        root->left = NULL;
        TreeNode *current_p = root;
        while(current_p->right != NULL)
            current_p = current_p->right;
        current_p->right = tmp_right;
    }
};

int main(){
    
    TreeNode t1(1);
    TreeNode t2(2);
    TreeNode t3(3);
    TreeNode t4(4);
    TreeNode t5(5);
    TreeNode t6(6);

    t1.left = &t2;
    t1.right = &t5;
    //t2.left = &t3;
    //t2.right = &t4;
    //t5.left = &t6;

    Solution s;
    s.flatten(&t1);

    TreeNode * root = &t1;
    while(root != NULL){
        cout << root->val << endl;
        root = root->right;
    }
}
