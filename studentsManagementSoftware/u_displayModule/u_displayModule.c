//
// Created by pcx on 8/13/2022.
//

#include "u_displayModule.h"
#include "stdio.h"

void printAllBuffer_cumulativeScore(list_T *buffer)
{
    LIST_ITERATOR_TYPE_T iter;
    iter = buffer->beginElement->next; // index 0;
    while (iter != NULL)
    {
        printf("%d \n", iter->data.cumulativeScore);
        iter = iter->next;
    }
}

void printAllBuffer_fullName(list_T *buffer)
{

    LIST_ITERATOR_TYPE_T iter;
    iter = buffer->beginElement->next; // index 0;

    while (iter != NULL)
    {
        printf("%s \n", iter->data.fullName);
        iter = iter->next;
    }
}

void printAllBuffer_student(list_T *buffer)
{
    LIST_ITERATOR_TYPE_T iter;
    uint32_t counter = 0;
    iter = buffer->beginElement->next; // index 0;

    while (iter != NULL)
    {

        printf("%d |    ", counter);
        printf("%s |    ", iter->data.fullName);
        printf("%d |    ", iter->data.birthYear);
        printf("%s |    ", iter->data.homeTown);
        printf("%s |    ", iter->data.department);
        printf("%s |    ", iter->data.majors);
        printf("%d |    ", iter->data.entryScores);
        printf("%d |    ", iter->data.cumulativeScore);
        printf("\n");
        iter = iter->next;
        counter++;
    }
}
