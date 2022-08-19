//
// Created by pcx on 8/13/2022.
//

#include "u_inputModule.h"
#include <string.h>
#include <stdlib.h>

studentInputBuffer_T input_NhapSinhVien()
{
	studentInputBuffer_T student;

	input_fullName(&student);

	input_birthYear(&student);

	input_homeTown(&student);

	input_department(&student);

	input_major(&student);

	input_entryScore(&student);

	input_cumulativeScore(&student);

	return student;
}

student_T input_allocateData(studentInputBuffer_T *stdBuffer_ptr)
{
	student_T temp;

	uint32_t sizeOfString = 0;
	sizeOfString = strlen(stdBuffer_ptr->fullName);
	temp.fullName = malloc(sizeOfString + 1);
	// todo: cheack Null
	(void)strcpy(temp.fullName, stdBuffer_ptr->fullName);

	sizeOfString = strlen(stdBuffer_ptr->department);
	temp.department = malloc(sizeOfString + 1);
	// todo: cheack Null
	(void)strcpy(temp.department, stdBuffer_ptr->department);

	sizeOfString = strlen(stdBuffer_ptr->homeTown);
	temp.homeTown = malloc(sizeOfString + 1);
	// todo: cheack Null
	(void)strcpy(temp.homeTown, stdBuffer_ptr->homeTown);

	sizeOfString = strlen(stdBuffer_ptr->majors);
	temp.majors = malloc(sizeOfString + 1);
	// todo: cheack Null
	(void)strcpy(temp.majors, stdBuffer_ptr->majors);

	temp.birthYear = stdBuffer_ptr->birthYear;
	temp.cumulativeScore = stdBuffer_ptr->cumulativeScore;
	temp.entryScores = stdBuffer_ptr->entryScores;

	return temp;
}

student_T input_allocateDataStudent_T(student_T *std_ptr)
{
	// todo: use memCpy
	student_T temp;

	uint32_t sizeOfString = 0;
	sizeOfString = strlen(std_ptr->fullName);
	temp.fullName = malloc(sizeOfString + 1);
	// todo: cheack Null
	strcpy(temp.fullName, std_ptr->fullName);

	sizeOfString = strlen(std_ptr->department);
	temp.department = malloc(sizeOfString + 1);
	// todo: cheack Null
	strcpy(temp.department, std_ptr->department);

	sizeOfString = strlen(std_ptr->homeTown);
	temp.homeTown = malloc(sizeOfString + 1);
	// todo: cheack Null
	strcpy(temp.homeTown, std_ptr->homeTown);

	sizeOfString = strlen(std_ptr->majors);
	temp.majors = malloc(sizeOfString + 1);
	// todo: cheack Null
	strcpy(temp.majors, std_ptr->majors);

	temp.birthYear = std_ptr->birthYear;
	temp.cumulativeScore = std_ptr->cumulativeScore;
	temp.entryScores = std_ptr->entryScores;

	return temp;
}

void input_fullName(studentInputBuffer_T* student)
{
	printf("\nfullName sinh vien: ");
	(void)getchar();
	(void)scanf("%[^\n]s", student->fullName);
}

void input_birthYear(studentInputBuffer_T* student)
{
	printf("\nBirthyear sinh vien: ");
	(void)scanf("%d", &student->birthYear);
}

void input_homeTown(studentInputBuffer_T* student)
{
	printf("\nHometown sinh vien: ");
	(void)getchar();
	(void)scanf("%[^\n]s", student->homeTown);
}

void input_department(studentInputBuffer_T* student)
{
	printf("\nDepartment sinh vien: ");
	(void)getchar();
	(void)scanf("%[^\n]s", student->department);
}

void input_major(studentInputBuffer_T* student)
{
	printf("\nMajor sinh vien: ");
	(void)getchar();
	(void)scanf("%[^\n]s", student->majors);
}

void input_entryScore(studentInputBuffer_T* student)
{
	printf("\nEntryScores sinh vien(theo he so 1000): ");
	(void)scanf("%d", &student->entryScores);
}

void input_cumulativeScore(studentInputBuffer_T* student)
{
	printf("\nCumulativeScore sinh vien(theo he so 1000): ");
	(void)scanf("%d", &student->cumulativeScore);
}

char* input_stringAllocate(char* string)
{
	uint32_t sizeOfString = 0;
	sizeOfString = strlen(string);
	char* string_Temp = malloc(sizeOfString+1);
	strcpy(string_Temp, string);
	return string_Temp;
}
