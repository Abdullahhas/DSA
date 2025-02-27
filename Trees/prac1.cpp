#include<iostream>
using namespace std;

struct tree
{
    int info;
    tree *right;
    tree *left;
};

tree *root = NULL;


tree* createNode(int x)
{
    tree *newNode = new tree;
    newNode->info = x;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


tree* insert(tree *root, int x)
{
    if(root == NULL)
    {
        return createNode(x);
    }
    else if(x < root->info)
    {
        root->left = insert(root->left, x);
    }
    else if(x > root->info)
    {
        root->right = insert(root->right, x);
    }
    return root;
}

void inorder(tree *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        cout << root->info << " ";
        inorder(root->right);
    }
}

void postorder(tree *root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->info << " ";
       
    }
}
void preorder(tree *root)
{
    if(root!=NULL)
    {
       cout << root->info << " ";
       preorder(root->left);
       preorder(root->right);

    }
}

tree* FindMin(tree* node)
{
    while(node->left != NULL)
    {
        node = node->left;
    }
    return node;
}

tree* deleteinTree(tree *root , int x)
{
    if(root== NULL)
    {
        return root;
    }
    else if(x<root->info)
    {
        root->left = deleteinTree(root->left , x);
    }

    else if(x>root->info)
    {
        root->right = deleteinTree(root->right , x);
    }
    else{
        if(root->right == NULL && root->left == NULL)
        {
            delete root;
            root = NULL;
            return root;
        }
        else if (root->left == NULL)
        {
            tree *temp = root;
            root = root->right;
            delete temp;
            return root;
        }
        else if(root->right == NULL)
        {
            tree *temp = root;
            root = root->left;
            delete temp;
            return root;
        }
        else{
            tree *temp = FindMin(root->right);
            root->info = temp->info;
            root->right = deleteinTree(root->right , temp->info);
        }
        
    }
    return root;

}

int main()
{
    
    root = insert(root, 50);
    insert(root,10);
    insert(root,30);
    insert(root,20);
    insert(root,23);
    insert(root,80);
    insert(root,70);
    insert(root,65);

    deleteinTree(root , 20);
    deleteinTree(root , 65);

    cout << "Elements in the tree (in-order traversal): ";
    inorder(root);
    cout << endl;

    

    cout << "Elements in the tree (post-order traversal): ";
    postorder(root);
    cout << endl;

    cout << "Elements in the tree (pre-order traversal): ";
    preorder(root);
    cout << endl;

    return 0;
}
