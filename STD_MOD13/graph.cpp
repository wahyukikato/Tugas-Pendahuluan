#include "graph.h"

void createList_1301213199(Graph &G){
    G.first = NULL;
}

adrNode newNode_1301213199(char x){
    adrNode p = new Node;
    p->info = x;
    p->child = NULL;
    p->next = NULL;
    return p;
}

void addNode_1301213199(Graph &G, adrNode p){
    if(G.first == NULL){
        G.first = p;
    }else{
        adrNode a;
        a = G.first;
        while(a->next != NULL){
            a = a->next;
        }
        a->next = p;
    }
}

adrNode findNode_1301213199(Graph G, char x){
    if(G.first == NULL){
        return NULL;
    }else{
        adrNode a;
        a = G.first;
        while(a != NULL){
            if(a->info == x){
                return a;
            }
            a = a->next;
        }
        return NULL;
    }
}

void addEdge_1301213199(Graph &G, char x, char y){
    if(findNode_1301213199(G, x)->child == NULL){
        findNode_1301213199(G, x)->child = newNode_1301213199(y);
    }else{
        adrNode a;
        a = findNode_1301213199(G, x)->child;
        while(a->next != NULL){
            a = a->next;
        }
        a->next = newNode_1301213199(y);
    }
}



bool isConnected_1301213199(Graph G, char x, char y){
    if(findNode_1301213199(G, x) == NULL){
        cout<< "No Parents"<<endl;
        return false;
    }else{
        adrNode C;
        C = findNode_1301213199(G, x)->child;
        while(C != NULL){
            if(C->info == y){
                return true;
            }
            C = C->next;
        }
        return false;
    }
}

void printGraph_1301213199(Graph G){
    if(G.first == NULL){
        cout<< "No Data"<<endl;
    }else{
        adrNode a;
        a = G.first;
        while(a != NULL){
            cout<< " node " << a->info <<":";
            adrNode b = a->child;
            while(b != NULL){
                cout<< " - "<<b->info;
                b = b->next;
            }
            cout<<endl;
            a = a->next;
        }
    }
}
