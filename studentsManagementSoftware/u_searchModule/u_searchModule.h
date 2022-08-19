//
// Created by pcx on 8/13/2022.
//

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_SEARCHMODULE_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_SEARCHMODULE_H
#include "studentsManagementSoftware/u_dataBufferModule/u_dataBufferModule.h"
#include <string.h>

void sreach_sreachString(list_T *bufferData, list_T *bufferSreach, char *theString);

void search_search_fullName(list_T *bufferData, list_T *bufferSreach, char *theString);
void search_search_department(list_T *bufferData, list_T *bufferSreach, char *theString);
void search_search_majors(list_T *bufferData, list_T *bufferSreach, char *theString);
void search_search_homeTown(list_T *bufferData, list_T *bufferSreach, char *theString);

void search_search_birthYear(list_T *bufferData, list_T *bufferSreach, uint32_t numberSreach);
void search_search_cumulativeScore(list_T *bufferData, list_T *bufferSreach, uint32_t numberSreach);
void search_search_entryScores(list_T *bufferData, list_T *bufferSreach, uint32_t numberSreach);

#endif // STUDENTS_MANAGEMENT_SOFTWARE_U_SEARCHMODULE_H
