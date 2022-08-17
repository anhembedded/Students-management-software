//
// Created by pcx on 8/13/2022.
//

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_SEARCHMODULE_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_SEARCHMODULE_H
#include "studentsManagementSoftware/u_dataBufferModule/u_dataBufferModule.h"
#include <string.h>

void sreach_sreachString(list_T *bufferData, list_T *bufferSreach, char *theString);

void sreach_sreach_fullName(list_T *bufferData, list_T *bufferSreach, char *theString);
void sreach_sreach_department(list_T *bufferData, list_T *bufferSreach, char *theString);
void sreach_sreach_majors(list_T *bufferData, list_T *bufferSreach, char *theString);
void sreach_sreach_homeTown(list_T *bufferData, list_T *bufferSreach, char *theString);

#endif // STUDENTS_MANAGEMENT_SOFTWARE_U_SEARCHMODULE_H
