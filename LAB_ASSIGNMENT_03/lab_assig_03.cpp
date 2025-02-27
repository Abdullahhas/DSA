#include<iostream>
using namespace std;

struct tree
{
    int info;
    tree *right;
    tree *left;
    int level;
};

tree *root = NULL;


tree *createnode(int x , int level)
{
    tree *node = new tree;
    node->info = x;
    node->left = NULL;
    node->right = NULL;
    node->level = level;
    return node; 
}

tree *insert(tree *root , int x )
{
    if(root == NULL)
    {
        root = createnode(x);
        return root; 
    }
    else if(x > root->info)
    {
        root->right = insert(root->right , x);
       
    }
    else if(x < root->info)
    {
        root->left = insert(root->left , x );
         
    }

    return root; 
}




int leftchild(tree *root) {
    int countl = 0; 
    if (root == NULL || (root->left == NULL && root->right == NULL)) {
        return 0;
    }
    
    
    if (root->left != NULL) {
        countl++; 
    }
    
    countl += leftchild(root->left) + leftchild(root->right);
    
    return countl; 
}

int rightchild(tree *root) {
    int countR = 0; 
    if (root == NULL || (root->left == NULL && root->right == NULL)) {
        return 0;
    }
    
    
    if (root->right != NULL) {
        countR++; 
    }
    
    countR += rightchild(root->right) + rightchild(root->left);
    
    return countR; 
}

int heightotree(tree *root)
{
    if(root == NULL)
    {
        return -1;
    }
    else{
        int hei_lf = heightotree(root->left);
        int hei_rig = heightotree(root->right);
        if(hei_lf>hei_rig)
        {
            return 1+hei_lf;
        }
        else{
            return 1+hei_rig;
        }
    }
}

void printLowestLevelNodes(tree* root, int level) {
    if (root == NULL) {
        return;
    }
    if (root->level == level ) {
        cout << root->info << " ";
    } else {
        printLowestLevelNodes(root->left, level);
        printLowestLevelNodes(root->right, level);
    }
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
       
    
    cout<<endl;
    cout<<"num of left childrens are:"<<endl;
    cout<<leftchild(root);
    cout<<endl;
     cout<<"num of right childrens are:"<<endl;
    cout<<rightchild(root);
    cout<<endl;
    int hei = heightotree(root);
    cout<<"Height of tree is:"<<hei;
    cout<<endl;
    cout<<"Nodes at its lowest level are:"<<endl; 
    printLowestLevelNodes(root,hei);

    

   

    return 0;
}
