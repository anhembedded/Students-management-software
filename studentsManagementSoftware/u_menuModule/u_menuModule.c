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

#include "u_menuModule.h"
#include "studentsManagementSoftware/u_displayModule/u_displayModule.h"
#include "studentsManagementSoftware/u_sortModule/u_sortModule.h"
#include "studentsManagementSoftware/u_sortModule/u_sortModule.h"
#include "studentsManagementSoftware/u_fileManipulateModule/u_fileManipulateModule.h"
#include "studentsManagementSoftware/u_inputModule/u_inputModule.h"
#include "studentsManagementSoftware/u_deleteModule/u_deleteModule.h"
#include "studentsManagementSoftware/u_modifyModule/u_modifyModule.h"
#include "studentsManagementSoftware/u_searchModule/u_searchModule.h"

char menu_waitForInput()
{
	char menu_option;
	(void)scanf("%c", &menu_option);

	return menu_option;
}

void menu_mainMenu(list_T *mainBuffer, list_T *sreachBuffer)
{

	int Choice;
	do
	{
		printf("\n=============== Manage Student Program ===============");
		printf("\n=============== Main MENU ===============");
		printf("\n1. Show all data on Terminal");
		printf("\n2. Save data to file");
		printf("\n3. Load data from file");
		printf("\n4. Menu data Processing");
		printf("\n5. Menu sort data");
		printf("\n6. Menu search data");
		printf("\n0. Quit program!");
		printf("\nYour choice: ");

		(void)scanf("%d", &Choice);

		switch (Choice)
		{
		case 0:
			printf("\n==========Stop Program=================");
			break;
		case 1:
			printAllBuffer_student(mainBuffer);
			break;
		case 2:
			// todo: SaveData
			break;
		case 3:
			// todo: loadData
			break;
		case 4:
			// Menu Data Processing //
			menu_dataProcessing(mainBuffer);
			break;
		case 5:
			menu_Sort(mainBuffer); // Menu Sort Data //
			break;
		case 6:
			menu_Search(mainBuffer, sreachBuffer); // Menu Search Data //
			break;
		default:
			printf("\nEnter choice again!");
			break;
		}
	} while (Choice != 0);
}

void menu_Sort(list_T *buffer)
{
	int choice;
	do
	{
		printf("\n1. Menu sort major ");
		printf("\n2. Menu sort entryscores");
		printf("\n3. Menu sort fullname");
		printf("\n4. Menu sort cumulativescore ");
		printf("\n5. Menu sort department");
		printf("\n6. Menu sort birthyear");
		printf("\n0. Out Menu sort data");
		printf("\nYour choice: ");
		(void)scanf("%d", &choice);
		switch (choice)
		{
		case 0:
			printf("Out Menu sort data");
			break;
		case 1:
			menu_sortMajor(buffer);
			break;
		case 2:
			SortEntryScore(buffer);
			break;
		case 3:
			SortFullName(buffer);
			break;
		case 4:
			SortCumulativeScore(buffer);
			break;
		case 5:
			SortDepartment(buffer);
			break;
		case 6:
			SortBirthYear(buffer);
			break;
		default:
			printf("\nEnter choice again!");
			break;
		}
	} while (choice != 0);
}

void menu_Search(list_T *mainBuffer, list_T *sreach_buffer)
{
	// Todo: add Substring -- MENU
	//  Todo: Sreach hometown  -- MENU
	int choice;
	char *subString = NULL;
	do
	{
		printf("\n1. Menu search major ");
		printf("\n2. Menu search entryscores");
		printf("\n3. Menu search fullname");
		printf("\n4. Menu search cumulativescore ");
		printf("\n5. Menu search department");
		printf("\n6. Menu search birthyear");
		printf("\n0. Out Menu search data");
		printf("\nYour choice: ");
		(void)scanf("%d", &choice);
		switch (choice)
		{
		case 0:
			printf("Out Menu search data");
			break;
		case 1:
			// Todo: get Substring -- MENU
			sreach_sreach_majors(mainBuffer, sreach_buffer, subString);
			printAllBuffer_student(sreach_buffer);
			break;
		case 2:
			// Todo: get Substring -- MENU
			// Todo: implement this - SREACH
		   // sreach_sreach_entryScores(mainBuffer, sreach_buffer, number);
			printAllBuffer_student(sreach_buffer);
			break;
		case 3:
			// SearchFullName();
			sreach_sreach_fullName(mainBuffer, sreach_buffer, subString);
			printAllBuffer_student(sreach_buffer);
			break;
		case 4:
			//	SearchCumulativeScore();
			// Todo: implement this - SREACH
		  // sreach_sreach_cumulativeScore(mainBuffer, sreach_buffer, number);
			printAllBuffer_student(sreach_buffer);
			break;
		case 5:
			// SearchDepartment();
			//sreach_sreach_department(mainBuffer, sreach_buffer, subString);
			printAllBuffer_student(sreach_buffer);
			break;
		case 6:
			// SearchBirthYear();
			// Todo: implement this - SREACH
			//sreach_sreach_birthYear(mainBuffer, sreach_buffer, number);
			printAllBuffer_student(sreach_buffer);
			break;
		default:
			printf("\nEnter choice again!");
			break;
		}
	} while (choice != 0);
}

