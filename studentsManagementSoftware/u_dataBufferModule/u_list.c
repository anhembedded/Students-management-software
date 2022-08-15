//
// Created by pcx on 8/15/2022.
//

#include "u_list.h"
#include <stdio.h>

void list_initList(list_T *listPtr, uint32_t numberOfElements) {

        if(numberOfElements == 0)
        {
             printf("numberOfElements not O \n");
            listPtr->beginElement = NULL;
             return;
        } else
        {
             listPtr->beginElement = node_createNode(); //Frist Node = -1;
        }
        for(uint32_t i = 0; i < numberOfElements; i++)
        {
            listPtr->beginElement = node_addNodeAsHead( listPtr->beginElement);
        }
}

_Bool list_empty(list_T *list_Ptr) {
    if(list_Ptr->beginElement == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

uint32_t list_size(list_T *list_Ptr) {
    uint32_t sizeRes = 0;
    if(list_empty(list_Ptr) == 1)
    {
        sizeRes = 0;
    }else
    {
        list_Ptr->iterator = list_Ptr->beginElement;
        while(list_Ptr->iterator->next != NULL)
        {
            sizeRes ++;
            list_Ptr->iterator = list_Ptr->iterator->next;
        }
    }

    return sizeRes;
}

LIST_ELEMENT_TYPE_T * list_front(list_T *list_Ptr) {
    return list_Ptr->beginElement;
}

LIST_ELEMENT_TYPE_T * list_back(list_T *list_Ptr) {
    list_Ptr->iterator = list_Ptr->beginElement;
    if(list_empty(list_Ptr) == 1)
    {
        printf("numberOfElements not O \n");
    } else{
        while(list_Ptr->iterator->next != NULL)
        {
            list_Ptr->iterator = list_Ptr->iterator->next;
        }
    }
    return  list_Ptr->iterator;

}

void list_insertFront(list_T* list_Ptr)
{
    LIST_ITERATOR_TYPE_T iter_temp = NULL;
    if (list_empty(list_Ptr))
    {

    }
    else
    {
        iter_temp = list_goToPos(list_Ptr,0);
        node_insertBetween(list_Ptr->beginElement, iter_temp);

    }
}

void list_insertBack(list_T* list_Ptr)
{
    LIST_ITERATOR_TYPE_T iter_temp = NULL;
    if (list_empty(list_Ptr))
    {

    }
    else
    {
        iter_temp = list_back(list_Ptr);
        node_addNodeAsTail(iter_temp);
    }
}


LIST_DATA_TYPE_T list_access(list_T *list_Ptr, uint32_t positionOfElement) 
{
   
   return list_goToPos(list_Ptr, positionOfElement)->data;

}

LIST_ELEMENT_TYPE_T* list_goToPos(list_T* list_Ptr, uint32_t positionOfElement)
{
    list_Ptr->iterator = list_Ptr->beginElement;
    if (list_empty(list_Ptr) == 1)
    {
        printf("numberOfElements not O \n");
    }
    else {
        for (int64_t i = -1; i < positionOfElement; i++)
        {
            list_Ptr->iterator = list_Ptr->iterator->next;
        }
    }
    return list_Ptr->iterator;
}

LIST_ITERATOR_TYPE_T list_goToLastElement(list_T* list_Ptr)
{
    uint32_t listSize = 0;
    LIST_ITERATOR_TYPE_T iter = NULL;
    if (list_empty(list_Ptr))
    {
        LIST_ITERATOR_TYPE_T iter = NULL;
        //todo;
    }
    else
    {
        listSize = list_size(list_Ptr);
        iter =  list_goToPos(list_Ptr, listSize);
    }
    return iter;
}

void list_pushFront(list_T* list_Ptr, LIST_DATA_TYPE_T data)
{
    list_Ptr->beginElement = node_addNodeAsHeadData(list_Ptr->beginElement, data);
}

void list_pushBack(list_T* list_Ptr, LIST_DATA_TYPE_T data)
{
    
    list_Ptr->iterator =  list_back(list_Ptr);
    node_addNodeAsTail(list_Ptr->iterator);

}