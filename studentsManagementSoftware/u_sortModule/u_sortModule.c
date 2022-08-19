/**
  ******************************************************************************
  * @file    u_sortModule.c
  * @author  TranHoangAnh
  * @brief
  *
  ==============================================================================
                        ##### LOAD MODULE #####
  ==============================================================================
  */

#include "u_sortModule.h"
#include "string.h"
#include <ctype.h>

static void upper2LowerString(char* parmString)
{
    for (uint32_t i = 0; i <= strlen(parmString); i++) {
        parmString[i] = tolower(parmString[i]);
    }
}




void sort_incr_cumulativeScore(list_T* buffer_ptr)
{
    uint32_t sizeOfBuffer = list_size(buffer_ptr);
    for (int32_t i = 0; i < sizeOfBuffer; ++i)
    {
        for (uint32_t j = i + 1; j < sizeOfBuffer; ++j)
        {
            if (list_goToPos(buffer_ptr, i)->data.cumulativeScore > list_goToPos(buffer_ptr, j)->data.cumulativeScore)
            {
                list_swap(buffer_ptr, i, j);
            }
        }
    }
}

void sort_decr_cumulativeScore(list_T* buffer_ptr)
{
    uint32_t sizeOfBuffer = list_size(buffer_ptr);
    for (int32_t i = 0; i < sizeOfBuffer; ++i)
    {
        for (uint32_t j = i + 1; j < sizeOfBuffer; ++j)
        {
            if (list_goToPos(buffer_ptr, i)->data.cumulativeScore < list_goToPos(buffer_ptr, j)->data.cumulativeScore)
            {
                list_swap(buffer_ptr, i, j);
            }
        }
    }
}

void sort_incr_entryScores(list_T* buffer_ptr)
{
    uint32_t sizeOfBuffer = list_size(buffer_ptr);
    for (int32_t i = 0; i < sizeOfBuffer; ++i)
    {
        for (uint32_t j = i + 1; j < sizeOfBuffer; ++j)
        {
            if (list_goToPos(buffer_ptr, i)->data.entryScores > list_goToPos(buffer_ptr, j)->data.entryScores)
            {
                list_swap(buffer_ptr, i, j);
            }
        }
    }
}

void sort_incr_birthYear(list_T* buffer_ptr)
{
    uint32_t sizeOfBuffer = list_size(buffer_ptr);
    for (int32_t i = 0; i < sizeOfBuffer; ++i)
    {
        for (uint32_t j = i + 1; j < sizeOfBuffer; ++j)
        {
            if (list_goToPos(buffer_ptr, i)->data.birthYear > list_goToPos(buffer_ptr, j)->data.birthYear)
            {
                list_swap(buffer_ptr, i, j);
            }
        }
    }
}

void sort_decr_entryScores(list_T* buffer_ptr)
{
    uint32_t sizeOfBuffer = list_size(buffer_ptr);
    for (int32_t i = 0; i < sizeOfBuffer; ++i)
    {
        for (uint32_t j = i + 1; j < sizeOfBuffer; ++j)
        {

            if (list_goToPos(buffer_ptr, i)->data.entryScores < list_goToPos(buffer_ptr, j)->data.entryScores)
            {
                list_swap(buffer_ptr, i, j);
            }
        }
    }
}

void sort_decr_birthYear(list_T* buffer_ptr)
{
    uint32_t sizeOfBuffer = list_size(buffer_ptr);
    for (int32_t i = 0; i < sizeOfBuffer; ++i)
    {
        for (uint32_t j = i + 1; j < sizeOfBuffer; ++j)
        {
            if (list_goToPos(buffer_ptr, i)->data.birthYear < list_goToPos(buffer_ptr, j)->data.birthYear)
            {
                list_swap(buffer_ptr, i, j);
            }
        }
    }
}

void sort_incr_fullName(list_T* buffer_ptr)
{
    uint32_t sizeOfBuffer = list_size(buffer_ptr);
    char* string1;
    char* string2;
    // Sort array using the Buuble Sort algorithm

    for (int i = 0; i < sizeOfBuffer; i++)
    {
        for (int j = 0; j < sizeOfBuffer - 1 - i; j++)
        {
            string1 = list_goToPos(buffer_ptr, j)->data.fullName;
            string2 = list_goToPos(buffer_ptr, j + 1)->data.fullName;
            if (strcmp(string1, string2) > 0)
            {
                // swap array[j] and array[j+1]
                list_swap(buffer_ptr, j, j + 1);
            }
        }
    }
}

