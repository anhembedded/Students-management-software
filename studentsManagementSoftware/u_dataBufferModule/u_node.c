//
// Created by pcx on 8/14/2022.
//

#include "u_node.h"
#include "stdio.h"
#include "stdlib.h"





void list_traverse(dataBuffer_heapNode_T *headNode) {
    dataBuffer_heapNode_T *temp = headNode;
    printf("\n\nList elements are - \n");
    while(temp != NULL) {
        printf("%d --->",temp->data.ID);
        temp = temp->next;
    }
}
studentNode_T *node_createNodeData(student_T newData) {
    studentNode_T *temp = malloc(sizeof(student_T));; // tạo mới một node
    temp->next = NULL; // node này chưa trỏ đến phần tử khác nên "next" nhận giá trị NULL
    temp->data = newData;  // gán giá trị cho node
    return temp;
}
studentNode_T *node_createNode( ) {
    studentNode_T *temp = malloc(sizeof(student_T));; // tạo mới một node
    temp->next = NULL; // node này chưa trỏ đến phần tử khác nên "next" nhận giá trị NULL
    return temp;
}
studentNode_T *  node_addNodeAsHead(studentNode_T *priNode) {
    studentNode_T *newNode;
    newNode = node_createNode();
    newNode->next = priNode;
    return newNode;
}
studentNode_T *  node_addNodeAsHeadData(studentNode_T *priNode, student_T newData) {
    studentNode_T *newNode;
    newNode = node_createNodeData(newData);
    newNode->next = priNode;
    newNode->data = newData;
    return newNode;
}

studentNode_T *node_addNodeAsTail(studentNode_T *priNode, student_T newData) {
    studentNode_T *newNode;
    newNode = node_createNode(newData);
    priNode->next = newNode;
    return newNode;

}

void node_deleteNode(studentNode_T *node) {
    free(node);
}




