#include<iostream>
using namespace std;

struct tree {
    int info;
    tree *left;
    tree *right;
};

tree *root = NULL;

tree *createnode(int x) {
    tree *newnode = new tree;
    newnode->info = x;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

tree *insert(tree *root, int x) {
    if (root == NULL) {
        root = createnode(x);
    } else if (x > root->info) {
        root->right = insert(root->right, x);
    } else if (x < root->info) {
        root->left = insert(root->left, x);
    }
    return root;
}

void findmax(tree *root) {
    if (root->right != NULL) {
        findmax(root->right);
    } else {
        cout << root->info << " ";
    }
}

void inorder(tree *root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->info << " ";
        inorder(root->right);
    }
}

void findLeafNodes(tree *root) {
    if (root == NULL) {
        return;
    }
    if (root->left == NULL && root->right == NULL) {
        cout << root->info << " ";
    }
    findLeafNodes(root->left);
    findLeafNodes(root->right);
}

int main() {
    root = insert(root, 50);
    insert(root, 10);
    insert(root, 30);
    insert(root, 20);
    insert(root, 23);
    insert(root, 80);
    insert(root, 70);
    insert(root, 65);

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    cout << "Maximum value: ";
    findmax(root);
    cout << endl;

    cout << "Leaf nodes: ";
    findLeafNodes(root);
    cout << endl;

    return 0;
}



// #include<iostream>
// using namespace std;
// struct node
// {
//     int info;
//     node *next;
// };

// node *head = NULL;
// node *p = head;

// void insert(int x)
// {
//     node *q = head;
//     if(head == NULL)
//     {
//         p = new node;
//         p->info = x;
//         p->next = NULL;
//         head = p;
//     }

//      else{
//         while (q->next!=NULL)
//         {
//             q  = q->next;
//         }
//         p  = new node;
//      p->info = x;
//      p->next = NULL;
//      q->next = p;
//      }
     
   

// }





// void sort()
// {
//     node *p = head;
//     node *q = head;
//     int tem;
//     while(p!=NULL)
//     {
//         q = p->next;
//         while (q    !=NULL)
//         {
//             if(p->info>q->info)
//             {
//                 tem = p->info;
//                 p->info = q->info;
//                 q->info = tem;
//             }
//             q = q->next;
//         }
//         p = p->next;
        
//     }  
// }

// void print()
// {
//     node *q  =head;
//     while (q!=NULL)
//     {
//         cout<<q->info<<" ";
//         q = q->next;
//     }
    
// }

// void product()
// {
//     node *p = head;
//     int pro = 1;
//     while (p != NULL)
//     {
//         pro*=p->info;
//         p=p->next;
        
//     }
//     cout<<"Pro is:"<<pro;
    
// }

// int main()
// {
//     insert(6);
//     insert(2);
//     insert(3);
//     print();
//     cout<<endl;
//     product();
//     cout<<endl;
//     sort();
//     print();
// }