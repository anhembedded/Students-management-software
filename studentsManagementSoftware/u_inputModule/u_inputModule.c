//
// Created by pcx on 8/13/2022.
//

#include "u_inputModule.h"
#include <string.h>
#include <stdlib.h>

studentInputBuffer_T input_NhapSinhVien()
{
	studentInputBuffer_T student;
	printf("fullName sinh vien: ");
	(void)scanf("%s", &student.fullName);
	printf("\nBirthyear sinh vien: ");
	(void)scanf("%d", &student.birthYear);
	(void)getchar();
	printf("Department sinh vien: ");
	(void)scanf("%s", student.department);
	printf("Hometown sinh vien: ");
	(void)scanf("%s", student.homeTown);
	printf("Major sinh vien: ");
	(void)scanf("%s", student.majors);
	printf("CumulativeScore sinh vien: ");
	(void)scanf("%d", &student.cumulativeScore);
	printf("EntryScores sinh vien: ");
	(void)scanf("%d", &student.entryScores);
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
