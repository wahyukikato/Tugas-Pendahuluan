#include <iostream>
#include "graph.h"

using namespace std;

int main()
{
    Graph G;
    createList_1301213199(G);
    addNode_1301213199(G, newNode_1301213199('A'));
    addNode_1301213199(G, newNode_1301213199('B'));
    addNode_1301213199(G, newNode_1301213199('C'));
    addNode_1301213199(G, newNode_1301213199('D'));
    addEdge_1301213199(G, 'A', 'C');
    addEdge_1301213199(G, 'A', 'D');
    addEdge_1301213199(G, 'A', 'B');
    addEdge_1301213199(G, 'B', 'A');
    addEdge_1301213199(G, 'B', 'D');
    addEdge_1301213199(G, 'C', 'A');
    addEdge_1301213199(G, 'D', 'B');
    addEdge_1301213199(G, 'D', 'A');
    printGraph_1301213199(G);
    return 0;
}
