tree *temp = FindMin(root->right);
            root->info = temp->info;
            root->right = deleteinTree(root->right , temp->info)