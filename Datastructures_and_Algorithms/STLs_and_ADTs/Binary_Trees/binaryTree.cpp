/*
 * Binary Tree
If a node in a binary tree has no left or right children, it is called a leaf. Observe that nodes 37 and 40 are leaves in the example above. A node that has at least one child is called a non leaf or an interior node. Twenty and 23 are examples of interior nodes. The height of a node is the number of nodes in the longest path from the node to a leaf minus one. The concept of a height of a node can be defined recursively in terms of the heights of the children.
*/

//Structure of a TreeNode
    // A node in a binary tree is actually extending the concept of a node in a linked list. Each node contains two pointers, one to the root of the left subtree and one to the root of the right subtree
struct TreeNode
{
    int info;
    TreeNode *left;
    TreeNode *right;
};

/*
Inorder Traversal
    Traverse (recursively) the left subtree.
    Visit the node—for example, print the element.
    Traverse (recursively) the right subtree.
*/
    void BinaryTree::inorderDisplay(TreeNode *p)
{
	if (p != NULL)
	{
		inorderDisplay(p->left);
		cout << p->info << " ";
		inorderDisplay(p->right);
	}
}
/*
Preorder Traversal
    Visit the node.
    Traverse (recursively) the left subtree.
    Traverse (recursively) the right subtree.
*/
    void BinarySearchTree::preorderDisplay(TreeNode *p)
{
	if (p != NULL)
	{
		cout << p->info << " ";
		preorderDisplay(p->left);
		preorderDisplay(p->right);
	}
}


/*
Postorder Traversal
    Traverse (recursively) the left subtree.
    Traverse (recursively) the right subtree.
    Visit the node.
*/

void BinarySearchTree::postorderDisplay(TreeNode *p)
{
	if (p != NULL)
	{

		postorderDisplay(p->left);
		postorderDisplay(p->right);
		cout << p->info << " ";
	}
}