//
// Created by pcx on 8/13/2022.
//

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_SORTMODULE_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_SORTMODULE_H

#include "studentsManagementSoftware/u_dataBufferModule/u_list.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_dataBufferModule.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defining comparator function as per the requirement
static int strIncrCompare(const void* a, const void* b);

static int strDecrCompare(const void *a, const void *b);


void sort_incr_cumulativeScore(list_T *buffer_ptr);
void sort_decr_cumulativeScore(list_T *buffer_ptr);

void sort_incr_entryScores(list_T *buffer_ptr);
void sort_decr_entryScores(list_T *buffer_ptr);

void sort_incr_birthYear(list_T *buffer_ptr);
void sort_decr_birthYear(list_T *buffer_ptr);


void sort_incr_fullName(list_T *buffer_ptr);
void sort_incr_department(list_T *buffer_ptr);
void sort_incr_homeTown(list_T *buffer_ptr);
void sort_incr_majors(list_T *buffer_ptr);

#endif //STUDENTS_MANAGEMENT_SOFTWARE_U_SORTMODULE_H
