// #include<iostream>
// using namespace std;
// struct tree
// {
//     int info;
//     tree *left;
//     tree *right;
//     int level;
// };

// tree *root = NULL;

// tree *createnode(int x , int level)
// {
//     tree *node = new tree;
//     node->info = x;
//     node->left = NULL;
//     node->right = NULL;
//     node->level = level;
//         return node;
// }

// tree *insert(tree *root , int x , int level = 0)
// {
//     if(root == NULL)
//     {
//         root = createnode(x , level);
//     }
//     else if(x>root->info)
//     {
//         root->right = insert(root->right , x , level+1);
//     }
//     else if(x<root->info)
//     {
//         root->left = insert(root->left , x , level+1);
//     }
//     return root;
// }

// void preorder(tree *root)
// {
//     if(root!=NULL)
//     {
//     cout<<root->info<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// }

// void postorder(tree *root)
// {
//     if(root!=NULL)
// {
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->info<<" ";
// }
// }
// void inorder(tree *root)
// {
//     if(root!=NULL)
//     {
//     inorder(root->left);
//     cout<<root->info<<" ";
//     inorder(root->right);
// }
// }

// tree *findmin(tree *node)
// {
//     while (node->left!=NULL)
//     {
//         node = node->left;

//     }
//     return node;
    
// }

// tree *deletetree(tree *root , int x)
// {
//     if(root==NULL)
//     {
//         return root;
//     }
//     else if(x>root->info)
//     {
//         root->right = deletetree(root->right , x);
//     }
//     else if(x<root->info)
//     {
//         root->left = deletetree(root->left ,x);
//     }
//     else{
//         if(root->left == NULL && root->right == NULL)
//         {
//             delete root;
//             root = NULL;
//             return root;
//         }
//         else if(root->right == NULL)
//         {
//             tree *tem = root;
//             root = root->left;
//             delete tem;
//             return root;
//         }
//         else if(root->left == NULL)
//         {
//             tree *tem = root;
//             root = root->right;
//             delete tem;
//             return root;
//         }
//         else{
//             tree *tem = findmin(root->right);
//             root->info = tem->info;
//             root->right = deletetree(root->right , tem->info);
//         }
//     }
// }


// int heitree(tree *root)
// {
//     if(root == NULL)
//     {
//         return -1;
//     }
//     int le = heitree(root->left);
//     int ri = heitree(root->right);
//     if(le>ri)
//     {
//         return 1+le;
//     }
//     else 
//     {
//         return 1+ri;
//     }
// }

// void lowlevel(tree *root , int level)
// {
//     if(root == NULL)
//     {
//         return;
//     }
   
//     else if(root->level = level)
//     {
//         cout<<root->info<<" ";
//     }
//     lowlevel(root->left , level);
//     lowlevel(root->right , level);

// }

// int leftchild(tree *root)
// {
//     int countl = 0; 
//     if (root == NULL || (root->left == NULL && root->right == NULL)) {
//         return 0;
//     }

//     if(root->left!=NULL)
//     {
//         countl++;
//     }
//     countl+=leftchild(root->left) + leftchild(root->right);
//     return countl;
// }

// int rightchild(tree *root)
// {
//     int countR = 0; 
//     if (root == NULL || (root->left == NULL && root->right == NULL)) {
//         return 0;
//     }

//     if(root->right!=NULL)
//     {
//         countR++;
//     }
//     countR+=rightchild(root->left) + rightchild(root->right);
//     return countR;
// }





// int main()
// {
//  root = insert(root, 50);
//     insert(root,10);
//     insert(root,30);
//     insert(root,20);
//     insert(root,23);
//     insert(root,80);
//     insert(root,70);
//     insert(root,65);

//     deletetree(root , 10);
//     cout << "Elements in the tree (in-order traversal): ";
//     inorder(root);
//     cout << endl;

    

//     cout << "Elements in the tree (post-order traversal): ";
//     postorder(root);
//     cout << endl;

//     cout << "Elements in the tree (pre-order traversal): ";
//     preorder(root);
//     cout << endl;

//     int hei = heitree(root);
//     cout<<"HEight is:"<<hei<<" ";
//     cout<<endl;

//     lowlevel(root , hei);
//     cout<<endl; 
//     cout<<rightchild(root)<<endl;
//     cout<<leftchild(root)<<endl;
// }


#include<iostream>
using namespace std;

struct tree
{
    int info;
    tree *right;
    tree *left;
};

tree *root = NULL;

tree *createnode(int x)
{
    tree *newnode = new tree;
    newnode->info = x;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}


tree *insert(tree *root , int x)
{
    if(root == NULL)
    {
        root = createnode(x);

    }
    else if(x>root->info)
    {
        root->right = insert(root->right , x);
    }
    else if(x<root->info)
    {
        root->left = insert(root->left , x);
    }
    return root;
}

void preorder(tree *root)
{
    if(root != NULL)
    {
        cout<<root->info<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    
}

void inorder(tree *root)
{
    if(root!=NULL)
    {
    inorder(root->left);
    cout<<root->info<<" ";
    inorder(root->right);
    }
}

void postorder(tree *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->info<<" ";
    }
}

tree *findmin(tree *root)
{
    if(root->left!=NULL)
    {
        root = root->left;
    }
    return root;
}

tree *deletetree(tree *root ,int x )
{
    if(root == NULL)
    {
        
        return root;
    }
    else if(x>root->info)
    {
        root->right = deletetree(root->right,x);
    }
    else if(x<root->info)
    {
        root->left = deletetree(root->left,x);
    }
    else{
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
            return root;
        }
        else if(root->right == NULL)
        {
            tree *tem = root;
            root = root->left;
            delete tem;
            return root;
        }
        else if(root->left == NULL)
        {
            tree *tem = root;
            root= root->right;
            delete tem;
            return root;
        }
        else{
            tree *tem =  findmin(root->right);
            root->info = tem->info;
            root->right = deletetree(root->right , tem->info);
        }
    }

}

int leftchild(tree *root)
{
    int countl = 0;

     if (root == NULL || (root->left == NULL && root->right == NULL)) {
        return 0;
    }
    if(root->left != NULL)
    {
        countl++;
    }

     countl+=leftchild(root->left)+leftchild(root->right);
    return countl;
}

int rightchild(tree *root)
{
    int countr = 0;

     if (root == NULL || (root->left == NULL && root->right == NULL)) {
        return 0;
    }
    if(root->right != NULL)
    {
        countr++;
    }

     countr+=rightchild(root->left)+rightchild(root->right);
    return countr;
}


int heigt(tree *root)
{
     if(root == NULL)
    {
        return -1;
    }
    int lef = heigt(root->left);
    int rig = heigt(root->right);
    if(lef>rig)
    {
        return 1+lef;
    }
    else{
        return 1+rig;
    }
}

void leafnodes(tree *root)
{
    if(root == NULL)
    {
        return;
    }
    else if(root->left == NULL && root->right == NULL)
    {
        cout<<root->info<<" ";
    }
    
        leafnodes(root->left);
        leafnodes(root->right);
    
}

int countnodes(tree *root)
{
    
    if(root == NULL)
    {
        return 0;
    }
    else 
    {
        return 1+countnodes(root->left)+countnodes(root->right);
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
    //deletetree(root , 10);

    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;


    cout<<"Left children are:"<<leftchild(root);
    cout<<endl;
    cout<<"Right child are:"<<rightchild(root);
    cout<<endl;

    int he = heigt(root);
    cout<<"HEight is:"<<he;
    cout<<endl;


    leafnodes(root);

    cout<<"Total nodes are:"<<countnodes(root);
}
