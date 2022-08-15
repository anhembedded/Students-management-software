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
             listPtr->beginElement = node_createNode();
        }
        for(uint32_t i = 0; i < numberOfElements; i++)
        {
            listPtr->beginElement = node_addNodeAsHead( listPtr->beginElement);
        }
}

_Bool empty(list_T *list_Ptr) {
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
    if(empty(list_Ptr) == 1)
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
    if(empty(list_Ptr) == 1)
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

LIST_DATA_TYPE_T list_access(list_T *list_Ptr, uint32_t positionOfElement) {
    
}
