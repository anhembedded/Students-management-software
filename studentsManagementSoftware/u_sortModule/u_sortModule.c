//
// Created by pcx on 8/13/2022.
//

#include "u_sortModule.h"
#include "string.h"



void sort_incr_cumulativeScore(list_T *buffer_ptr) {
    uint32_t  sizeOfBuffer = list_size(buffer_ptr);
    for (int32_t i = 0; i < sizeOfBuffer; ++i){
        for (uint32_t j = i + 1; j < sizeOfBuffer; ++j)
        {

            if (list_goToPos(buffer_ptr,i)->data.cumulativeScore > list_goToPos(buffer_ptr,j)->data.cumulativeScore){
              list_swap(buffer_ptr,i,j);
            }
        }
    }
}

void sort_decr_cumulativeScore(list_T *buffer_ptr)
{
    uint32_t  sizeOfBuffer = list_size(buffer_ptr);
    for (int32_t i = 0; i < sizeOfBuffer; ++i){
        for (uint32_t j = i + 1; j < sizeOfBuffer; ++j)
        {

            if (list_goToPos(buffer_ptr,i)->data.cumulativeScore < list_goToPos(buffer_ptr,j)->data.cumulativeScore){
                list_swap(buffer_ptr,i,j);
            }
        }
    }
}

void sort_incr_entryScores(list_T *buffer_ptr) {
    uint32_t  sizeOfBuffer = list_size(buffer_ptr);
    for (int32_t i = 0; i < sizeOfBuffer; ++i){
        for (uint32_t j = i + 1; j < sizeOfBuffer; ++j)
        {

            if (list_goToPos(buffer_ptr,i)->data.entryScores > list_goToPos(buffer_ptr,j)->data.entryScores){
                list_swap(buffer_ptr,i,j);
            }
        }
    }
}

void sort_incr_birthYear(list_T *buffer_ptr) {
    uint32_t  sizeOfBuffer = list_size(buffer_ptr);
    for (int32_t i = 0; i < sizeOfBuffer; ++i){
        for (uint32_t j = i + 1; j < sizeOfBuffer; ++j)
        {

            if (list_goToPos(buffer_ptr,i)->data.birthYear > list_goToPos(buffer_ptr,j)->data.birthYear){
                list_swap(buffer_ptr,i,j);
            }
        }
    }
}

void sort_decr_entryScores(list_T *buffer_ptr) {
    uint32_t  sizeOfBuffer = list_size(buffer_ptr);
    for (int32_t i = 0; i < sizeOfBuffer; ++i){
        for (uint32_t j = i + 1; j < sizeOfBuffer; ++j)
        {

            if (list_goToPos(buffer_ptr,i)->data.entryScores < list_goToPos(buffer_ptr,j)->data.entryScores){
                list_swap(buffer_ptr,i,j);
            }
        }
    }
}

void sort_decr_birthYear(list_T *buffer_ptr) {
    uint32_t  sizeOfBuffer = list_size(buffer_ptr);
    for (int32_t i = 0; i < sizeOfBuffer; ++i){
        for (uint32_t j = i + 1; j < sizeOfBuffer; ++j)
        {

            if (list_goToPos(buffer_ptr,i)->data.birthYear < list_goToPos(buffer_ptr,j)->data.birthYear){
                list_swap(buffer_ptr,i,j);
            }
        }
    }
}

static int strIncrCompare(const void *a, const void *b) {
    // setting up rules for comparison
    return strcmp(*(const char**)a, *(const char**)b);
}

static int strDecrCompare(const void *a, const void *b) {
    // setting up rules for comparison
    return (!strcmp(*(const char**)a, *(const char**)b));
}

void sort_incr_fullName(list_T *buffer_ptr) {
    uint32_t  sizeOfBuffer = list_size(buffer_ptr);

    //Sort array using the Buuble Sort algorithm
    for(int i=0; i<sizeOfBuffer; i++){
        for(int j=0; j<sizeOfBuffer-1-i; j++){
            if(strcmp(list_goToPos(buffer_ptr,j)->data.fullName, list_goToPos(buffer_ptr,j+1)->data.fullName) > 0){
                //swap array[j] and array[j+1]
                list_swap(buffer_ptr,j,j+1);

            }
        }
    }

}

void sort_incr_department(list_T *buffer_ptr) {
    uint32_t  sizeOfBuffer = list_size(buffer_ptr);

    //Sort array using the Buuble Sort algorithm
    for(int i=0; i<sizeOfBuffer; i++){
        for(int j=0; j<sizeOfBuffer-1-i; j++){
            if(strcmp(list_goToPos(buffer_ptr,j)->data.department, list_goToPos(buffer_ptr,j+1)->data.department) > 0){
                //swap array[j] and array[j+1]
                list_swap(buffer_ptr,j,j+1);

            }
        }
    }
}

void sort_incr_homeTown(list_T *buffer_ptr) {
    uint32_t  sizeOfBuffer = list_size(buffer_ptr);

    //Sort array using the Buuble Sort algorithm
    for(int i=0; i<sizeOfBuffer; i++){
        for(int j=0; j<sizeOfBuffer-1-i; j++){
            if(strcmp(list_goToPos(buffer_ptr,j)->data.homeTown, list_goToPos(buffer_ptr,j+1)->data.homeTown) > 0){
                //swap array[j] and array[j+1]
                list_swap(buffer_ptr,j,j+1);

            }
        }
    }
}

void sort_incr_majors(list_T *buffer_ptr) {
    uint32_t  sizeOfBuffer = list_size(buffer_ptr);

    //Sort array using the Buuble Sort algorithm
    for(int i=0; i<sizeOfBuffer; i++){
        for(int j=0; j<sizeOfBuffer-1-i; j++){
            if(strcmp(list_goToPos(buffer_ptr,j)->data.majors, list_goToPos(buffer_ptr,j+1)->data.majors) > 0){
                //swap array[j] and array[j+1]
                list_swap(buffer_ptr,j,j+1);

            }
        }
    }
}


