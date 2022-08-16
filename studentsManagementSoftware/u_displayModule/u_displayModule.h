//
// Created by pcx on 8/13/2022.
//

#ifndef STUDENTS_MANAGEMENT_SOFTWARE_U_DISPLAYMODULE_H
#define STUDENTS_MANAGEMENT_SOFTWARE_U_DISPLAYMODULE_H
#include "studentsManagementSoftware/u_dataStruct.h"
#include "studentsManagementSoftware/u_dataBufferModule/u_list.h"

void display_printStudent(student_T *studentObj_ptr);
void display_printStudentFullName(student_T *studentObj_ptr);
void display_printStudentBirthYear(student_T *studentObj_ptr);
void display_printStudentCumulativeScore(student_T *studentObj_ptr);
void display_printStudentDepartment(student_T *studentObj_ptr);
void display_printStudentEntryScores(student_T *studentObj_ptr);
void display_printStudentHomeTown(student_T *studentObj_ptr);
void display_printStudentMajors(student_T *studentObj_ptr);

void display_printlnStudent(student_T *studentObj_ptr);
void display_printlnStudentFullName(student_T *studentObj_ptr);
void display_printlnStudentBirthYear(student_T *studentObj_ptr);
void display_printlnStudentCumulativeScore(student_T *studentObj_ptr);
void display_printlnStudentDepartment(student_T *studentObj_ptr);
void display_printlnStudentEntryScores(student_T *studentObj_ptr);
void display_printlnStudentHomeTown(student_T *studentObj_ptr);
void display_printlnStudentMajors(student_T *studentObj_ptr);

void printAllBuffer_cumulativeScore(list_T *buffer);
void printAllBuffer_fullName(list_T *buffer);
void printAllBuffer_student(list_T *buffer);

#endif //STUDENTS_MANAGEMENT_SOFTWARE_U_DISPLAYMODULE_H
