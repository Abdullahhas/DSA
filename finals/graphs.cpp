#include<iostream>
using namespace std;

#define Max_ver 100
struct graph
{
    int numver;
    int matrix[Max_ver][Max_ver];
};

graph *g = NULL;

graph *creategrap(int vert)
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

    //for undirected
   //  g->matrix[dest][src] = 1;
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
    g = creategrap(noofver);
    addedge(g , 0 , 1);
    addedge(g , 0 , 2);
    addedge(g , 0 , 3);
    addedge(g , 1 , 2);
    print();
    free(g);

}


// #include<iostream>
// using namespace std;
// #define ver 4
// struct graphs
// {
//     int noofver;
//     int matrix[ver][ver];
// };

// graphs *g = NULL;

// graphs *creategraph(int vert)
// {
//     g = new graphs;
//     g->noofver = vert;

//     for (int i = 0; i < vert; i++)
//     {
//         for (int j = 0; j < vert; j++)
//         {
//             g->matrix[i][j] = 0;
//         }
        
//     }

//     return g;
    
    
// }


// void addedge(graphs *g , int src , int dst)
// {
//    g->matrix[src][dst]  = 1;

// }

// void print()
// {
//     for (int i = 0; i < g->noofver; i++)
//     {
//         for (int j = 0; j < g->noofver; j++)
//         {
//             cout<<g->matrix[i][j]<<" ";
//         }
//         cout<<endl;
        
//     }
    
// }


// int main()
// {
//     g = creategraph(4);
//     addedge(g , 0 , 1);
//     addedge(g , 0 , 2);
//     addedge(g , 0 , 3);
//     addedge(g , 1 , 2);
//     print();
//     delete g;
//     return 0;

// }
