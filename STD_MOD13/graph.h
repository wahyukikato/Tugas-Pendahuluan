#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include <iostream>

using namespace std;

typedef char infotype;
typedef struct Node *adrNode;

struct Node{
    infotype info;
    adrNode child;
    adrNode next;
};

struct Graph{
    adrNode first;
};

void createList_1301213199(Graph &G);
adrNode newNode_1301213199(char x);
void addNode_1301213199(Graph &G, adrNode p);
adrNode findNode_1301213199(Graph G, char x);
void addEdge_1301213199(Graph &G, char x, char y);
bool isConnected_1301213199(Graph G, char x, char y);
void printGraph_1301213199(Graph G);
#endif // GRAPH_H_INCLUDED
