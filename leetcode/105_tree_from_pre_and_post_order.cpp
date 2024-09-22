#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int i=0,j=0;
        while (i<preorder.size())
        {
            TreeNode* root = new TreeNode(preorder[i]);
        }
        
    }
};


void printTree(TreeNode* tree){

    if(tree==nullptr) return;

    cout<<tree->left<<"l  ";
    printTree(tree->left);

    cout<<tree->val<<"r  ";

    cout<<tree->right<<"ri  ";
    printTree(tree->right);

}


int main(){
    vector<int> preorder = {3,9,20,15,7};
    vector<int> inorder = {9,3,15,20,7};

    Solution Solver = Solution();
    TreeNode* ans = Solver.buildTree(preorder,inorder);
    TreeNode* left = new TreeNode(1);
    TreeNode* right = new TreeNode(2);
    TreeNode* tree = new TreeNode(5,left,right);

    printTree(tree);   

    
}