/**
  ******************************************************************************
  * @file    u_fileManipulateModule.h
  * @author  TranHoangAnh
  * @brief
  *
  ==============================================================================
                        ##### FILE MANIPULATE MODULE #####
  ==============================================================================
  */

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_FILEMANIPULATEMODULE_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_FILEMANIPULATEMODULE_H
#include <stdio.h>
#include "studentsManagementSoftware/u_dataStruct.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_dataBufferModule.h"
#include "studentsManagementSoftware/dataStorage/filePath.h"

void fileM_loadData(list_T *buffer);
void fileM_saveData(list_T *buffer);

void writeStringToFileDat(char *theString);

#endif // STUDENTS_MANAGEMENT_SOFTWARE_U_FILEMANIPULATEMODULE_H
