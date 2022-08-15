//
// Created by pcx on 8/14/2022.
//

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_NODE_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_NODE_H
#include "studentsManagementSoftware/u_dataStruct.h"

typedef struct studentNode
{
    student_T data;
    struct studentNode *next;
}studentNode_T;



typedef struct dataBuffer_HeapNode
{
    student_T data;
    struct dataBuffer_HeapNode *next;
}dataBuffer_heapNode_T;



studentNode_T * node_createNode();
studentNode_T * node_createNodeData(student_T newData);
void node_deleteNode(studentNode_T * node);
studentNode_T *  node_addNodeAsHeadData(studentNode_T *priNode, student_T newData);
studentNode_T *  node_addNodeAsHead(studentNode_T *priNode);
studentNode_T * node_addNodeAsTail(studentNode_T *priNode, student_T newData);


void list_traverse(dataBuffer_heapNode_T *headNode);






#endif //STUDENTS_MANAGEMENT_SOFTWARE_U_NODE_H
