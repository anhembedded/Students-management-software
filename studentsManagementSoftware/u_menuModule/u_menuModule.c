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
#include "studentsManagementSoftware/u_fileManipulateModule/u_fileManipulateModule.h"

void menu_mainMenu(list_T *mainBuffer, list_T *sreachBuffer)
{
	student_T temp;
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
			printf("\n======================== Stop Manage Student Program ============================");
			break;
		case 1:
			printAllBuffer_student(mainBuffer);
			press_anyKey();
			break;
		case 2:
			// todo: SaveData
			file_saveFile(mainBuffer);
			break;
		case 3:
			// todo: loadData
			unsigned int u4_totalStudent;	
			u4_totalStudent = lineCount(filePath_name) -1;
			studentInputBuffer_T studentReadBuffer;
			student_T studentemp;

			if (0 < u4_totalStudent) {
				for (unsigned int index = 0; index < u4_totalStudent; index++) {
					file_read_aStudent(&studentReadBuffer, index);
					studentemp = input_allocateData(&studentReadBuffer);
					list_pushBack(mainBuffer, studentemp);
				}
			}
			else {
				printf("There is no student to read\n");
			}
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

void menu_dataProcessing(list_T* mainBuffer)
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
			// Out Menu Data Processin //
			break;
		case 1:
			// Add Student //
			system("cls");
			add_addStudent(mainBuffer);
			printf("Add Successfully!\n");
			press_anyKey();
			break;
		case 2:
			// Delete Student //
			numberOfElement = list_size(mainBuffer);
			do
			{
				system("cls");
				printAllBuffer_student(mainBuffer);
				printf("Nhap Index Sinh Vien Muon Xoa: ");
				(void)scanf("%d", &index);
			} while (index >= numberOfElement);

			delete_deleteStudent(mainBuffer, index);
			printf("Delete Successfully!\n");
			press_anyKey();
			break;
		case 3:
			// Modify Student // 
			numberOfElement = list_size(mainBuffer);
			do
			{
				system("cls");
				printAllBuffer_student(mainBuffer);
				printf("Nhap Index Sinh Vien Muon Dieu Chinh: ");
				(void)scanf("%d", &index);
			} while (index >= numberOfElement);

			menu_Modify(mainBuffer,index);
			break;
		default:
			// Default //
			defaultPrintf();
			break;
		}
	} while (menu_choice != 0);
}

void menu_Modify(list_T* buffer, int index)
{
	int menu_choice;
	do
	{
		printf("\n1. Modify fullname");
		printf("\n2. Modify birthyear");
		printf("\n3. Modify hometown");
		printf("\n4. Modify department");
		printf("\n5. Modify major ");
		printf("\n6. Modify entryscores");
		printf("\n7. Modify cumulativescore ");
		printf("\n0. Out Menu modify data");
		printf("\nYour choice: ");

		(void)scanf("%d", &menu_choice);

		switch (menu_choice)
		{
			case 0:
				// Out Menu modify data //
				break;
			case 1:
				// Modify Full Name //
				modify_modifyFullName(buffer,index);
				modifyPrintf();
				break;
			case 2:
				// Modify BirthYear //
				modify_modifyBirthYear(buffer, index);
				modifyPrintf();
				break;
			case 3:
				// Modify HomeTown // 
				modify_modifyHomeTown(buffer, index);
				modifyPrintf();
				break;
			case 4:
				// Modify Department //
				modify_modifyDepartment(buffer, index);
				modifyPrintf();
				break;
			case 5:
				// Modify Major //
				modify_modifyMajor(buffer, index);
				modifyPrintf();
				break;
			case 6:
				// Modify EntryScore //
				modify_modifyEntryScore(buffer, index);
				modifyPrintf();
				break;
			case 7:
				// Modify CumulativeScore //
				modify_modifyCumulativeScore(buffer, index);
				modifyPrintf();
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
			// Out sort major //
			break;
		case 1:
			// Sort increase major //
			sort_incr_majors(buffer);
			sortPrintf();
			break;
		case 2:
			// Sort decrease major //
			sort_decr_majors(buffer);
			sortPrintf();
			break;
		default:
			// Default //
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
			// Out sort entryscore //
			break;
		case 1:
			// Sort increase entryscore //
			sort_incr_entryScores(buffer);
			sortPrintf();
			break;
		case 2:
			// Sort decrease entryscore //
			sort_decr_entryScores(buffer);
			sortPrintf();
			break;
		default:
			// Default // 
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
			// Out sort fullname //
			break;
		case 1:
			// Sort increase fullname // 
			sort_incr_fullName(buffer);
			sortPrintf();
			break;
		case 2:
			// Sort decrease fullname //
			sort_decr_fullName(buffer);
			sortPrintf();
			break;
		default:
			// Default //
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
			// Out sort cumulativescore //
			break;
		case 1:
			// Sort increase cumulativescore //
			sort_incr_cumulativeScore(buffer);
			sortPrintf();
			break;
		case 2:
			// Sort decrease cumulatives //
			sort_decr_cumulativeScore(buffer);
			sortPrintf();
			break;
		default:
			// Default //
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
			// Out sort department //
			break;
		case 1:
			// Sort increase department //
			sort_incr_department(buffer);
			sortPrintf();
			break;
		case 2:
			// Sort decrease department //
			sort_decr_department(buffer);
			sortPrintf();
			break;
		default:
			// Default //
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
			// Out sort birthyear //
			break;
		case 1:
			// Sort increase birthyear //
			sort_incr_birthYear(buffer);
			sortPrintf();
			break;
		case 2:
			// Sort decrease birthyear //
			sort_decr_birthYear(buffer);
			sortPrintf();
			break;
		default:
			// Default //
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
			// Out sort hometown //
			break;
		case 1:
			// Sort increase hometown //
			sort_incr_homeTown(buffer);
			sortPrintf();
			break;
		case 2:
			// Sort decrease hometown //
			sort_decr_homeTown(buffer);
			sortPrintf();
			break;
		default:
			// Default //
			defaultPrintf();
			break;
		}
	} while (menu_choice != 0);
}

void modifyPrintf()
{
	printf("Modify Successfully!\n");
	press_anyKey();
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
