//
// Created by pcx on 8/13/2022.
//

#include "u_menuModule.h"
#include "studentsManagementSoftware/u_displayModule/u_displayModule.h"
#include "studentsManagementSoftware/u_sortModule/u_sortModule.h"
#include "studentsManagementSoftware/u_sortModule/u_sortModule.h"
#include "studentsManagementSoftware/u_fileManipulateModule/u_fileManipulateModule.h"
#include "studentsManagementSoftware/u_inputModule/u_inputModule.h"
#include "studentsManagementSoftware/u_deleteModule/u_deleteModule.h"
#include "studentsManagementSoftware/u_modifyModule/u_modifyModule.h"
#include "studentsManagementSoftware/u_searchModule/u_searchModule.h"

void menu_mainMenu(list_T *mainBuffer, list_T *sreachBuffer)
{
	int menu_choice;
	do
	{	
		system("cls");
		printf("\n======================== Manage Student Program ============================");
		printf("\n======================== Main MENU =========================================");
		printf("\n1. Show all data on Terminal");
		printf("\n2. Save data to file");
		printf("\n3. Load data from file");
		printf("\n4. Menu data Processing");
		printf("\n5. Menu sort data");
		printf("\n6. Menu search data");
		printf("\n0. Quit program!");
		printf("\nYour choice: ");

		(void)scanf("%d", &menu_choice);

		switch (menu_choice)
		{
		case 0:
			// Stop Program //
			printf("\n======================== Stop Program ============================");
			break;
		case 1:
			printAllBuffer_student(mainBuffer);
			press_anyKey();
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
			// Menu Sort Data //
			menu_Sort(mainBuffer);
			break;
		case 6:
			// Menu Search Data //
			menu_Search(mainBuffer, sreachBuffer);
			break;
		default:
			// Default //
			defaultPrintf();
			break;
		}
	} while (menu_choice != 0);
}

void menu_Sort(list_T *buffer)
{
	int menu_choice;
	do
	{
		system("cls");
		printf("\n1. Menu sort fullname");
		printf("\n2. Menu sort birthyear");
		printf("\n3. Menu sort hometown");
		printf("\n4. Menu sort department");
		printf("\n5. Menu sort major ");
		printf("\n6. Menu sort entryscores");
		printf("\n7. Menu sort cumulativescore ");
		printf("\n0. Out Menu sort data");
		printf("\nYour choice: ");

		(void)scanf("%d", &menu_choice);

		switch (menu_choice)
		{
		case 0:
			// Out Menu sort data//
			break;
		case 1:
			// Menu sort Full Name //
			menu_sortFullName(buffer);
			break;
		case 2:
			// Menu sort BirthYear //
			menu_sortBirthYear(buffer);
			break;
		case 3:
			// Menu sort HomeTown //
			menu_sortHomeTown(buffer);
			break;
		case 4:
			// Menu sort Department // 
			menu_sortDepartment(buffer);
			break;
		case 5:
			// Menu sort Major //
			menu_sortMajor(buffer);
			break;
		case 6:
			// Menu sort Entry Score // 
			menu_sortEntryScore(buffer);
			break;
		case 7:
			// Menu sort CumalativeScore //
			menu_sortCumulativeScore(buffer);
			break;
		default:
			// Default //
			defaultPrintf();
			break;
		}
	} while (menu_choice != 0);
}