void menu_dataProcessing(list_T * mainBuffer)
{
	int choice;
	
	do
	{
		printf("\n1. Add new student");
		printf("\n2. Delete student");
		printf("\n3. Modify student");
		printf("\n0. Out Menu Data Processing");
		printf("\nYour choice: ");
		(void)scanf("%d", &choice);

		switch (choice)
		{
		case 0:
			printf("Out Menu Data Processing");
			break;
		case 1:
			// SinhVien = NhapSinhVien
			add_addStudent(mainBuffer);
			break;
		case 2:
			// Todo: need option
			delete_deleteStudent(mainBuffer, 0);
			break;
		case 3:
			// Todo: need option
			modify_modifyStudent(mainBuffer, 0);
			break;
		default:
			printf("\nEnter choice again");
			break;
		}
	} while (choice != 0);
}

// Các hàm sort
void menu_sortMajor(list_T *buffer)
{
	int choice;
	do
	{
		printf("\n1. Sort increase");
		printf("\n2. Sort decrease");
		printf("\n0. Out sort major");
		printf("\nYour choice: ");
		(void)scanf("%d", &choice);
		switch (choice)
		{
		case 0:
			printf("Out sort major");
			break;
		case 1:
			sort_incr_majors(buffer);
			break;
		default:
			sort_decr_majors(buffer);
			break;
		}

	} while (choice != 0);
}

void SortEntryScore(list_T *buffer)
{
	int choice;
	do
	{
		printf("\n1. Sort increase");
		printf("\n2. Sort decrease");
		printf("\n0. Out sort entryscore");
		printf("\nYour choice: ");
		(void)scanf("%d", &choice);
		switch (choice)
		{
		case 0:
			printf("Out sort entryscore");
			break;
		case 1:
			sort_incr_entryScores(buffer);
			break;
		default:
			sort_decr_entryScores(buffer);
			break;
		}

	} while (choice != 0);
}

void SortFullName(list_T *buffer)
{
	int choice;
	do
	{
		printf("\n1. Sort increase");
		printf("\n2. Sort decrease");
		printf("\n0. Out sort fullname");
		printf("\nYour choice: ");
		(void)scanf("%d", &choice);
		switch (choice)
		{
		case 0:
			printf("Out sort fullname");
			break;
		case 1:
			sort_incr_fullName(buffer);
			break;
		default:
			sort_decr_fullName(buffer);
			break;
		}

	} while (choice != 0);
}

void SortCumulativeScore(list_T *buffer)
{
	int choice;
	do
	{
		printf("\n1. Sort increase");
		printf("\n2. Sort decrease");
		printf("\n0. Out sort cumulativescore");
		printf("\nYour choice: ");
		(void)scanf("%d", &choice);
		switch (choice)
		{
		case 0:
			printf("Out sort cumulativescore");
			break;
		case 1:
			sort_incr_cumulativeScore(buffer);
			break;
		default:
			sort_decr_cumulativeScore(buffer);
			break;
		}

	} while (choice != 0);
}

void SortDepartment(list_T *buffer)
{
	int choice;
	do
	{
		printf("\n1. Sort increase");
		printf("\n2. Sort decrease");
		printf("\n0. Out sort department");
		printf("\nYour choice: ");
		(void)scanf("%d", &choice);
		switch (choice)
		{
		case 0:
			printf("Out sort department");
			break;
		case 1:

			sort_incr_department(buffer);
			break;
		default:
			sort_decr_department(buffer);
			break;
		}

	} while (choice != 0);
}

void SortBirthYear(list_T *buffer)
{
	int choice;
	do
	{
		printf("\n1. Sort increase");
		printf("\n2. Sort decrease");
		printf("\n0. Out sort birthyear");
		printf("\nYour choice: ");
		(void)scanf("%d", &choice);
		switch (choice)
		{
		case 0:
			printf("Out sort birthyear");
			break;
		case 1:
			sort_incr_birthYear(buffer);
			break;
		default:
			sort_decr_birthYear(buffer);
			break;
		}
	} while (choice != 0);
}
