//
// Created by pcx on 8/13/2022.
//

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_MENUMODULE_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_MENUMODULE_H
#include "stdio.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_dataBufferModule.h"

void menu_mainMenu(list_T *mainBuffer, list_T *sreachBuffer);
void menu_Sort(list_T *buffer);
void menu_Search(list_T *mainBuffer, list_T *sreach_buffer);
void menu_dataProcessing(list_T * mainBuffer);



void menu_sortMajor(list_T *buffer);
void menu_sortEntryScore(list_T *buffer);
void menu_sortFullName(list_T *buffer);
void menu_sortCumulativeScore(list_T *buffer);
void menu_sortDepartment(list_T *buffer);
void menu_sortBirthYear(list_T *buffer);
void menu_sortHomeTown(list_T* buffer);

void press_anyKey();
void defaultPrintf();
void sortPrintf();
void inputSubString(char []);
void inputNumber(int*);

#endif // STUDENTS_MANAGEMENT_SOFTWARE_U_MENUMODULE_H
