//
// Created by pcx on 8/13/2022.
//

#include "u_modifyModule.h"
#include <string.h>


void modify_modifyFullName(list_T* buffer, int32_t positions)
{
	studentInputBuffer_T studentInputBufferTemp;
	input_fullName(&studentInputBufferTemp);
	char* studentName = input_stringAllocate(&studentInputBufferTemp.fullName);
	list_goToPos(buffer, positions)->data.fullName = studentName;
}

void modify_modifyBirthYear(list_T* buffer, int32_t positions)
{
	studentInputBuffer_T studentInputBufferTemp;
	input_birthYear(&studentInputBufferTemp);
	list_goToPos(buffer, positions)->data.birthYear = studentInputBufferTemp.birthYear;
}

void modify_modifyHomeTown(list_T* buffer, int32_t positions)
{
	studentInputBuffer_T studentInputBufferTemp;
	input_homeTown(&studentInputBufferTemp);
	char* studentHomeTown = input_stringAllocate(&studentInputBufferTemp.homeTown);
	list_goToPos(buffer, positions)->data.homeTown = studentHomeTown;
}

void modify_modifyDepartment(list_T* buffer, int32_t positions)
{
	studentInputBuffer_T studentInputBufferTemp;
	input_department(&studentInputBufferTemp);
	char* studentDepartment = input_stringAllocate(&studentInputBufferTemp.department);
	list_goToPos(buffer, positions)->data.department = studentDepartment;
}

void modify_modifyMajor(list_T* buffer, int32_t positions)
{
	studentInputBuffer_T studentInputBufferTemp;
	input_major(&studentInputBufferTemp);
	char* studentMajor = input_stringAllocate(&studentInputBufferTemp.majors);
	list_goToPos(buffer, positions)->data.majors = studentMajor;
}

void modify_modifyEntryScore(list_T* buffer, int32_t positions)
{
	studentInputBuffer_T studentInputBufferTemp;
	input_entryScore(&studentInputBufferTemp);
	list_goToPos(buffer, positions)->data.entryScores = studentInputBufferTemp.entryScores;
}

void modify_modifyCumulativeScore(list_T* buffer, int32_t positions)
{
	studentInputBuffer_T studentInputBufferTemp;
	input_cumulativeScore(&studentInputBufferTemp);
	list_goToPos(buffer, positions)->data.cumulativeScore = studentInputBufferTemp.cumulativeScore;
}

