// #include<iostream>
// using namespace std;

// struct node
// {
//     int vertex;
//     node *next;
// };

// struct G
// {
//     int numVer;
//     node *adjList[100];
// };

// G *g = NULL;
// node *newnode = NULL;

// node *createnode(int v)
// {
//     newnode = new node;
//     newnode->vertex = v;
//     newnode->next = NULL;
//     return newnode;
// }


// G *createg(int vert)
// {
//     g = new G;
//     g->numVer = vert;
//     for (int i = 0; i < vert; i++)
//     {
//         g->adjList[i] = NULL;
//     }

//     return g;

    
    
// }

// void addedge(G *g , int src , int dest)
// {
//     newnode = createnode(dest);
//     newnode->next = g->adjList[src];
//     g->adjList[src] = newnode;

   

//     newnode = createnode(src);
//     newnode->next = g->adjList[dest];
//     g->adjList[dest] = newnode;

// }


// void printG() {
// 	int v;
//     for ( v = 0; v < g->numVer; v++) {
//          node* temp = g->adjList[v];
//         printf("\n Vertex %d\n: ", v);
//         while (temp) {
//             cout<<"->"<<temp->vertex;
//             temp = temp->next;
//         }
//         cout<<endl;
//     }
// }


// int main() {
//     int numVertices = 4;
//     g = createg(numVertices);
//     addedge(g, 0, 1);
//     addedge(g, 0, 2);
//     addedge(g, 0, 3);
//     addedge(g, 1, 2);

//     printG();
//     // Free allocated memory
//     int i;
//     for ( i = 0; i < numVertices; i++) {
//          node* temp = g->adjList[i];
//         while (temp) {
//             node* next = temp->next;
//             free(temp);
//             temp = next;
//         }
//     }
//     free(g);

// return 0;
// }


#include<iostream>
using namespace std;

struct node
{
    int vertex;
    node *next;
};

struct graph
{
    int noofvert;
    node *adjmat[100];
};

node *newnode = NULL;
graph *g = NULL;

node *createnode(int vertex)
{
    newnode = new node;
    newnode->vertex = vertex;
    newnode->next = NULL;
    return newnode;
}

graph *creategrapg(int noofv)
{
    g = new graph;
    g->noofvert = noofv;
    for (int i = 0; i < noofv; i++)
    {
        g->adjmat[i] = NULL;
    }
    return g;
}

void addedge(graph *g, int src , int dest)
{
    newnode = createnode(dest);
    newnode->next = g->adjmat[src];
    g->adjmat[src] = newnode;


    newnode = createnode(src);
    newnode->next = g->adjmat[dest];
    g->adjmat[dest] = newnode;

}

void print()
{
    for (int i = 0; i < g->noofvert; i++)
    {
        node *tem = g->adjmat[i];
        cout<<i<<" ";
        while (tem)
        {
            cout<<"->"<<tem->vertex;
            tem = tem->next;
        }
        cout<<endl;
            
        }
        
    }
    
int main() {
    int numVertices = 4;
    g = creategrapg(numVertices);
    addedge(g, 0, 1);
    addedge(g, 0, 2);
    addedge(g, 0, 3);
    addedge(g, 1, 2);

    print();
    // Free allocated memory
    // int i;
    // for ( i = 0; i < numVertices; i++) {
    //      node* temp = g->adjmat[i];
    //     while (temp) {
    //         node* next = temp->next;
    //         free(temp);
    //         temp = next;
    //     }
    // }
    // free(g);

return 0;
}