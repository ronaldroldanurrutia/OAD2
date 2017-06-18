#include<iostream>

using namespace std;

struct nodo{
    int elemento;
    nodo *right;
    nodo *left;
};

nodo *insercion(nodo *node,int n){
    if(node == NULL){
        nodo *node1 = new nodo;
        node1->elemento=n;
        node1->right=NULL;
        node1->left=NULL;
        return node1;
    }
    if(node->elemento>n){
        node->left=insercion(node->left,n);
    }
    else{
        node->right=insercion(node->right,n);
    }
    return node;
}

nodo *eliminar(nodo *node,int n){
    nodo *puntero;
    nodo *head;
    head=node;
    puntero = node;
    while(puntero!=NULL){
        if(n<puntero->elemento){
            puntero=puntero->left;
        }
        else{
            if(n>puntero->elemento){
                puntero=puntero->right;
            }
            else{
                if(head->right==NULL){

                }
                puntero->elemento=head->elemento;
                head->elemento=n;
            }
        }
    }
    if(verdad){
        puntero
    }
}

int altura(nodo *elemento){
    if(elemento==NULL){
        return 0;
    }
    int m;
    int n;
    m=altura(elemento->right);
    n=altura(elemento->left);
    if(m > n){
        return m+1;
    }
    else{
        return n+1;
    }
}

void poner(nodo *node){
    if(node==NULL){
        return ;
    }
    cout << node->elemento << endl;
    poner(node->left);
    poner(node->right);
    return ;
}

int main(){
    nodo *elemento1 = new nodo;
    elemento1=NULL;
    elemento1=insercion(elemento1,3);
    elemento1=insercion(elemento1,5);
    elemento1=insercion(elemento1,2);
    elemento1=insercion(elemento1,7);
    elemento1=insercion(elemento1,6);
    elemento1=insercion(elemento1,4);
    elemento1=insercion(elemento1,5);
    poner(elemento1);
    cout << altura(elemento1) << endl;
    return 0;
}