void sort_incr_department(list_T* buffer_ptr)
{
    uint32_t sizeOfBuffer = list_size(buffer_ptr);
    char* string1;
    char* string2;
    // Sort array using the Buuble Sort algorithm
    for (int i = 0; i < sizeOfBuffer; i++)
    {
        for (int j = 0; j < sizeOfBuffer - 1 - i; j++)
        {
            string1 = list_goToPos(buffer_ptr, j)->data.department;
            string2 = list_goToPos(buffer_ptr, j + 1)->data.department;
            if (strcmp(string1, string2) > 0)
            {
                // swap array[j] and array[j+1]
                list_swap(buffer_ptr, j, j + 1);
            }
        }
    }
}

void sort_incr_homeTown(list_T* buffer_ptr)
{
    uint32_t sizeOfBuffer = list_size(buffer_ptr);
    char* string1;
    char* string2;
    // Sort array using the Buuble Sort algorithm
    for (int i = 0; i < sizeOfBuffer; i++)
    {
        for (int j = 0; j < sizeOfBuffer - 1 - i; j++)
        {
            string1 = list_goToPos(buffer_ptr, j)->data.homeTown;
            string2 = list_goToPos(buffer_ptr, j + 1)->data.homeTown;
            if (strcmp(string1, string2) > 0)
            {
                // swap array[j] and array[j+1]
                list_swap(buffer_ptr, j, j + 1);
            }
        }
    }
}

void sort_incr_majors(list_T* buffer_ptr)
{
    uint32_t sizeOfBuffer = list_size(buffer_ptr);
    char* string1;
    char* string2;
    // Sort array using the Buuble Sort algorithm
    for (int i = 0; i < sizeOfBuffer; i++)
    {
        for (int j = 0; j < sizeOfBuffer - 1 - i; j++)
        {
            string1 = list_goToPos(buffer_ptr, j)->data.majors;
            string2 = list_goToPos(buffer_ptr, j + 1)->data.majors;

            if (strcmp(string1, string2) > 0)
            {
                // swap array[j] and array[j+1]
                list_swap(buffer_ptr, j, j + 1);
            }

        }
    }
}

void sort_decr_fullName(list_T* buffer_ptr)
{
    uint32_t sizeOfBuffer = list_size(buffer_ptr);
    char* string1;
    char* string2;
    // Sort array using the Buuble Sort algorithm
    for (int i = 0; i < sizeOfBuffer; i++)
    {
        for (int j = 0; j < sizeOfBuffer - 1 - i; j++)
        {
            string1 = list_goToPos(buffer_ptr, j)->data.fullName;
            string2 = list_goToPos(buffer_ptr, j + 1)->data.fullName;
            if (strcmp(string1, string2) < 0)
            {
                // swap array[j] and array[j+1]
                list_swap(buffer_ptr, j, j + 1);
            }
        }
    }
}

void sort_decr_department(list_T* buffer_ptr)
{
    uint32_t sizeOfBuffer = list_size(buffer_ptr);
    // Sort array using the Buuble Sort algorithm
    char* string1;
    char* string2;
    for (int i = 0; i < sizeOfBuffer; i++)
    {
        for (int j = 0; j < sizeOfBuffer - 1 - i; j++)
        {
            string1 = list_goToPos(buffer_ptr, j)->data.department;
            string2 = list_goToPos(buffer_ptr, j + 1)->data.department;
            if (strcmp(string1, string2) < 0)
            {
                // swap array[j] and array[j+1]
                list_swap(buffer_ptr, j, j + 1);
            }
        }
    }
}

void sort_decr_homeTown(list_T* buffer_ptr)
{
    uint32_t sizeOfBuffer = list_size(buffer_ptr);
    char* string1;
    char* string2;
    // Sort array using the Buuble Sort algorithm
    for (int i = 0; i < sizeOfBuffer; i++)
    {
        for (int j = 0; j < sizeOfBuffer - 1 - i; j++)
        {
            string1 = list_goToPos(buffer_ptr, j)->data.homeTown;
            string2 = list_goToPos(buffer_ptr, j + 1)->data.homeTown;
            if (strcmp(string1, string2) < 0)
            {
                // swap array[j] and array[j+1]
                list_swap(buffer_ptr, j, j + 1);
            }
        }
    }
}

void sort_decr_majors(list_T* buffer_ptr)
{
    uint32_t sizeOfBuffer = list_size(buffer_ptr);
    char* string1;
    char* string2;
    // Sort array using the Buuble Sort algorithm
    for (int i = 0; i < sizeOfBuffer; i++)
    {
        for (int j = 0; j < sizeOfBuffer - 1 - i; j++)
        {
            string1 = list_goToPos(buffer_ptr, j)->data.majors;
            string2 = list_goToPos(buffer_ptr, j + 1)->data.majors;

            if (strcmp(string1, string2) < 0)
            {
                // swap array[j] and array[j+1]
                list_swap(buffer_ptr, j, j + 1);
            }
        }
    }
}
