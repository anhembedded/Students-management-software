/**
  ******************************************************************************
  * @file    u_list.c
  * @author  TranHoangAnh
  * @brief
  *
  ==============================================================================
                        ##### LIST MODULE #####
  ==============================================================================
  */


#include "u_list.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
void list_init(list_T *listPtr)
{
    listPtr->beginElement = malloc(sizeof(listPtr->beginElement));
    if (listPtr->beginElement == NULL)
    {
        printf("Erro NuLL");
    }
    else
    {
        listPtr->beginElement->next = NULL;
    }
}
/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
void list_initList(list_T *listPtr, int32_t numberOfElements)
{

    list_iteratorType_T iter;
    node_dataType_T temp = node_dataTypeInitData;
    if (numberOfElements == 0)
    {
        listPtr->beginElement = NULL;
        listPtr->beginElement = node_createNode(); // Frist Node = -1;
        return;
    }
    else
    {
        listPtr->beginElement = node_createNode(); // Frist Node = -1;
        iter = listPtr->beginElement;
    }
    for (uint32_t i = 0; i < numberOfElements; i++)
    {
        iter = node_addNodeAsTail(iter);
    }
}
/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
_Bool list_empty(list_T *list_Ptr)
{
    if (list_Ptr->beginElement == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
uint32_t list_size(list_T *list_Ptr)
{
    uint32_t sizeRes = 0;
    list_iteratorType_T iter;
    if (list_empty(list_Ptr) == 1)
    {
        sizeRes = 0;
    }
    else
    {
        iter = list_Ptr->beginElement;

        if (iter != NULL)
        {
            while (iter != NULL)
            {
                sizeRes++;
                iter = iter->next;
            }
        }
        else
        {
            printf("Erro NuLL");
        }
    }

    return sizeRes - 1;
}
/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
void list_clearAllNode(list_T *list_Ptr)
{
    uint32_t sizeOfList = list_size(list_Ptr);
    if (sizeOfList == 0)
    {
        return;
    }
    else
    {
        for (uint32_t i = 0; i < sizeOfList; i++)
        {
            list_detele(list_Ptr, 0);
        }
    }
}
/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
static list_elementType_T *list_front(list_T *list_Ptr)
{
    if (list_Ptr == NULL)
    {
        printf("Erro NuLL");
    }
    else
    {
        return list_Ptr->beginElement;
    }
}
/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
static list_elementType_T *list_back(list_T *list_Ptr)
{
    list_iteratorType_T iter = list_Ptr->beginElement;
    if (list_empty(list_Ptr) == 1)
    {
        printf("numberOfElements not O \n");
    }
    else
    {

        if (iter == NULL)
        {
        }
        else
        {
            while (iter->next != NULL)
            {
                iter = iter->next;
            }
        }
    }
    return iter;
}
/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
static void list_insertFront(list_T *list_Ptr)
{
    list_iteratorType_T iter_temp = NULL;
    if (list_empty(list_Ptr))
    {
        printf("numberOfElements not O \n");
    }
    else
    {
        iter_temp = list_goToPos(list_Ptr, 0);
        node_insertBetween(list_Ptr->beginElement, iter_temp);
    }
}
/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
static void list_insertBack(list_T *list_Ptr)
{
    list_iteratorType_T iter_temp = NULL;
    if (list_empty(list_Ptr))
    {
        printf("numberOfElements not O \n");
    }
    else
    {
        iter_temp = list_back(list_Ptr);
        node_addNodeAsTail(iter_temp);
    }
}
/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
static void list_insertFrontData(list_T *list_Ptr, list_dataType_T newData)
{

    list_insertFront(list_Ptr);
    if (list_goToPos(list_Ptr, 0) == NULL)
    {
        printf("Erro NuLL");
    }
    else
    {
        list_goToPos(list_Ptr, 0)->data = newData;
    }
}
/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
static void list_insertBackData(list_T *list_Ptr, list_dataType_T newData)
{
    list_insertBack(list_Ptr);
    if (list_back(list_Ptr) == NULL)
    {
        printf("Erro NuLL");
    }
    else
    {
        list_back(list_Ptr)->data = newData;
    }
}
/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
void list_insert(list_T *list_Ptr, int32_t positionOfElement)
{
    uint32_t sizeOfList;
    list_iteratorType_T affterIter;
    list_iteratorType_T prevIter;
    sizeOfList = list_size(list_Ptr);
    if (list_empty(list_Ptr))
    {
        printf("numberOfElements not O \n");
    }
    else
    {
        if (positionOfElement == 0)
        {
            list_insertFront(list_Ptr);
        }
        else if (positionOfElement == (sizeOfList - 1))
        {
            list_insertBack(list_Ptr);
        }
        else
        {
            prevIter = list_goToPos(list_Ptr, positionOfElement - 1);
            affterIter = list_goToPos(list_Ptr, positionOfElement);
            node_insertBetween(prevIter, affterIter);
        }
    }
}

void list_insertData(list_T *list_Ptr, list_dataType_T data, int32_t positionOfElement)
{
    list_insert(list_Ptr, positionOfElement);

    if (list_goToPos(list_Ptr, positionOfElement) == NULL)
    {
        printf("Erro NuLL");
    }
    else
    {
        list_goToPos(list_Ptr, positionOfElement)->data = data;
    }
}
/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
void list_detele(list_T *list_Ptr, int32_t positionOfElement)
{

    // todo: implement this
    list_iteratorType_T iterDetele;
    list_iteratorType_T ITER;
    uint32_t sizeOfList = list_size(list_Ptr);
    if (list_empty(list_Ptr))
    {
        // doto, Handle this excption
        return;
    }
    else if (positionOfElement == sizeOfList - 1)
    {
        iterDetele = list_goToPos(list_Ptr, positionOfElement);
        ITER = list_goToPos(list_Ptr, positionOfElement - 1);
        ITER->next = NULL;

        node_deleteNode(iterDetele);
    }
    else
    {
        iterDetele = list_goToPos(list_Ptr, positionOfElement);
        ITER = list_goToPos(list_Ptr, positionOfElement - 1);
        ITER->next = list_goToPos(list_Ptr, positionOfElement + 1);
       
        node_deleteNode(iterDetele);
    }
}
/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
list_dataType_T list_popBack(list_T *list_Ptr)
{
    list_dataType_T temp;
    uint32_t sizeOfList = list_size(list_Ptr);
    temp = list_access(list_Ptr, sizeOfList - 1);
    list_detele(list_Ptr, sizeOfList - 1);
    return temp;
}
/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
list_dataType_T list_access(list_T *list_Ptr, int32_t positionOfElement)
{
    if (list_goToPos(list_Ptr, positionOfElement) == NULL)
    {
        printf("Erro NuLL");
    }
    else
    {
        return list_goToPos(list_Ptr, positionOfElement)->data;
    }
}
/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
list_elementType_T *list_goToPos(list_T *list_Ptr, int32_t positionOfElement)
{
    list_iteratorType_T iter = list_Ptr->beginElement;
    if (list_empty(list_Ptr) == 1)
    {
        printf("numberOfElements not O \n");
    }
    else
    {
        for (int64_t i = -1; i < positionOfElement; i++)
        {
            iter = iter->next;
        }
    }
    return iter;
}
/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
static list_iteratorType_T list_goToLastElement(list_T *list_Ptr)
{
    uint32_t listSize = 0;
    list_iteratorType_T iter = NULL;
    if (list_empty(list_Ptr))
    {
        list_iteratorType_T iter = NULL;
        // todo;
    }
    else
    {
        listSize = list_size(list_Ptr);
        iter = list_goToPos(list_Ptr, listSize);
    }
    return iter;
}
/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
void list_pushFront(list_T *list_Ptr, list_dataType_T data)
{
    list_Ptr->beginElement = node_addNodeAsHeadData(list_Ptr->beginElement, data);
}
/**
  * @brief
  * @param
  * @retval ThisReturn:
  */
void list_pushBack(list_T *list_Ptr, list_dataType_T data)
{
    if (list_Ptr->beginElement == NULL)
    {
        list_Ptr->beginElement = malloc(sizeof(list_elementType_T));
    }
    list_iteratorType_T iter_temp = NULL;
    iter_temp = list_back(list_Ptr);
    node_addNodeAsTailData(iter_temp, data);
}
/**
* @brief
* @param
* @retval ThisReturn:
*/
list_dataType_T list_popFront(list_T *list_Ptr)
{

    list_dataType_T temp = list_goToPos(list_Ptr, 0)->data;
    list_detele(list_Ptr, 0);
    return temp;
}
/**
* @brief
* @param
* @retval ThisReturn:
*/
void list_swap(list_T *list_Ptr, int32_t posA, int32_t posB)
{
    list_dataType_T temp;

    temp = list_goToPos(list_Ptr, posA)->data;

    list_goToPos(list_Ptr, posA)->data = list_goToPos(list_Ptr, posB)->data;
    list_goToPos(list_Ptr, posB)->data = temp;
}
