/**
  ******************************************************************************
  * @file    u_node.c
  * @author  TranHoangAnh
  * @brief
  *
  ==============================================================================
                        ##### NODE MODULE #####
  ==============================================================================
  */

#include "u_node.h"
#include "stdio.h"
#include "stdlib.h"

const  node_dataType_T node_dataTypeInitData = {
 .fullName = "fullName init",
 .birthYear = 0000U,
 .homeTown = "homeTown init",
 .department = "department init",
 .majors = "majors init",
 .entryScores = 0000U,
 .cumulativeScore = 0000U
};

/**
  * @brief
  * @param
  * @retval ThisReturn: 
  */
node_T *node_createNodeData(node_dataType_T newData)
{
    node_T *temp = (node_T *)malloc(sizeof(node_T)); // node_dataType_T
    if (temp != NULL)
    {
        temp->data = newData;
        temp->next = NULL;
    }
    else
    {
        printf("Erro NuLL");
    }

    return temp;
}

/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
node_T *node_createNode()
{
    node_T *temp = (node_T *)malloc(sizeof(node_T));
    if (temp != NULL)
    {
        temp->next = NULL;
    }
    else
    {
        printf("Erro NuLL");
    }

    return temp;
}

/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
node_T *node_addNodeAsHead(node_T *priNode)
{
    node_T *newNode;
    newNode = node_createNode();
    newNode->next = priNode;
    return newNode;
}

/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
node_T *node_addNodeAsHeadData(node_T *priNode, node_dataType_T newData)
{
    node_T *newNode;
    newNode = node_createNodeData(newData);
    newNode->next = priNode;
    newNode->data = newData;
    return newNode;
}

/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
node_T *node_addNodeAsTailData(node_T *priNode, node_dataType_T newData)
{

    node_T *newNode = node_addNodeAsTail(priNode);
    newNode->data = newData;
    return newNode;
}

/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
node_T *node_addNodeAsTail(node_T *priNode)
{
    node_T *newNode;
    newNode = node_createNode();
    priNode->next = newNode;
    newNode->next = NULL;
    return newNode;
}

/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
node_T *node_insertBetween(node_T *prevNode, node_T *affterNode)
{
    node_T *temp = node_createNode();
    prevNode->next = temp;
    temp->next = affterNode;
    return temp;
}

/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
void node_deleteNode(node_T *node)
{
    free(node);
}