void menu_Search(list_T *mainBuffer, list_T *search_buffer)
{
	int menu_choice;
	char subString[50];
	int number;
	do
	{
		system("cls");
		printf("\n1. Menu search fullname");
		printf("\n2. Menu search birthyear");
		printf("\n3. Menu search hometown");
		printf("\n4. Menu search department");
		printf("\n5. Menu search major ");
		printf("\n6. Menu search entryscores");
		printf("\n7. Menu search cumulativescore ");
		printf("\n0. Out Menu search data");
		printf("\nYour choice: ");

		(void)scanf("%d", &menu_choice);

		switch (menu_choice)
		{
		case 0:
			// Out Menu Search Data //
			break;
		case 1:
			// Search Full Name // 
			inputSubString(subString);
			search_search_fullName(mainBuffer, search_buffer, subString);
			printAllBuffer_student(search_buffer);
			press_anyKey();
			break;
		case 2:
			// Search Birthyear //
			inputNumber(&number);
			search_search_birthYear(mainBuffer, search_buffer, number);
			printAllBuffer_student(search_buffer);
			press_anyKey();
			break;
		case 3:
			// Search HomeTown // 
			inputSubString(subString);
			search_search_homeTown(mainBuffer, search_buffer, subString);
			printAllBuffer_student(search_buffer);
			press_anyKey();
			break;
		case 4:
			// Search Department //
			inputSubString(subString);
			search_search_department(mainBuffer, search_buffer, subString);
			printAllBuffer_student(search_buffer);
			press_anyKey();
			break;
		case 5:
			// Search Major //
			inputSubString(subString);
			search_search_majors(mainBuffer, search_buffer, subString);
			printAllBuffer_student(search_buffer);
			press_anyKey();
			break;
		case 6:
			// Search Entry Score //
			inputNumber(&number);
			search_search_entryScores(mainBuffer, search_buffer, number);
			printAllBuffer_student(search_buffer);
			press_anyKey();
			break;
		case 7:
			// Search CumulativeScore // 
			inputNumber(&number);
			search_search_cumulativeScore(mainBuffer, search_buffer, number);
			printAllBuffer_student(search_buffer);
			press_anyKey();
			break;
		default:
			// Default //
			defaultPrintf();
			break;
		}
	} while (menu_choice != 0);
}

void menu_dataProcessing(list_T * mainBuffer)
{
	int menu_choice;
	int index;
	int numberOfElement;
	do
	{
		system("cls");
		printf("\n1. Add new student");
		printf("\n2. Delete student");
		printf("\n3. Modify student");
		printf("\n0. Out Menu Data Processing");
		printf("\nYour choice: ");

		(void)scanf("%d", &menu_choice);

		switch (menu_choice)
		{
		case 0:
			printf("Out Menu Data Processing");
			break;
		case 1:
			add_addStudent(mainBuffer);
			break;
		case 2:
			//Todo: Hien thi nhap lai 
			//Todo: Tach ham any key ...
			printAllBuffer_student(mainBuffer);
			numberOfElement = list_size(mainBuffer);
			do
			{
				printf("Nhap Index Sinh Vien Muon Xoa: ");
				(void)scanf("%d", &index);
				(void)getchar();
			} while (index > numberOfElement);

			delete_deleteStudent(mainBuffer, index);
			printf("Delete Successfully!");
			printf("\nPress any key to continue...");
			(void)getchar();
			break;
		case 3:
			//Todo: Hien thi nhap lai 
			//Todo: Tach ham any key ...
			printAllBuffer_student(mainBuffer);
			numberOfElement = list_size(mainBuffer);
			do
			{
				printf("Nhap Index Sinh Vien Muon Dieu Chinh: ");
				(void)scanf("%d", &index);
				(void)getchar();
			} while (index > numberOfElement);
			modify_modifyStudent(mainBuffer, index);
			printf("Modify Successfully!");
			printf("\nPress any key to continue...");
			(void)getchar();
			break;
		default:
			defaultPrintf();
			break;
		}
	} while (menu_choice != 0);
}

// Các hàm sort
void menu_sortMajor(list_T *buffer)
{
	int menu_choice;
	do
	{
		system("cls");
		printf("\n1. Sort increase");
		printf("\n2. Sort decrease");
		printf("\n0. Out sort major");
		printf("\nYour choice: ");

		(void)scanf("%d", &menu_choice);

		switch (menu_choice)
		{
		case 0:
			break;
		case 1:
			sort_incr_majors(buffer);
			sortPrintf();
			break;
		case 2:
			sort_decr_majors(buffer);
			sortPrintf();
			break;
		default:
			defaultPrintf();
			break;
		}

	} while (menu_choice != 0);
}

void menu_sortEntryScore(list_T *buffer)
{
	int menu_choice;
	do
	{
		system("cls");
		printf("\n1. Sort increase");
		printf("\n2. Sort decrease");
		printf("\n0. Out sort entryscore");
		printf("\nYour choice: ");

		(void)scanf("%d", &menu_choice);

		switch (menu_choice)
		{
		case 0:
			break;
		case 1:
			sort_incr_entryScores(buffer);
			sortPrintf();
			break;
		case 2:
			sort_decr_entryScores(buffer);
			sortPrintf();
			break;
		default:
			defaultPrintf();
			break;
		}

	} while (menu_choice != 0);
}

