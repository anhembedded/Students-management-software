/**
  ******************************************************************************
  * @file    u_searchModule.h
  * @author  TranHoangAnh
  * @brief
  *
  ==============================================================================
                        ##### SEARCH MODULE #####
  ==============================================================================
  */
#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_SEARCHMODULE_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_SEARCHMODULE_H
#include "studentsManagementSoftware/u_dataBufferModule/u_dataBufferModule.h"
#include <string.h>

void sreach_sreachString(list_T *bufferData, list_T *bufferSreach, char *theString);

void sreach_sreach_fullName(list_T *bufferData, list_T *bufferSreach, char *theString);
void sreach_sreach_department(list_T *bufferData, list_T *bufferSreach, char *theString);
void sreach_sreach_majors(list_T *bufferData, list_T *bufferSreach, char *theString);
void sreach_sreach_homeTown(list_T *bufferData, list_T *bufferSreach, char *theString);

void sreach_sreach_birthYear(list_T *bufferData, list_T *bufferSreach, uint32_t numberSreach);
void sreach_sreach_cumulativeScore(list_T *bufferData, list_T *bufferSreach, uint32_t numberSreach);
void sreach_sreach_entryScores(list_T *bufferData, list_T *bufferSreach, uint32_t numberSreach);

#endif // STUDENTS_MANAGEMENT_SOFTWARE_U_SEARCHMODULE_H
