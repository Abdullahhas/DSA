#include<iostream>
using namespace std;
# define Max_ver 4

//By List
// struct node
// {
//     int vertex;
//     node *next;
// };

// struct graph
// {
//     int noofvert;
//     node *adjmat[100];
// };

// node *newnode = NULL;
// graph *g = NULL;

// node *createnode(int vertex)
// {
//     newnode = new node;
//     newnode->vertex = vertex;
//     newnode->next = NULL;
//     return newnode;
// }

// graph *creategraph(int noofv)
// {
//     g = new graph;
//     g->noofvert = noofv;
//     for (int i = 0; i < noofv; i++)
//     {
//         g->adjmat[i] = NULL;
//     }
//     return g;
// }

// void addedge(graph *g, int src , int dest)
// {
//     newnode = createnode(dest);
//     newnode->next = g->adjmat[src];
//     g->adjmat[src] = newnode;


//     newnode = createnode(src);
//     newnode->next = g->adjmat[dest];
//     g->adjmat[dest] = newnode;

// }

// void print()
// {
//     for (int i = 0; i < g->noofvert; i++)
//     {
//         node *tem = g->adjmat[i];
//         cout<<i<<" ";
//         while (tem)
//         {
//             cout<<"->"<<tem->vertex;
//             tem = tem->next;
//         }
//         cout<<endl;
            
//         }
        
//     }
    



struct graph
{
    int numver;
    int matrix[Max_ver][Max_ver];
};

graph *g = NULL;

graph *creategraph(int vert)
{
     g = new graph;
    g->numver = vert;

    for (int i = 0; i < vert; i++)
    {
        for (int j = 0;  j< vert; j++)
        {
            g->matrix[i][j] = 0;
        }
        
    }

    return g;
    
} 

void addedge(graph *g,  int src , int dest)
{
    g->matrix[src][dest] = 1;

     // undirected
    g->matrix[dest][src] = 1;
}


void print()
{
    for (int i = 0; i < g->numver; i++)
    {
        for (int j = 0; j < g->numver; j++)
        {
            cout<<g->matrix[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}


int main()
{
    int noofver = 4;
    g = creategraph(noofver);
    addedge(g , 0 , 1);
    addedge(g , 0 , 2);
    addedge(g , 0 , 3);
    addedge(g , 1 , 2);
    
    print();
    free(g);

}