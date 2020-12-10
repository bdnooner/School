/*
A special type of binary tree is the binary search tree (BST), which is discussed below. In a BST, the keys in the left subtree of a node are smaller than the key in the node, say K, whereas the keys in the right subtree of the node are greater than K. Sometimes we accept that duplicate values are stored in a search tree, and the definition is modified to specify where the duplicates are located, on the left or on the right subtree. In the tree implementation provided <See Week 6 Lab>, duplicates are accepted and the definition in use is, "the keys in the left subtree of a node are smaller than or equal to the key in the node, say K, whereas the keys in the right subtree of the node are greater than K."
*/

struct TreeNode
{
    int info;
    TreeNode *left;
    TreeNode *right;
};


class BinarySearchTree

{
    public:
        BinarySearchTree();
        bool isEmpty();
        void display();
        bool search(int);
        void add(int);
        ~BinarySearchTree();

    private:
        TreeNode* root;

        void inorderDisplay(TreeNode*);
        bool search(int, TreeNode*);
        void add(int, TreeNode* &);
        TreeNode* getMin(TreeNode*);
        void deallocateMemory(TreeNode* &);
};

/*
--Methods search and search(int, TreeNode*)

The method search invokes the overloaded function search(int, TreeNode*). Note that the first method search only has one parameter, the value to be searched, whereas the second does not only have x as a parameter but also the root node of the tree in which to search. The rationale for using two functions is that (1) we want to use recursion to search for x, and (2) the root node of the tree should also be passed to the recursive function as a parameter.

A natural recursive process based on the way values are organized in a BST is implemented: if the current element is the one we are searching, return true. Otherwise, decide which subtree to search according to the value of x. A result of false is obtained if null is reached in the process.

The same approach is used in the function for listing the elements stored in the BST (display), the function for inserting an element in the BST (add), as well as in the function to find the smallest element in the BST (getMinimum).

--Methods display and inorderDisplay

To display the elements stored in the binary search tree, the tree nodes are visited in what is called inorder traversal. The procedure is recursive, and at each node, the following steps are executed.

    Inorder Traversal
        Traverse (recursively) the left subtree.
        Visit the node—for example, print the element.
        Traverse (recursively) the right subtree.

--The method display() invokes the private method inorderDisplay, which is where the actual traversal is implemented in the class.

Note that the inorder traversal can be applied to any binary tree, not just to binary search trees. The listing produced by the inorder traversal is called the inorder sequence, and for BSTs, the elements are sorted and displayed in nondecreasing order.


    Preorder Traversal
        Visit the node.
        Traverse (recursively) the left subtree.
        Traverse (recursively) the right subtree.

    Postorder Traversal
        Traverse (recursively) the left subtree.
        Traverse (recursively) the right subtree.
        Visit the node.


-- Methods add and add(int, TreeNode* &)

The method add invokes add(int, TreeNode* &), which is a recursive function that determines whether the element should be inserted in the left subtree or in the right subtree. If the corresponding subtree is empty, it inserts the element there. If not, the process continues recursively.

-- Methods getMinimum and getMinimum(TreeNode* p)

The method getMinimum is based on this property of BST: The smallest value is stored in the leftmost node. Accordingly, a recursive search on the left branch of the tree is performed.

**Note: that a symmetric property exists for the greatest value: the greatest value in a BST is always stored in the rightmost node.

*/

