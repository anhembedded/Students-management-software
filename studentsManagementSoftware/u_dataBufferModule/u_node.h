//
// Created by pcx on 8/14/2022.
//

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_NODE_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_NODE_H
#include "studentsManagementSoftware/u_dataStruct.h"


//typedef node_dataType_T node_dataType_T ;

typedef student_T node_dataType_T ;

typedef struct studentNode
{
    node_dataType_T data;
    struct studentNode *next;
}node_T;





node_T * node_createNode();
node_T * node_createNodeData(node_dataType_T newData);
void node_deleteNode(node_T * node);
node_T *  node_addNodeAsHeadData(node_T *priNode, node_dataType_T newData);
node_T *  node_addNodeAsHead(node_T *priNode);
node_T * node_addNodeAsTailData(node_T *priNode, node_dataType_T newData);
node_T* node_addNodeAsTail(node_T* priNode);
node_T* node_insertBetween(node_T* prevNode, node_T* affterNode);







#endif //STUDENTS_MANAGEMENT_SOFTWARE_U_NODE_H
