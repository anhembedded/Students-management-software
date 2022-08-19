/**
  ******************************************************************************
  * @file    u_displayModule.c
  * @author  TranHoangAnh
  * @brief
  *
  ==============================================================================
                        ##### DISPLAY MODULE #####
  ==============================================================================
  */

#include "u_displayModule.h"
#include "stdio.h"

void printAllBuffer_student(list_T *buffer)
{
    system("cls");
    LIST_ITERATOR_TYPE_T iter;
    uint32_t counter = 0;
    iter = buffer->beginElement->next; // index 0;

    // Print Header //
    printf("%-3s |    %-20s |    %-10s |    %-20s |    %-20s |    %-20s |    %-15s |    %-15s |    \n\n",
        "STT", "Full Name", "BirthYear", "HomeTown", "Department", "Major",
        "EntryScore", "CumulativeScore");

    // Print Student //
    while (iter != NULL)
    {
        printf("%-3d |    ", counter);
        printf("%-20s |    ", iter->data.fullName);
        printf("%-10d |    ", iter->data.birthYear);
        printf("%-20s |    ", iter->data.homeTown);
        printf("%-20s |    ", iter->data.department);
        printf("%-20s |    ", iter->data.majors);
        printf("%-15.2f |    ",(float)(iter->data.entryScores)/100);
        printf("%-15.2f |    ",(float)(iter->data.cumulativeScore)/100);
        printf("\n");
        iter = iter->next;
        counter++;
    }
}
