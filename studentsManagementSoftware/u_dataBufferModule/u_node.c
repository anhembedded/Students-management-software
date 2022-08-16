//
// Created by pcx on 8/14/2022.
//

#include "u_node.h"
#include "stdio.h"
#include "stdlib.h"





node_T *node_createNodeData(node_dataType_T newData) {
    node_T *temp = malloc(sizeof(node_T));; // tạo mới một node
    temp->data = newData;  // gán giá trị cho node
    temp->next = NULL;
    return temp;
}
node_T *node_createNode() {
    node_T *temp = malloc(sizeof(node_dataType_T));; // tạo mới một node
    temp->next = NULL;
    return temp;
}
node_T *  node_addNodeAsHead(node_T *priNode) {
    node_T *newNode;
    newNode = node_createNode();
    newNode->next = priNode;
    return newNode;
}
node_T *  node_addNodeAsHeadData(node_T *priNode, node_dataType_T newData) {
    node_T *newNode;
    newNode = node_createNodeData(newData);
    newNode->next = priNode;
    newNode->data = newData;
    return newNode;
}

node_T *node_addNodeAsTailData(node_T *priNode, node_dataType_T newData) {
  //  node_T *newNode;
  //  newNode = node_createNode(newData);
   // priNode->next = newNode;
   // newNode->next = NULL;
    node_T* newNode=   node_addNodeAsTail(priNode);
    newNode->data = newData;
   return newNode;



}
node_T* node_addNodeAsTail(node_T* priNode) {
    node_T* newNode;
    newNode = node_createNode();
    priNode->next = newNode;
    newNode->next = NULL;
    return newNode;

}

node_T* node_insertBetween(node_T* prevNode, node_T* affterNode)
{
    
    node_T* temp =  node_createNode();
    prevNode->next = temp;
    temp->next = affterNode;
    return temp;

}

void node_deleteNode(node_T *node) {
    free(node);
}
