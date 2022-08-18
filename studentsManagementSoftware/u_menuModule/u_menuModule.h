/**
  ******************************************************************************
  * @file    u_menuModule.h
  * @author
  * @brief
  *
  ==============================================================================
                        ##### MENU MODULE #####
  ==============================================================================
  */

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_MENUMODULE_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_MENUMODULE_H
#include "stdio.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_dataBufferModule.h"

char menu_waitForInput();

void menu_mainMenu(list_T *mainBuffer, list_T *sreachBuffer);
void menu_Sort(list_T *buffer);
void menu_Search(list_T *mainBuffer, list_T *sreach_buffer);
void menu_dataProcessing(list_T * mainBuffer);



void menu_sortMajor(list_T *buffer);
void SortEntryScore(list_T *buffer);
void SortFullName(list_T *buffer);
void SortCumulativeScore(list_T *buffer);
void SortDepartment(list_T *buffer);
void SortBirthYear(list_T *buffer);

#endif // STUDENTS_MANAGEMENT_SOFTWARE_U_MENUMODULE_H