void menu_sortFullName(list_T *buffer)
{
	int menu_choice;
	do
	{
		system("cls");
		printf("\n1. Sort increase");
		printf("\n2. Sort decrease");
		printf("\n0. Out sort fullname");
		printf("\nYour choice: ");

		(void)scanf("%d", &menu_choice);

		switch (menu_choice)
		{
		case 0:
			break;
		case 1:
			sort_incr_fullName(buffer);
			sortPrintf();
			break;
		case 2:
			sort_decr_fullName(buffer);
			sortPrintf();
			break;
		default:
			defaultPrintf();
			break;
		}
	} while (menu_choice != 0);
}

void menu_sortCumulativeScore(list_T *buffer)
{
	int menu_choice;
	do
	{
		system("cls");
		printf("\n1. Sort increase");
		printf("\n2. Sort decrease");
		printf("\n0. Out sort cumulativescore");
		printf("\nYour choice: ");

		(void)scanf("%d", &menu_choice);

		switch (menu_choice)
		{
		case 0:
			break;
		case 1:
			sort_incr_cumulativeScore(buffer);
			sortPrintf();
			break;
		case 2:
			sort_decr_cumulativeScore(buffer);
			sortPrintf();
			break;
		default:
			defaultPrintf();
			break;
		}
	} while (menu_choice != 0);
}

void menu_sortDepartment(list_T *buffer)
{
	int menu_choice;
	do
	{
		system("cls");
		printf("\n1. Sort increase");
		printf("\n2. Sort decrease");
		printf("\n0. Out sort department");
		printf("\nYour choice: ");

		(void)scanf("%d", &menu_choice);

		switch (menu_choice)
		{
		case 0:
			break;
		case 1:
			sort_incr_department(buffer);
			sortPrintf();
			break;
		case 2:
			sort_decr_department(buffer);
			sortPrintf();
			break;
		default:
			defaultPrintf();
			break;
		}
	} while (menu_choice != 0);
}

void menu_sortBirthYear(list_T *buffer)
{
	int menu_choice;
	do
	{
		system("cls");
		printf("\n1. Sort increase");
		printf("\n2. Sort decrease");
		printf("\n0. Out sort birthyear");
		printf("\nYour choice: ");

		(void)scanf("%d", &menu_choice);

		switch (menu_choice)
		{
		case 0:
			break;
		case 1:
			sort_incr_birthYear(buffer);
			sortPrintf();
			break;
		case 2:
			sort_decr_birthYear(buffer);
			sortPrintf();
			break;
		default:
			defaultPrintf();
			break;
		}
	} while (menu_choice != 0);
}

void menu_sortHomeTown(list_T* buffer)
{
	int menu_choice;
	do
	{
		system("cls");
		printf("\n1. Sort increase");
		printf("\n2. Sort decrease");
		printf("\n0. Out sort hometown");
		printf("\nYour choice: ");

		(void)scanf("%d", &menu_choice);

		switch (menu_choice)
		{
		case 0:
			break;
		case 1:
			sort_incr_homeTown(buffer);
			sortPrintf();
			break;
		case 2:
			sort_decr_homeTown(buffer);
			sortPrintf();
			break;
		default:
			defaultPrintf();
			break;
		}
	} while (menu_choice != 0);
}

void sortPrintf()
{
	printf("Sort Successfully!\n");
	press_anyKey();
}
void press_anyKey()
{
	(void)getchar();
	printf("Press any key to continue...");
	(void)getchar();
}
void defaultPrintf()
{
	printf("Enter choice again");
	(void)getchar();
	printf("\nPress any key to continue...");
	(void)getchar();
}
void inputSubString(char subString[])
{
	printf("Nhap ky tu muon tim kiem: ");
	(void)getchar();
	(void)scanf("%[^\n]s", subString);
}
void inputNumber(int* number)
{
	printf("Nhap diem muon tim kiem:");
	(void)(scanf("%d", number));
	(void)getchar();
}
