//
// Created by pcx on 8/13/2022.
//

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_MENUMODULE_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_MENUMODULE_H
#include "stdio.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_dataBufferModule.h"


char menu_waitForInput();

void menu_mainMenu(list_T *buffer);
void menu_Sort(list_T* buffer);
void menu_Search(list_T* buffer);
void menu_dataProcessing(list_T* buffer);

void SaveData(list_T* buffer);
void LoadData(list_T* buffer);
void DeleteSinhVien(list_T* buffer);
void ModifySinhVien(list_T* buffer);




// Các hàm sort 
void SortMajor(list_T *buffer);
void SortEntryScore(list_T* buffer);
void SortFullName(list_T* buffer);
void SortCumulativeScore(list_T* buffer);
void SortDepartment(list_T* buffer);
void SortBirthYear(list_T* buffer);




#endif //STUDENTS_MANAGEMENT_SOFTWARE_U_MENUMODULE_H
