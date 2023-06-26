#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

typedef struct Login
{
char ChangeUser[20];
char ChangePass[20];
char ChangeUser2[20];
char ChangePass2[20];
}Login;

typedef struct student
{
    char first_name[10];
    char last_name[10];
	char father_name[30];
    char roll_no[10];
    char class[20];
    char group[20];
    char gender[30];
    char fees[10];
} student;




typedef struct teacher
{
    char first_name[10];
    char last_name[10];
    char id[5];
    char Qualification[20];
    char subject[20];
    char age[5];
    char phone_number[11];
    int salary;
    char cnic_number[15];
    char gender[30];
	char rank[20];
	char period1[20];
	char period2[20];
	char period3[20];
	char period4[20];
	char period5[20];
	char period6[20];
	char copycheckclass1[20];
	char copycheckclass2[20];
	char copycheckclass3[20];
	char copycheckday1[20];
	char copycheckday2[20];
	char copycheckday3[20];
} teacher;

typedef struct event
{
	char e_name[30];
	char e_date[40];
} events;

typedef struct feedback
{
   char name[10];
   char father[15];
   char class[3];
   char feed[10];
   char fine[10];
   char feecon[10];
   char better[5];
   char date[10];
   char feedid[10];
}feedback;
typedef struct cordinator
{
	char name[20];
	char id[20];
	char class[20];
	char qualification[20];
	char no[20];
}cordinator;
typedef struct result
{
	char urdu[10];
	char eng[10];
	char pakst[10];
	char isl[10];
	char phy[10];
	char chem[10];
	char comp[10];
	char math[10];
	char name[20];
}result;

int main()
{
	system("cls");
	system("color 0e");
	printf("\n\n\n\n\n\t\t\t\t\t\t\t \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\t\t\t\t\t \xdb    ___________________________________________________    \xdb\n");
	printf("\t\t\t\t\t\t\t \xdb   |                                                   |   \xdb\n");
	printf("\t\t\t\t\t\t\t \xdb   |==============SCHOOL MANAGEMENT SYSTEM=============|   \xdb\n");
    printf("\t\t\t\t\t\t\t \xdb   |___________________________________________________|   \xdb\n");
	printf("\t\t\t\t\t\t\t \xdb                  WELCOME TO THE PROGRAM                   \xdb\n");
	printf("\t\t\t\t\t\t\t \xdb                                                           \xdb\n");
	printf("\t\t\t\t\t\t\t \xdb                     _____________                         \xdb\n");
	printf("\t\t\t\t\t\t\t \xdb                    |   CODED BY  |                        \xdb\n");
	printf("\t\t\t\t\t\t\t \xdb                    |_____________|                        \xdb\n");
	printf("\t\t\t\t\t\t\t \xdb                      Afnan Ahmed                          \xdb\n");
	printf("\t\t\t\t\t\t\t \xdb                                                           \xdb\n");
	printf("\t\t\t\t\t\t\t \xdb                     _____________                         \xdb\n");
	printf("\t\t\t\t\t\t\t \xdb                    |  POWERED BY |                        \xdb\n");
	printf("\t\t\t\t\t\t\t \xdb                    |_____________|                        \xdb\n");
	printf("\t\t\t\t\t\t\t \xdb                        DEV C++                            \xdb\n");
	printf("\t\t\t\t\t\t\t \xdb___________________________________________________________\xdb\n");
	printf("\t\t\t\t\t\t\t \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\t\t\t\t\t                                                                                                                                                                                      Press Any Key To Start The Program");
	getche();
	int choice;
    system("cls");
    system("color 0e");
        printf("\n\t\t\t\t\t\t\t  __________________________________________________________");
		printf("\n\t\t\t\t\t\t\t \xdb                                                          \xdb");
		printf("\n\t\t\t\t\t\t\t \xdb==================SCHOOL MANAGEMENT SYSTEM================\xdb");
		printf("\n\t\t\t\t\t\t\t \xdb__________________________________________________________\xdb");
		printf("\n\t\t\t\t\t\t\t         |----EMALAH FOUNDATION SCHOOL & COLLEGE----|");	
		printf("\n\t\t\t\t\t\t\t                          __________");
		printf("\n\t\t\t\t\t\t\t                         |          |");
		printf("\n\t\t\t\t\t\t\t                         |=LOGIN AS=|");
		printf("\n\t\t\t\t\t\t\t                         |__________|\n");
		printf("\n\t\t\t\t\t\t\t                 ____________   ____________");
		printf("\n\t\t\t\t\t\t\t                |            | |            |");
		printf("\n\t\t\t\t\t\t\t                |1).Admin    | |2).Teacher  |");
		printf("\n\t\t\t\t\t\t\t                |____________| |____________|");
		printf("\n\t\t\t\t\t\t\t                 ____________   ____________ ");
		printf("\n\t\t\t\t\t\t\t                |            | |            |");
		printf("\n\t\t\t\t\t\t\t                |3).Student  | |4).Parent   |");
		printf("\n\t\t\t\t\t\t\t                |____________| |____________|");
		printf("\n\t\t\t\t\t\t\t ___________________________________________________________");
		printf("\n\t\t\t\t\t\t\t ===========================================================\n");
		printf("\n\t\t\t\t\t\t\t                 Press (5) to Exit The Program");
		printf("\n\t\t\t\t\t\t\t                      Enter Your Choice:");
		scanf("%d",&choice);

switch (choice)
{
	case 1:
		admin();
		break;
	case 2:
		ateacher();
		break;
	case 3:
		astudent();
		break;
	case 4:
		parent();
		break;
	case 5:
		return 0;
		break;
	default:
		printf("\a");
		main();
}

}
int admin()
{
    FILE*fp;
    struct Login Admin;
    B:
    system("cls");
	char username[15];
	char password[12];	 	
	    printf("\n\t\t\t\t\t\t\t\t\t ___________________________");
    	printf("\n\t\t\t\t\t\t\t\t\t\xdb                           \xdb");
        printf("\n\t\t\t\t\t\t\t\t\t\xdb=======LOGIN AS ADMIN======\xdb");
        printf("\n\t\t\t\t\t\t\t\t\t\xdb___________________________\xdb");
    	printf("\n\n\t\t\t\t\t\t\t\t\t Username:");
    	scanf("%s",&username);
    	printf("\n\t\t\t\t\t\t\t\t\t Password:");
    	scanf("%s",&password);
    	printf("\n\t\t\t\t\t\t\t\t\t_____________________________");
        printf("\n\t\t\t\t\t\t\t\t\t=============================");
   fp =fopen("Admin Log.txt","ab+");
   while(fread(&Admin, sizeof(Admin), 1,fp) == 1)
    {
    if(strcmp(username,Admin.ChangeUser) == 0)
	  {
    if(strcmp(password,Admin.ChangePass) == 0)
	   {
    	printf("\n\t\t\t\t\t\t\t\t\t          Correct..");
    	printf("\n\t\t\t\t\t\t\t\t\t Enter any key to continue..");
        getch();
        menu_Admin();
	   }
	else
	   {
	   	printf("\a\nInvalid Password");
	   	printf("\nPress any key to ReEnter...");
	   	getch();
	   	goto B;
   	   }
      }
    else
	   {
	   	printf("\a\nInvalid Username");
	  	printf("\nPress any key to ReEnter...");
	   	getch();
	   	goto B;
       }
     }
      fclose(fp);
}
int menu_Admin()
{
	int c,ch,cho;
	Sn:
	    system("cls");
		printf("\n\t\t\t\t\t\t\t  __________________________________________________________");
		printf("\n\t\t\t\t\t\t\t |                                                          |");
		printf("\n\t\t\t\t\t\t\t |======================MANAGE RECORDS======================|");
		printf("\n\t\t\t\t\t\t\t |__________________________________________________________|");
		printf("\n\t\t\t\t\t\t\t  ____________    ____________   ____________    ____________");
		printf("\n\t\t\t\t\t\t\t |            |  |            | |            |  |            |");
		printf("\n\t\t\t\t\t\t\t |            |  |1).Teachers | |2).Students |  |            |");
		printf("\n\t\t\t\t\t\t\t |            |  |____________| |____________|  |            |");
		printf("\n\t\t\t\t\t\t\t |            |   ____________   ____________   |            |");
		printf("\n\t\t\t\t\t\t\t |            |  |            | |            |  |            |");
		printf("\n\t\t\t\t\t\t\t |            |  |3).Accounts | |4).Events   |  |            |");
		printf("\n\t\t\t\t\t\t\t |     (7)    |  |____________| |____________|  |     (8)    |");
		printf("\n\t\t\t\t\t\t\t |EXAMINATION |   ___________________________   | Class Fees |");
		printf("\n\t\t\t\t\t\t\t |            |  |                           |  |            |");
		printf("\n\t\t\t\t\t\t\t |            |  |    5).Parent's Feedback   |  |            |");
		printf("\n\t\t\t\t\t\t\t |            |  |___________________________|  |            |");
		printf("\n\t\t\t\t\t\t\t |            |   ___________________________   |            |");
		printf("\n\t\t\t\t\t\t\t |            |  |                           |  |            |");
		printf("\n\t\t\t\t\t\t\t |            |  |       6).Time Table       |  |            |");
		printf("\n\t\t\t\t\t\t\t |____________|  |___________________________|  |____________|");
		printf("\n\t\t\t\t\t\t\t  ___________________________________________________________");
		printf("\n\t\t\t\t\t\t\t |                                                           |");
		printf("\n\t\t\t\t\t\t\t |                   (9). COORDINATOR                        |");
		printf("\n\t\t\t\t\t\t\t |___________________________________________________________|");
	    printf("\n\t\t\t\t\t\t\t ============================================================");
	    printf("\n\t\t\t\t\t\t\t               Press (10) to Return To Login Page");
	    printf("\n\t\t\t\t\t\t\t                       Enter Your Choice:");
	    scanf("%d",&c);
	switch (c)
	{
		case 1:
			A:
			system("cls");
	        printf("\n ____________________________________________________________");
		    printf("\n|                                                            |");
		    printf("\n|=======================MANAGE TEACHERS======================|");
		    printf("\n|____________________________________________________________|");
	        printf("\n             |  (1) ADD TEACHER                 |");
	        printf("\n             |  (2) MODIFY DETAILS OF TEACHERS  |");
	        printf("\n             |  (3) SHOW ALL TEACHERS           |");
	        printf("\n             |  (4) SEARCH INDIVIDUAL TEACHER   |");
	        printf("\n             |  (5) REMOVE TEACHER              |");
	        printf("\n             |  (6) TEACHERS TIME TABLE         |");
	        printf("\n             |__________________________________|");
	        printf("\n=============================================================");
	        printf("\n                      Enter Your Choice:");
	        scanf("%d",&ch);
	    switch (ch)
	    {
	    	case 1:
	    		add_teacher();
	    		break;
	    	case 2:
	    		modify();
	    		break;
	    	case 3:
	    		show_all_teacher();
	    		break;
	    	case 4:
	    		search();
	    		break;
	    	case 5:
	    		delete();
	    		break;
	    	case 6:
	    		timetable();
	    		break;
	    	default:
	    		printf("\a");
	    		goto A;
		}
			break;
		case 2:
	system("cls");
    int c_c,s_c,c;
    printf("\n\t\t\t\t\t\t\t _________________________________________");
    printf("\n\t\t\t\t\t\t\t|                                         |");
    printf("\n\t\t\t\t\t\t\t|===============Select Class==============|");
    printf("\n\t\t\t\t\t\t\t|_________________________________________|\n");
	printf("\n\t\t\t\t\t\t\t   _____________________________________");
	printf("\n\t\t\t\t\t\t\t   =====================================");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 1st|  |Class 2nd|  |Class 3rd|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 4th|  |Class 5th|  |Class 6th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
    printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 7th|  |Class 8th|  |Class 9th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
   	printf("\n\t\t\t\t\t\t\t    ___________________________________");
	printf("\n\t\t\t\t\t\t\t   |                                   |");
	printf("\n\t\t\t\t\t\t\t   |             Class 10th            |");
    printf("\n\t\t\t\t\t\t\t   |___________________________________|");
	printf("\n\t\t\t\t\t\t\t   _____________________________________");
	printf("\n\t\t\t\t\t\t\t   =====================================");
	printf("\n\t\t\t\t\t\t\t     Enter 11 To Return to Login Page");
	printf("\n\t\t\t\t\t\t\t            Enter Your Choice:");
    scanf("%d",&c_c);
	
	switch (c_c)
	{
	case 1:
		So:
		system("cls");
		printf("\n\t\t __________________________________");
		printf("\n\t\t|                                  |");
		printf("\n\t\t|==============Class 1=============|");
		printf("\n\t\t|__________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Add Student Details");
		printf("\n2.Show all Students");
		printf("\n3.Search Student Details");
		printf("\n4.Modify Details Of Students");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			add_student_c_1();
			break;
		case 2:
			show_all_students_c_1();
			break;
		case 3:
			search_st_c_1();
			break;
		case 4:
			modify_students_c_1();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto A;
			break;
		}
		
		break;
	case 2:
		B:
		system("cls");
		printf("\n\t\t __________________________________");
		printf("\n\t\t|                                  |");
		printf("\n\t\t|==============Class 2=============|");
		printf("\n\t\t|__________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Add Student Details");
		printf("\n2.Show all Students");
		printf("\n3.Search Student Details");
		printf("\n4.Modify Details Of Students");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			add_student_c_2();
			break;
		case 2:
			show_all_students_c_2();
			break;
		case 3:
			search_st_c_2();
			break;
		case 4:
			modify_students_c_2();
			break;
		default:
            printf("\n________________");
			printf("\n\aInvalid Choice!..");
			printf("\n________________");
			printf("\nPress Any key to ReEnter..");
			getch();
			goto B;
			break;
		}
		
		break;
	case 3:
		C:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 3=============|");
		printf("\n\t\t|_________________________________|");
        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Add Student Details");
		printf("\n2.Show all Students");
		printf("\n3.Search Student Details");
		printf("\n4.Modify Details Of Students");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			add_student_c_3();
			break;
		case 2:
			show_all_students_c_3();
			break;
		case 3:
			search_st_c_3();
			break;
		case 4:
			modify_students_c_3();
			break;
		default:
			printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
            printf("\nPress Any key to ReEnter");
            getch();
            goto C;
			break;
		}
		
		break;
	case 4:
		D:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|==============Class 4============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Add Student Details");
		printf("\n2.Show all Students");
		printf("\n3.Search Student Details");
		printf("\n4.Modify Details Of Students");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			add_student_c_4();
			break;
		case 2:
			show_all_students_c_4();
			break;
		case 3:
			search_st_c_4();
			break;
		case 4:
			modify_students_c_4();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto D;
			break;
		}
		
		break;
	case 5:
		E:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 5=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Add Student Details");
		printf("\n2.Show all Students");
		printf("\n3.Search Student Details");
		printf("\n4.Modify Details Of Students");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			add_student_c_5();
			break;
		case 2:
			show_all_students_c_5();
			break;
		case 3:
			search_st_c_5();
			break;
		case 4:
			modify_students_c_5();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto E;
			break;
		}
		
		break;
	case 6:
		F:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 6=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Add Student Details");
		printf("\n2.Show all Students");
		printf("\n3.Search Student Details");
		printf("\n4.Modify Details Of Students");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			add_student_c_6();
			break;
		case 2:
			show_all_students_c_6();
			break;
		case 3:
			search_st_c_6();
			break;
		case 4:
			modify_students_c_6();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto F;
			break;
		}
		
		break;
	case 7:
		G:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 7=============|");
		printf("\n\t\t|_________________________________|");
        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Add Student Details");
		printf("\n2.Show all Students");
		printf("\n3.Search Student Details");
		printf("\n4.Modify Details Of Students");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			add_student_c_7();
			break;
		case 2:
			show_all_students_c_7();
			break;
		case 3:
			search_st_c_7();
			break;
		case 4:
			modify_students_c_7();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto G;
			break;
		}
		
		break;
	case 8:
		H:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 8=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Add Student Details");
		printf("\n2.Show all Students");
		printf("\n3.Search Student Details");
		printf("\n4.Modify Details Of Students");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			add_student_c_8();
			break;
		case 2:
			show_all_students_c_8();
			break;
		case 3:
			search_st_c_8();
			break;
		case 4:
			modify_students_c_8();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto H;
			break;
		}
		
		break;
	case 9:
		I:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 9=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Add Student Details");
		printf("\n2.Show all Students");
		printf("\n3.Search Student Details");
		printf("\n4.Modify Details Of Students");
        printf("\n_____________________________________");
		printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			add_student_c_9();
			break;
		case 2:
			show_all_students_c_9();
			break;
		case 3:
			search_st_c_9();
			break;
		case 4:
			modify_students_c_9();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto I;
			break;
		}
		
		break;
	case 10:
		J:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 10============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Add Student Details");
		printf("\n2.Show all Students");
		printf("\n3.Search Student Details");
		printf("\n4.Modify Details Of Students");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			add_student_c_10();
			break;
		case 2:
			show_all_students_c_10();
			break;
		case 3:
			search_st_c_10();
			break;
		case 4:
			modify_students_c_10();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto J;
			break;
		}
		
		break;
	
	default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto So;
		break;
	    }
			break;
		case 3:
			Accounts();
			break;
		case 4:
			Sa:
		    system("cls");
            printf("\n\t\t\t\t\t\t\t _____________________________________________");
			printf("\n\t\t\t\t\t\t\t|                                             |");
			printf("\n\t\t\t\t\t\t\t|===================Events====================|");
			printf("\n\t\t\t\t\t\t\t|_____________________________________________|");
			printf("\n\t\t\t\t\t\t\t         | (1). ADD EVENTS           |");
			printf("\n\t\t\t\t\t\t\t         | (2). SHOW ALL EVENTS      |");
			printf("\n\t\t\t\t\t\t\t         | (3). MODIFY EVENT DETAILS |");
			printf("\n\t\t\t\t\t\t\t         | (4). RETURN               |");
			printf("\n\t\t\t\t\t\t\t         |___________________________|");
			printf("\n\t\t\t\t\t\t\t==============================================");
			printf("\n\t\t\t\t\t\t\t             Enter Your Choice:");
			scanf("%d",&c);
		switch (c)
		{
			case 1:
				add_events();
				break;
			case 2:
				show_events();
				break;
			case 3:
				modify_events();
				break;
			case 4:
				menu_Admin();
			default:
				printf("\a");
				goto Sa;
		}
		case 5:
			system("cls");
			Sm:
			printf("\n\t\t\t\t\t\t\t ______________________________________________________");
			printf("\n\t\t\t\t\t\t\t|                                                      |");
			printf("\n\t\t\t\t\t\t\t|===================Parent Feedback====================|");
			printf("\n\t\t\t\t\t\t\t|______________________________________________________|");
			printf("\n\t\t\t\t\t\t\t             | (1). SHOW FEEDBACK        |");
			printf("\n\t\t\t\t\t\t\t             | (2). DELETE FEEDBACK      |");
			printf("\n\t\t\t\t\t\t\t             |___________________________|");
			printf("\n\t\t\t\t\t\t\t=======================================================");
			printf("\n\t\t\t\t\t\t\t              Press (3) To Return to Menu");
			printf("\n\t\t\t\t\t\t\t                  Enter Your Choice:");
			scanf("%d",&cho);
	              switch(cho)
	              {
	              	case 1:
	              		showfeedback();
	              		break;
	              	case 2:
	              		deleteFeedback();
	              		break;
	              	case 3:
	              		goto Sm;
	              		break;
	              	default:
	              		printf("\a");
	              		goto Sm;
				  }
			break;
		case 6:
			timetable1();
			break;
		case 7:
			exam();
			break;
		case 8:
			fee();
		    break;
		case 9:
			coordinator();
		    break;
		case 10:
		    main();
		    break;	
		default:
			printf("\a");
			menu_Admin();
	}

}
int ateacher()
{
    FILE*fp;
    struct Login Teacher;
	C:
	
	system("cls");
	char username[15];
	char password[12];
            printf("\n\t\t\t\t\t\t\t\t\t _____________________________");
			printf("\n\t\t\t\t\t\t\t\t\t\xdb                             \xdb");
			printf("\n\t\t\t\t\t\t\t\t\t\xdb=======LOGIN-AS-TEACHER======\xdb");
			printf("\n\t\t\t\t\t\t\t\t\t\xdb_____________________________\xdb");
			printf("\n\n\t\t\t\t\t\t\t\t\tUsername:");
			scanf("%s",&username);
			printf("\n\t\t\t\t\t\t\t\t\tPassword:");
			scanf("%s",&password);
			printf("\n\t\t\t\t\t\t\t\t\t______________________________");
			printf("\n\t\t\t\t\t\t\t\t\t==============================");
    fp =fopen("Teacher Log.txt","ab+");
    while(fread(&Teacher, sizeof(Teacher), 1,fp) == 1)
    {
    if(strcmp(username,Teacher.ChangeUser2) == 0)
	  {
    if(strcmp(password,Teacher.ChangePass2) == 0)
	   {
    	printf("\n\t\t\t\t\t\t\t\t\t           Correct..");
    	printf("\n\t\t\t\t\t\t\t\t\t  Enter any key to continue.. ");
        getch();
        menu_Teacher();
	   }
	else
	   {
	   	printf("\a\nInvalid Password");
	   	printf("\nPress any key to ReEnter...");
	   	getch();
	   	goto C;
   	   }
      }
    else
	   {
	   	printf("\a\nInvalid Username");
	  	printf("\nPress any key to ReEnter...");
	   	getch();
	   	goto C;
	   }
	   fclose(fp);
    }
}
int menu_Teacher()
{
	        int cho;
	        
	        system("cls");       
	        printf("\n\t\t\t\t\t\t\t _______________________________________________________");
	        printf("\n\t\t\t\t\t\t\t|                                                       |");
			printf("\n\t\t\t\t\t\t\t|=======================MAIN MENU=======================|");
			printf("\n\t\t\t\t\t\t\t|_______________________________________________________|");
			printf("\n\t\t\t\t\t\t\t          |   (1) SHOW PROFILE               |");
			printf("\n\t\t\t\t\t\t\t          |   (2) SHOW STUDENT               |");
			printf("\n\t\t\t\t\t\t\t          |   (3) CHECK TIME TABLE           |");
			printf("\n\t\t\t\t\t\t\t          |   (4).NOTEBOOK CHECKING SCHEDULE |");
			printf("\n\t\t\t\t\t\t\t          |   (5) SHOW EVENTS                |");
			printf("\n\t\t\t\t\t\t\t          |   (6) RETURN TO LOGIN PAGE       |");
			printf("\n\t\t\t\t\t\t\t          |   (7) EXIT THE PROGRAM           |");
			printf("\n\t\t\t\t\t\t\t          |__________________________________|");
			printf("\n\t\t\t\t\t\t\t_______________________________________________________");
			printf("\n\t\t\t\t\t\t\t=======================================================");
			printf("\n\t\t\t\t\t\t\t                   Enter your choice:");
			scanf("%d",&cho);
    switch (cho)
    {
    	case 1:
    		showprofile();
    		break;
        case 2:
        	showStudentTeacher();
        	break;
        case 3:
        	time_table();
        	break;
        case 4:
            copy_check();
            break;
        case 5:
        	showEvent();
        	break;
		case 6:
			main();
			break;
		case 7:
			return 0;
			break;
		default:
		    printf("\n\aInvalid Choice!..");
		    printf("\nPress Any key to ReEnter..");
		    getch();
		    menu_Teacher();
	}
	return 0;

}
int astudent()
{
    FILE*fp;
    struct Login Student;
    B:
    system("cls");
	char username[15];
	char password[12];	 	
	    printf("\n\t\t\t\t\t\t\t\t\t ___________________________");
    	printf("\n\t\t\t\t\t\t\t\t\t\xdb                           \xdb");
        printf("\n\t\t\t\t\t\t\t\t\t\xdb======LOGIN AS STUDENT=====\xdb");
        printf("\n\t\t\t\t\t\t\t\t\t\xdb___________________________\xdb");
    	printf("\n\n\t\t\t\t\t\t\t\t\tUsername:");
    	scanf("%s",&username);
    	printf("\n\t\t\t\t\t\t\t\t\tPassword:");
    	scanf("%s",&password);
    	printf("\n\t\t\t\t\t\t\t\t\t_____________________________");
        printf("\n\t\t\t\t\t\t\t\t\t=============================");
   fp =fopen("Student Log.txt","ab+");
   while(fread(&Student, sizeof(Student), 1,fp) == 1)
    {
    if(strcmp(username,Student.ChangeUser2) == 0)
	  {
    if(strcmp(password,Student.ChangePass2) == 0)
	   {
    	printf("\n\t\t\t\t\t\t\t\t\t           Correct..");
    	printf("\n\t\t\t\t\t\t\t\t\t  Enter any key to continue.. ");
        getch();
        menu_Student();
	   }
	else
	   {
	   	printf("\a\nInvalid Password");
	   	printf("\nPress any key to ReEnter...");
	   	getch();
	   	goto B;
   	   }
      }
    else
	   {
	   	printf("\a\nInvalid Username");
	  	printf("\nPress any key to ReEnter...");
	   	getch();
	   	goto B;
       }
}
      fclose(fp);
}
int menu_Student()
{
	So:
	system("cls");
    int c_c,s_c;
    printf("\n\t\t\t\t\t\t\t _________________________________________");
    printf("\n\t\t\t\t\t\t\t|                                         |");
    printf("\n\t\t\t\t\t\t\t|===============Select Class==============|");
    printf("\n\t\t\t\t\t\t\t|_________________________________________|\n");
	printf("\n\t\t\t\t\t\t\t   _____________________________________");
	printf("\n\t\t\t\t\t\t\t   =====================================");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 1st|  |Class 2nd|  |Class 3rd|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 4th|  |Class 5th|  |Class 6th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
    printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 7th|  |Class 8th|  |Class 9th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
   	printf("\n\t\t\t\t\t\t\t    ___________________________________");
	printf("\n\t\t\t\t\t\t\t   |                                   |");
	printf("\n\t\t\t\t\t\t\t   |             Class 10th            |");
    printf("\n\t\t\t\t\t\t\t   |___________________________________|");
	printf("\n\t\t\t\t\t\t\t   _____________________________________");
	printf("\n\t\t\t\t\t\t\t   =====================================");
	printf("\n\t\t\t\t\t\t\t     Enter 11 To Return to Login Page");
	printf("\n\t\t\t\t\t\t\t            Enter Your Choice:");
    scanf("%d",&c_c);
	
	switch (c_c)
	{
	case 1:
		A:
		system("cls");
		printf("\n\t\t __________________________________");
		printf("\n\t\t|                                  |");
		printf("\n\t\t|==============Class 1=============|");
		printf("\n\t\t|__________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show all Students");
		printf("\n2.Show Profile");
		printf("\n3.Show Events");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
		    students_c_1();
			break;
		case 2:
			search_c_1();
			break;
		case 3:
			showEvents();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto A;
			break;
		}
		
		break;
	case 2:
		B:
		system("cls");
		printf("\n\t\t __________________________________");
		printf("\n\t\t|                                  |");
		printf("\n\t\t|==============Class 2=============|");
		printf("\n\t\t|__________________________________|");
        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show all Students");
		printf("\n2.Show Profile");
		printf("\n3.Show Events");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			students_c_2();
			break;
		case 2:
			search_c_2();
			break;
		case 3:
			showEvents();
			break;
		default:
            printf("\n________________");
			printf("\n\aInvalid Choice!..");
			printf("\n________________");
			printf("\nPress Any key to ReEnter..");
			getch();
			goto B;
			break;
		}
		
		break;
	case 3:
		C:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 3=============|");
		printf("\n\t\t|_________________________________|");
        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show all Students");
		printf("\n2.Show Profile");
		printf("\n3.Show Events");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			students_c_3();
			break;
		case 2:
			search_c_3();
			break;
		case 3:
			showEvents();
			break;
		default:
			printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
            printf("\nPress Any key to ReEnter");
            getch();
            goto C;
			break;
		}
		
		break;
	case 4:
		D:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|==============Class 4============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show all Students");
		printf("\n2.Show Profile");
		printf("\n3.Show Events");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			students_c_4();
			break;
		case 2:
			search_c_4();
			break;
		case 3:
			showEvents();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto D;
			break;
		}
		
		break;
	case 5:
		E:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 5=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show all Students");
		printf("\n2.Show Profile");
		printf("\n3.Show Events");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			students_c_5();
			break;
		case 2:
			search_c_5();
			break;
		case 3:
			showEvents();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto E;
			break;
		}
		
		break;
	case 6:
		F:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 6=============|");
		printf("\n\t\t|_________________________________|");
        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show all Students");
		printf("\n2.Show Profile");
		printf("\n3.Show Events");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			students_c_6();
			break;
		case 2:
			search_c_6();
			break;
		case 3:
			showEvents();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto F;
			break;
		}
		
		break;
	case 7:
		G:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 7=============|");
		printf("\n\t\t|_________________________________|");
        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show all Students");
		printf("\n2.Show Profile");
		printf("\n3.Show Events");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			students_c_7();
			break;
		case 2:
			search_c_7();
			break;
		case 3:
			showEvents();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto G;
			break;
		}
		
		break;
	case 8:
		H:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 8=============|");
		printf("\n\t\t|_________________________________|");
        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show all Students");
		printf("\n2.Show Profile");
		printf("\n3.Show Events");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			students_c_8();
			break;
		case 2:
			search_c_8();
		    break;
		case 3:
			showEvents();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto H;
			break;
		}
		
		break;
	case 9:
		I:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 9=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show all Students");
		printf("\n2.Show Profile");
		printf("\n3.Show Events");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			students_c_9();
			break;
		case 2:
			search_c_9();
			break;
		case 3:
			showEvents();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto I;
			break;
		}
		
		break;
	case 10:
		J:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 10============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show all Students");
		printf("\n2.Show Profile");
		printf("\n3.Show Events");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			students_c_10();
			break;
		case 2:
			search_c_10();
			break;
		case 3:
			showEvents();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto J;
			break;
		}
		break;
	case 11:
		main();
		break;
	default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto So;
		break;
	    }


}
int parent()
{
    FILE*fp;
    struct Login Parent;
    B:
    system("cls");
	char username[15];
	char password[12];	 	
	    printf("\n\t\t\t\t\t\t\t\t\t __________________________");
    	printf("\n\t\t\t\t\t\t\t\t\t\xdb                          \xdb");
        printf("\n\t\t\t\t\t\t\t\t\t\xdb======LOGIN AS PARENT=====\xdb");
        printf("\n\t\t\t\t\t\t\t\t\t\xdb__________________________\xdb");
    	printf("\n\n\t\t\t\t\t\t\t\t\tUsername:");
    	scanf("%s",&username);
    	printf("\n\t\t\t\t\t\t\t\t\tPassword:");
    	scanf("%s",&password);
    	printf("\n\t\t\t\t\t\t\t\t\t_____________________________");
        printf("\n\t\t\t\t\t\t\t\t\t=============================");
   fp =fopen("Parent Log.txt","ab+");
   while(fread(&Parent, sizeof(Parent), 1,fp) == 1)
    {
    if(strcmp(username,Parent.ChangeUser2) == 0)
	  {
    if(strcmp(password,Parent.ChangePass2) == 0)
	   {
    	printf("\n\t\t\t\t\t\t\t\t\t         Correct..");
    	printf("\n\t\t\t\t\t\t\t\t\t Enter any key to continue..");
        getch();
        menu_Parent();
	   }
	else
	   {
	   	printf("\a\nInvalid Password");
	   	printf("\nPress any key to ReEnter...");
	   	getch();
	   	goto B;
   	   }
      }
    else
	   {
	   	printf("\a\nInvalid Username");
	  	printf("\nPress any key to ReEnter...");
	   	getch();
	   	goto B;
       }
}
      fclose(fp);
}
int menu_Parent()
{
	   int c;
       system("cls");       
	   printf("\n\t\t\t\t\t\t\t ________________________________________________________");
	   printf("\n\t\t\t\t\t\t\t|                                                        |");
	   printf("\n\t\t\t\t\t\t\t|=======================MAIN MENU========================|");
	   printf("\n\t\t\t\t\t\t\t|________________________________________________________|");
	   printf("\n\t\t\t\t\t\t\t            | (1). SHOW YOUR CHILD'S PROFILE |");
	   printf("\n\t\t\t\t\t\t\t            | (2). CONTACT TEACHERS          |");
	   printf("\n\t\t\t\t\t\t\t            | (3). SHOW SCHOOL EVENTS        |");
	   printf("\n\t\t\t\t\t\t\t            | (4). GIVE FEEDBACK TO ADMIN    |");
	   printf("\n\t\t\t\t\t\t\t            | (5). RETURN TO LOGIN PAGE      |");
	   printf("\n\t\t\t\t\t\t\t            |________________________________|");
	   printf("\n\t\t\t\t\t\t\t=========================================================");
	   printf("\n\t\t\t\t\t\t\t                   Enter Your Choice:");
	   scanf("%d",&c);
	switch (c)
	{
		case 1:
            showParent();
			break;
		case 2:
			contact();
	    	break;
	    case 3:
	    	showevents();
	    	break;
	    case 4:
	    	afeedback();
	    	break;
	    case 5:
	    	main();
	    	break;
	    default:
	    	printf("\a");
	    	menu_Parent();
	}
}

//Admin CASE 1(Add TEACHER)----------
void add_teacher()
{
    FILE *fileOne = fopen("teacher.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\aError !");
    }
    struct teacher Info;
    
    system("cls");
    printf("\n _____________________________________________________");
    printf("\n|                                                     |");
    printf("\n|=================Add Details of Teacher==============|");
	printf("\n|_____________________________________________________|");
	printf("\n _________________=====================_______________");
    printf("\n\nEnter Teacher's Name : ");
    getchar();
    gets(Info.first_name);
    printf("\nEnter Teacher's ID : ");
    gets(Info.id);
    printf("\nEnter Teacher's Qualification: ");
    gets(Info.Qualification);
    printf("\nEnter Teacher's Subject : ");
    gets(Info.subject);
    printf("\nEnter Teacher's Contact Number : ");
    gets(Info.phone_number);
    printf("\nEnter Teacher's Rank: ");
    gets(Info.rank);
	printf("\n____________________________________________________");
	printf("\n====================================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\nInformations have been stored sucessfully");
    printf("\nEnter any keys to Goto Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
//Admin CASE 1 (MODIFY TEACHER DETAILS)----------
void modify()
{
    char stname[20];
    FILE *fp;
    struct teacher Info;
    
    system("cls");
    printf("\n _______________________________________________________");
    printf("\n|                                                       |");
    printf("\n|=================Modify Details of Teacher=============|");
	printf("\n|_______________________________________________________|");
    printf("\n\nEnter name of Teacher to modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("teacher.txt","rb+");
    if(fp == NULL){
        printf("\n\aError! in opening file");
        printf("\nPress Any Key To Return to Main Menu....");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\nEnter  Name: ");
            gets(Info.first_name);
            printf("\nEnter Phone Number: ");
            gets(Info.phone_number);
            printf("\nEnter Qualification: ");
            fflush(stdin);
            gets(Info.Qualification);
            printf("\nEnter Subject: ");
            fflush(stdin);
            gets(Info.subject);
			printf("\nEnter Rank:");
			gets(Info.rank);
            printf("\n________________________________________________________");
            printf("\n========================================================");
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
			printf("\nDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to goto menu...");
    getch();
    menu_Admin();
}
//Admin CASE 1(SHOW ALL TEACHERS)--------
void show_all_teacher()
{
    FILE *fp;
    struct teacher Info;
    
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|==================Show All of Teacher================|");
	printf("\n\t\t\t|_____________________________________________________|\n");
	printf("\n _______________________________________________________________________________________");
    printf("\n|Teacher Name           |Qualification  |Subject        |Designation    |Phone Number   |");  
    printf("\n|_______________________|_______________|_______________|_______________|_______________|");
   	printf("\n                                 ==================");
    fp = fopen("teacher.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    printf("\n _______________________________________________________________________________________");
    printf("\n|%s       \t|%s\t|%s\t|%s\t|%s\t|",Info.first_name,Info.Qualification,Info.subject,Info.rank,Info.phone_number);
	printf("\n|_______________________|_______________|_______________|_______________|_______________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Admin();
}
//Admin CASE 1(SEARCH TEACHERS)-------
void search()
{
    FILE *fp;
    struct teacher Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t __________________________________________");
	printf("\n\t\t\t|                                          |");
    printf("\n\t\t\t|===============Search Teacher=============|");
	printf("\n\t\t\t|__________________________________________|");
	printf("\n\n\t\tEnter Name of Teacher: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("teacher.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To Return toMain Menu");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
			printf("\n\n_____________________________________________");
			printf("\n=============================================");
            printf("\n\tFirst Name: %s",Info.first_name);
            printf("\n\tID: %s",Info.id);
            printf("\n\tQualification: %s",Info.Qualification);
            printf("\n\tSubject: %s",Info.subject);
			printf("\n\tPhone Number:%s",Info.phone_number);
			printf("\n\tRank: %s",Info.rank);
			printf("\n______________________________________________");
			printf("\n==============================================");
        }
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Goto menu.");
    getch();
    menu_Admin();
}
//Admin CASE 1(REMOVE TEACHER)-------
void delete()
{
    char stname[20];
    FILE *fp,*ft;
    struct teacher Info;
    system("cls");
    printf("\n ______________________________________________________");
    printf("\n|                                                      |");
    printf("\n|===============Delete Details of Teacher==============|");
	printf("\n|______________________________________________________|");
    printf("\n\n_____________________________________");
    printf("\n =================================== ");
    printf("\n\nEnter name of Teacher to be Deleted: ");
	
    fflush(stdin);
    gets(stname);
    printf("\n\n ___________________________________");
    printf("\n=====================================");
    fp = fopen("teacher.txt","rb+");
    if(fp == NULL){
        printf("\n\aError opening file");
        printf("\nPress Any key to return to Main Menu");
        getch();
        menu_Admin();
    }
    ft = fopen("temp.txt","wb+");
    if(ft == NULL){
        printf("\n\aError opening file");
        printf("\nPress Any Key To return to Main Menu");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        if(strcmp(stname,Info.first_name)!=0)
            fwrite(&Info,sizeof(Info),1,ft);
    }
    fclose(fp);
    fclose(ft);
    remove("teacher.txt");
    rename("temp.txt","teacher.txt");
    printf("\n\nTeacher Record Deleted...");
    printf("\n\n\t\t\tPress any key to return Main Menu.");
    getch();
    menu_Admin();
}
//Admin CASE 1 (TIME TABLE OF TEACHER)------
int timetable()
{
	int ch;
	B:
	       	system("cls");
        	printf("\n _______________________________________________");
        	printf("\n|                                               |");
        	printf("\n|===============TEACHER TIME TABLE==============|");
        	printf("\n|_______________________________________________|");
        	printf("\n1). NOTEBOOK CHECKING SCHEDULE");
        	printf("\n2). TIME TABLE OF PERIODS");
        	printf("\n________________________________________________");
        	printf("\n================================================");
        	printf("\n         Press (3) To Return to Menu");
        	printf("\n              Enter Your Choice:");
        	scanf("%d",&ch);
        switch (ch)
        {
        	case 1:
        	    copycheck();
        		break;
        	case 2:
                periods();
        		break;
        	case 3:
        		menu_Admin();
        		break;
            default:
		    printf("\n\aInvalid Choice!..");
		    printf("\nPress Any key to ReEnter..");
		    getch();
		    goto B;
		}

}
int copycheck()
{
	int choice;
     	system("cls");
       	printf("\n _______________________________________________________");
       	printf("\n|                                                       |");
       	printf("\n|===============NOTEBOOK CHECKING SCHEDULE==============|");
       	printf("\n|_______________________________________________________|");
       	printf("\n1). ADD DETAILS OF SCHEDULE");
       	printf("\n2). MODIFY DETAILS OF SCHEDULE");
       	printf("\n3). DELETE SCHEDULE OF A TEACHER");
       	printf("\n4). SHOW SCHEDULE OF ALL TEACHERS");
       	printf("\n____________________________________________________");
       	printf("\n====================================================");
       	printf("\n            Press (5) to Return to Menu");
       	printf("\n                 Enter your Choice:");
       	scanf("%d",&choice);
    switch (choice)
    {
    	case 1:
    		add_schedule();
    		break;
    	case 2:
    		modify_schedule();
    		break;
    	case 3:
    		delete_schedule();
    		break;
    	case 4:
    		show_schedule();
    		break;
    	case 5:
    		menu_Admin();
    		break;
        default:
	    printf("\n\aInvalid Choice!..");
	    printf("\nPress Any key to ReEnter..");
	    getch();
	    copycheck();	
   	}
}
int add_schedule()
{
    FILE *fp = fopen("copychecking.txt", "ab+");
    if (fp == NULL)
    {
        printf("\n\aError !");
    }
    struct teacher Info;
    
    system("cls");
    printf("\n ________________________________________________________________________________");
    printf("\n|                                                                                |");
    printf("\n|================Add Details of Teachers Notebook Checking Schedule==============|");
	printf("\n|________________________________________________________________________________|");
	printf("\n __________________==============================================________________");

    printf("\n\nEnter Teacher's Name: ");
    getchar();
    gets(Info.first_name);
    printf("\nEnter Teacher's Subject: ");
    gets(Info.subject);
	printf("\nFirst Notebook Checking Class: ");
    gets(Info.copycheckclass1);
    printf("\nFirst Class Notebook Checking Day: ");
    gets(Info.copycheckday1);
    printf("\nSecond Notebook Checking Class: ");
    gets(Info.copycheckclass2);
    printf("\nSecond Class Notebook Checking Day: ");
    gets(Info.copycheckday2);
    printf("\nThird Notebook Checking Class: ");
    gets(Info.copycheckclass3);
    printf("\nThird Class Notebook Checking Day: ");
    gets(Info.copycheckday3);
    printf("\n_________________________________________________________________________________");
    printf("\n=================================================================================");
    fwrite(&Info,sizeof(Info),1,fp);
    printf("\nDetails have been stored sucessfully");
    printf("\nEnter any keys to Return to Main Menu.......");
    getch();
    fclose(fp);
    menu_Admin();
}
int modify_schedule()
{
    char stname[20];
    FILE *fp;
    struct teacher Info;
    system("cls");
    printf("\n __________________________________________________________________________");
    printf("\n|                                                                          |");
    printf("\n|=================Modify Details of Notebook Checking Schedule=============|");
	printf("\n|__________________________________________________________________________|");
    printf("\n\nEnter name of Teacher to modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("copychecking.txt","rb+");
    if(fp == NULL){
        printf("\n\aError! in opening file");
        printf("\nPress Any Key To Return to Main Menu....");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
        if(strcmp(stname,Info.first_name) == 0){
    	printf("\nFirst Notebook Checking Class: ");
        gets(Info.copycheckclass1);
        printf("\nFirst Class Notebook Checking Day: ");
        gets(Info.copycheckday1);
        printf("\nSecond Notebook Checking Class: ");
        gets(Info.copycheckclass2);
        printf("\nSecond Class Notebook Checking Day: ");
        gets(Info.copycheckday2);
        printf("\nThird Notebook Checking Class: ");
        gets(Info.copycheckclass3);
        printf("\nThird Class Notebook Checking Day: ");
        gets(Info.copycheckday3);
        printf("\n______________________________________________________________________");
        printf("\n======================================================================");
        fseek(fp ,-sizeof(Info),SEEK_CUR);
        fwrite(&Info,sizeof(Info),1,fp);
		printf("\nDETIALS MODIFIED.");
		break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
int delete_schedule()
{
    char stname[20];
    FILE *fp,*ft;
    struct teacher Info;
    system("cls");
    printf("\n _________________________________________________________________________");
    printf("\n|                                                                         |");
    printf("\n|===============Delete Details of Notebook Checking Schedule==============|");
	printf("\n|_________________________________________________________________________|");
    printf("\n\n________________________________________________________________________");
    printf("\n ========================================================================= ");
    printf("\n\nEnter name of Teacher to be Deleted: ");
    fflush(stdin);
    gets(stname);
    printf("\n\n _______________________________________________________________________");
    printf("\n==========================================================================");
    fp = fopen("copychecking.txt","rb+");
    if(fp == NULL){
        printf("\n\aError opening file");
        printf("\nPress Any key to return to Main Menu");
        getch();
        menu_Admin();
    }
    ft = fopen("temporary1.txt","wb+");
    if(ft == NULL){
        printf("\n\aError opening file");
        printf("\nPress Any Key To return to Main Menu");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        if(strcmp(stname,Info.first_name)!=0)
            fwrite(&Info,sizeof(Info),1,ft);
    }
    fclose(fp);
    fclose(ft);
    remove("copychecking.txt");
    rename("temporary1.txt","copychecking.txt");
    printf("\n\nTeacher Schedule Deleted...");
    printf("\n\n\t\t\tPress any key to return Main Menu.");
    getch();
    menu_Admin();	
}
int show_schedule()
{
	    FILE *fp;
    struct teacher Info;
    
    system("cls");
    printf("\n\t\t\t ________________________________________________________________________________");
    printf("\n\t\t\t|                                                                                |");
    printf("\n\t\t\t|==================Show All of Teacher Notebook Checking Schedule================|");
	printf("\n\t\t\t|________________________________________________________________________________|");
	printf("\n\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Teacher                |Teacher        |Copy Checking  |Copy Checking  |Copy Checking  |Copy Checking  |Copy Checking  |Copy Checking  |");  
    printf("\n|Name                   |Subject        |Class          |Day            |Class          |Day            |Class          |Day            |");
    printf("\n|_______________________|_______________|_______________|_______________|_______________|_______________|_______________|_______________|");
   	printf("\n                                                       ==================");
    fp = fopen("copychecking.txt","rb+");
    if(fp == NULL){
        printf("\n\a\tError  in opening file.");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|%s       \t|%s\t|%s\t|%s\t|%s\t|%s\t|%s \t|%s\t|",Info.first_name,Info.subject,Info.copycheckclass1,Info.copycheckday1,Info.copycheckclass2,Info.copycheckday2,Info.copycheckclass3,Info.copycheckday3);
	printf("\n|_______________________|_______________|_______________|_______________|_______________|_______________|_______________|_______________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Admin();
}
int periods()
{
	int choice;
    	system("cls");
      	printf("\n __________________________________________________");
       	printf("\n|                                                  |");
        printf("\n|===============TIME TABLE OF PERIODS==============|");
       	printf("\n|__________________________________________________|");
       	printf("\n1). ADD DETAILS OF TIME TABLE");
       	printf("\n2). MODIFY DETAILS OF TIME TABLE");
       	printf("\n3). DELETE TIME TABLE OF A TEACHER");
       	printf("\n4). SHOW TIME TABLE OF ALL TEACHERS");
       	printf("\n____________________________________________________");
       	printf("\n====================================================");
       	printf("\nEnter your Choice:");
       	scanf("%d",&choice);
    switch (choice)
    {
    	case 1:
    		add_time();
    		break;
    	case 2:
    		modify_time();
    		break;
    	case 3:
    		delete_time();
    		break;
    	case 4:
    		show_time();
    		break;
        default:
	    printf("\n\aInvalid Choice!..");
	    printf("\nPress Any key to ReEnter..");
	    getch();
	    periods();	
   	}
}
int add_time()
{
	int name;
    FILE *fp = fopen("timetable.txt", "ab+");
    if (fp == NULL)
    {
        printf("\n\aError !");
    }
    struct teacher Info;
    
    system("cls");
    printf("\n ________________________________________________________________");
    printf("\n|                                                                |");
    printf("\n|================Add Details of Teachers Time Table==============|");
	printf("\n|________________________________________________________________|");
	printf("\n ________________==================================______________");

    printf("\n\nEnter Teacher's Name: ");
    getchar();
    gets(Info.first_name);
    printf("\nEnter Teacher's Subject: ");
    gets(Info.subject);
	printf("\nClass in Period 1: ");
    gets(Info.period1);
	printf("\nClass in Period 2: ");
    gets(Info.period2);
   	printf("\nClass in Period 3: ");
    gets(Info.period3);
   	printf("\nClass in Period 4: ");
    gets(Info.period4);
   	printf("\nClass in Period 5: ");
    gets(Info.period5);
   	printf("\nClass in Period 6: ");
    gets(Info.period6);
    printf("\n____________________________________________________________________________");
    printf("\n============================================================================");
    fwrite(&Info,sizeof(Info),1,fp);
    printf("\nDetails have been stored sucessfully");
    printf("\nEnter any keys to Return to Main Menu.......");
    getch();
    fclose(fp);
    menu_Admin();
}
int modify_time()
{
    char stname[20];
    FILE *fp;
    struct teacher Info;
    system("cls");
    printf("\n __________________________________________________________");
    printf("\n|                                                          |");
    printf("\n|=================Modify Details of Time Table=============|");
	printf("\n|__________________________________________________________|");
    printf("\n\nEnter name of Teacher to modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("timetable.txt","rb+");
    if(fp == NULL){
        printf("\n\aError! in opening file");
        printf("\nPress Any Key To Return to Main Menu....");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
        if(strcmp(stname,Info.first_name) == 0){
	    printf("\nClass in Period 1: ");
        gets(Info.period1);
	    printf("\nClass in Period 2: ");
        gets(Info.period2);
   	    printf("\nClass in Period 3: ");
        gets(Info.period3);
   	    printf("\nClass in Period 4: ");
        gets(Info.period4);
   	    printf("\nClass in Period 5: ");
        gets(Info.period5);
   	    printf("\nClass in Period 6: ");
        gets(Info.period6);
        printf("\n________________________________________________________");
        printf("\n========================================================");
        fseek(fp ,-sizeof(Info),SEEK_CUR);
        fwrite(&Info,sizeof(Info),1,fp);
		printf("\nTIME TABLE MODIFIED.");
		break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
int delete_time()
{
    char stname[20];
    FILE *fp,*ft;
    struct teacher Info;
    system("cls");
    printf("\n _________________________________________________________");
    printf("\n|                                                         |");
    printf("\n|================Delete Time Table Of Teacher=============|");
	printf("\n|_________________________________________________________|");
    printf("\n\n_____________________________________");
    printf("\n =================================== ");
    printf("\n\nEnter name of Teacher to be Deleted: ");
    fflush(stdin);
    gets(stname);
    printf("\n\n ___________________________________");
    printf("\n=====================================");
    fp = fopen("timetable.txt","rb+");
    if(fp == NULL){
        printf("\n\aError opening file");
        printf("\nPress Any key to return to Main Menu");
        getch();
        menu_Admin();
    }
    ft = fopen("temporary2.txt","wb+");
    if(ft == NULL){
        printf("\n\aError opening file");
        printf("\nPress Any Key To return to Main Menu");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        if(strcmp(stname,Info.first_name)!=0)
            fwrite(&Info,sizeof(Info),1,ft);
    }
    fclose(fp);
    fclose(ft);
    remove("timetable.txt");
    rename("temporary2.txt","timetable.txt");
    printf("\n\nTeacher Time Table Deleted...");
    printf("\n\n\t\t\tPress any key to return Main Menu.");
    getch();
    menu_Admin();	
}
int show_time()
{
	    FILE *fp;
    struct teacher Info;
    
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|==================Show All of Teacher Time Table==============|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Teacher Name           |Subject        |Period 1       |Period 2       |Period 3       |Period 4       |Period 5       |Period 6       |");  
    printf("\n|_______________________|_______________|_______________|_______________|_______________|_______________|_______________|_______________|");
   	printf("\n                                                       ==================");
    fp = fopen("timetable.txt","rb+");
    if(fp == NULL){
        printf("\n\a\tError  in opening file.");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1)
	{
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|%s       \t|%s\t|%s\t|%s\t|%s\t|%s\t|%s\t|%s\t|",Info.first_name,Info.subject,Info.period1,Info.period2,Info.period3,Info.period4,Info.period5,Info.period6);
	printf("\n|_______________________|_______________|_______________|_______________|_______________|_______________|_______________|_______________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Admin();
}
//Admin CASE 2 (STUDENTS)
void add_student_c_1()
{
    FILE *fileOne = fopen("student_c_1.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|==================Add Details of Student==============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.first_name);
	printf("\n\t\t\tEnter Students's Father Name : ");
    gets(Info.father_name);
    printf("\n\t\t\tEnter Students's Roll no : ");
    gets(Info.roll_no);
    printf("\n\t\t\tEnter Student's Class: ");
    gets(Info.class);
    printf("\n\t\t\tEnter Student's Group(Science/Arts) : ");
    gets(Info.group);
    printf("\n\t\t\tEnter Student's Gender : ");
    gets(Info.gender);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void add_student_c_2()
{
    FILE *fileOne = fopen("student_c_2.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|==================Add Details of Student==============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.first_name);
	printf("\n\t\t\tEnter Students's Father Name : ");
    gets(Info.father_name);
    printf("\n\t\t\tEnter Students's Roll no : ");
    gets(Info.roll_no);
    printf("\n\t\t\tEnter Student's Class: ");
    gets(Info.class);
    printf("\n\t\t\tEnter Student's Group(Science/Arts) : ");
    gets(Info.group);
    printf("\n\t\t\tEnter Student's Gender : ");
    gets(Info.gender);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void add_student_c_3()
{
    FILE *fileOne = fopen("student_c_3.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|==================Add Details of Student==============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.first_name);
	printf("\n\t\t\tEnter Students's Father Name : ");
    gets(Info.father_name);
    printf("\n\t\t\tEnter Students's Roll no : ");
    gets(Info.roll_no);
    printf("\n\t\t\tEnter Student's Class: ");
    gets(Info.class);
    printf("\n\t\t\tEnter Student's Group(Science/Arts) : ");
    gets(Info.group);
    printf("\n\t\t\tEnter Student's Gender : ");
    gets(Info.gender);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void add_student_c_4()
{
    FILE *fileOne = fopen("student_c_4.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|==================Add Details of Student==============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.first_name);
	printf("\n\t\t\tEnter Students's Father Name : ");
    gets(Info.father_name);
    printf("\n\t\t\tEnter Students's Roll no : ");
    gets(Info.roll_no);
    printf("\n\t\t\tEnter Student's Class: ");
    gets(Info.class);
    printf("\n\t\t\tEnter Student's Group(Science/Arts) : ");
    gets(Info.group);
    printf("\n\t\t\tEnter Student's Gender : ");
    gets(Info.gender);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void add_student_c_5()
{
    FILE *fileOne = fopen("student_c_5.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|==================Add Details of Student==============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.first_name);
	printf("\n\t\t\tEnter Students's Father Name : ");
    gets(Info.father_name);
    printf("\n\t\t\tEnter Students's Roll no : ");
    gets(Info.roll_no);
    printf("\n\t\t\tEnter Student's Class: ");
    gets(Info.class);
    printf("\n\t\t\tEnter Student's Group(Science/Arts) : ");
    gets(Info.group);
    printf("\n\t\t\tEnter Student's Gender : ");
    gets(Info.gender);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void add_student_c_6()
{
    FILE *fileOne = fopen("student_c_6.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|==================Add Details of Student==============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.first_name);
	printf("\n\t\t\tEnter Students's Father Name : ");
    gets(Info.father_name);
    printf("\n\t\t\tEnter Students's Roll no : ");
    gets(Info.roll_no);
    printf("\n\t\t\tEnter Student's Class: ");
    gets(Info.class);
    printf("\n\t\t\tEnter Student's Group(Science/Arts) : ");
    gets(Info.group);
    printf("\n\t\t\tEnter Student's Gender : ");
    gets(Info.gender);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void add_student_c_7()
{
    FILE *fileOne = fopen("student_c_7.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|==================Add Details of Student==============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.first_name);
	printf("\n\t\t\tEnter Students's Father Name : ");
    gets(Info.father_name);
    printf("\n\t\t\tEnter Students's Roll no : ");
    gets(Info.roll_no);
    printf("\n\t\t\tEnter Student's Class: ");
    gets(Info.class);
    printf("\n\t\t\tEnter Student's Group(Science/Arts) : ");
    gets(Info.group);
    printf("\n\t\t\tEnter Student's Gender : ");
    gets(Info.gender);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void add_student_c_8()
{
    FILE *fileOne = fopen("student_c_8.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|==================Add Details of Student==============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.first_name);
	printf("\n\t\t\tEnter Students's Father Name : ");
    gets(Info.father_name);
    printf("\n\t\t\tEnter Students's Roll no : ");
    gets(Info.roll_no);
    printf("\n\t\t\tEnter Student's Class: ");
    gets(Info.class);
    printf("\n\t\t\tEnter Student's Group(Science/Arts) : ");
    gets(Info.group);
    printf("\n\t\t\tEnter Student's Gender : ");
    gets(Info.gender);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void add_student_c_9()
{
    FILE *fileOne = fopen("student_c_9.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|==================Add Details of Student==============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.first_name);
	printf("\n\t\t\tEnter Students's Father Name : ");
    gets(Info.father_name);
    printf("\n\t\t\tEnter Students's Roll no : ");
    gets(Info.roll_no);
    printf("\n\t\t\tEnter Student's Class: ");
    gets(Info.class);
    printf("\n\t\t\tEnter Student's Group(Science/Arts) : ");
    gets(Info.group);
    printf("\n\t\t\tEnter Student's Gender : ");
    gets(Info.gender);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void add_student_c_10()
{
    FILE *fileOne = fopen("student_c_10.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|==================Add Details of Student==============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.first_name);
	printf("\n\t\t\tEnter Students's Father Name : ");
    gets(Info.father_name);
    printf("\n\t\t\tEnter Students's Roll no : ");
    gets(Info.roll_no);
    printf("\n\t\t\tEnter Student's Class: ");
    gets(Info.class);
    printf("\n\t\t\tEnter Student's Group(Science/Arts) : ");
    gets(Info.group);
    printf("\n\t\t\tEnter Student's Gender : ");
    gets(Info.gender);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void search_st_c_1()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_1.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to return to Main Menu..");
    getch();
    menu_Admin();
}
void search_st_c_2()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_2.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key to return to Main Menu");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to return to Main Menu..");
    getch();
    menu_Admin();
}
void search_st_c_3()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_3.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
void search_st_c_4()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_4.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
void search_st_c_5()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_5.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Admin();
}
void search_st_c_6()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_6.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Admin();
}
void search_st_c_7()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_7.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return To Main Menu..");
    getch();
    menu_Admin();
}
void search_st_c_8()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_8.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Admin();
}
void search_st_c_9()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_9.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Admin();
}
void search_st_c_10()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_10.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Admin();
}
void show_all_students_c_1()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n _________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_1.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
void show_all_students_c_2()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n _________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_2.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Admin();
}
void show_all_students_c_3()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n _________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_3.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
     	printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return To Main Menu.");
    getch();
    menu_Admin();
}
void show_all_students_c_4()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n _________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_4.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        	printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
void show_all_students_c_5()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n __________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_5.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
void show_all_students_c_6()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n __________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_6.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
       	printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
void show_all_students_c_7()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n __________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_7.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
       	printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
void show_all_students_c_8()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n __________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_8.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
       	printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return To Main Menu.");
    getch();
    menu_Admin();
}
void show_all_students_c_9()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n __________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_9.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
void show_all_students_c_10()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n ______________________________________________________________________");
    printf("\n|Name of Students      |Father's Name  |Roll No        |Class  |Group  |");  
    printf("\n|______________________|_______________|_______________|_______|_______|");
    printf("\n                                       ============");
    fp = fopen("student_c_10.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
       	printf("\n ______________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s|",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|______________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
void modify_students_c_1()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|================Modify Details of Students============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_1.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\n\t\t\tEnter Student's Name : ");
			getchar();
			gets(Info.first_name);
			printf("\n\t\t\tEnter Students's Father Name : ");
			gets(Info.father_name);
			printf("\n\t\t\tEnter Students's Roll no : ");
			gets(Info.roll_no);
			printf("\t\t\tEnter Student's Class: ");
			gets(Info.class);
			printf("\t\t\tEnter Student's Group(Science/Arts) : ");
			gets(Info.group);
			printf("\t\t\tEnter Student's Gender : ");
			gets(Info.gender);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
			printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modify_students_c_2()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|================Modify Details of Students============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_2.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\t\t\tEnter Student's Name : ");
			getchar();
			gets(Info.first_name);
			printf("\n\t\t\tEnter Students's Father Name : ");
			gets(Info.father_name);
			printf("\n\t\t\tEnter Students's Roll no : ");
			gets(Info.roll_no);
			printf("\t\t\tEnter Student's Class: ");
			gets(Info.class);
			printf("\t\t\tEnter Student's Group(Science/Arts) : ");
			gets(Info.group);
			printf("\t\t\tEnter Student's Gender : ");
			gets(Info.gender);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modify_students_c_3()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|================Modify Details of Students============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_3.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
	
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\t\t\tEnter Student's Name : ");
			getchar();
			gets(Info.first_name);
			printf("\n\t\t\tEnter Students's Father Name : ");
			gets(Info.father_name);
			printf("\n\t\t\tEnter Students's Roll no : ");
			gets(Info.roll_no);
			printf("\t\t\tEnter Student's Class: ");
			gets(Info.class);
			printf("\t\t\tEnter Student's Group(Science/Arts) : ");
			gets(Info.group);
			printf("\t\t\tEnter Student's Gender : ");
			gets(Info.gender);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modify_students_c_4()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|================Modify Details of Students============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_4.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\t\t\tEnter Student's Name : ");
			getchar();
			gets(Info.first_name);
			printf("\n\t\t\tEnter Students's Father Name : ");
			gets(Info.father_name);
			printf("\n\t\t\tEnter Students's Roll no : ");
			gets(Info.roll_no);
			printf("\t\t\tEnter Student's Class: ");
			gets(Info.class);
			printf("\t\t\tEnter Student's Group(Science/Arts) : ");
			gets(Info.group);
			printf("\t\t\tEnter Student's Gender : ");
			gets(Info.gender);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modify_students_c_5()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|================Modify Details of Students============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_5.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
	
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\t\t\tEnter Student's Name : ");
			getchar();
			gets(Info.first_name);
			printf("\n\t\t\tEnter Students's Father Name : ");
			gets(Info.father_name);
			printf("\n\t\t\tEnter Students's Roll no : ");
			gets(Info.roll_no);
			printf("\t\t\tEnter Student's Class: ");
			gets(Info.class);
			printf("\t\t\tEnter Student's Group(Science/Arts) : ");
			gets(Info.group);
			printf("\t\t\tEnter Student's Gender : ");
			gets(Info.gender);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modify_students_c_6()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|================Modify Details of Students============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_6.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
	
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\t\t\tEnter Student's Name : ");
			getchar();
			gets(Info.first_name);
			printf("\n\t\t\tEnter Students's Father Name : ");
			gets(Info.father_name);
			printf("\n\t\t\tEnter Students's Roll no : ");
			gets(Info.roll_no);
			printf("\t\t\tEnter Student's Class: ");
			gets(Info.class);
			printf("\t\t\tEnter Student's Group(Science/Arts) : ");
			gets(Info.group);
			printf("\t\t\tEnter Student's Gender : ");
			gets(Info.gender);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modify_students_c_7()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|================Modify Details of Students============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_7.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\t\t\tEnter Student's Name : ");
			getchar();
			gets(Info.first_name);
			printf("\n\t\t\tEnter Students's Father Name : ");
			gets(Info.father_name);
			printf("\n\t\t\tEnter Students's Roll no : ");
			gets(Info.roll_no);
			printf("\t\t\tEnter Student's Class: ");
			gets(Info.class);
			printf("\t\t\tEnter Student's Group(Science/Arts) : ");
			gets(Info.group);
			printf("\t\t\tEnter Student's Gender : ");
			gets(Info.gender);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modify_students_c_8()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|================Modify Details of Students============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_8.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\t\t\tEnter Student's Name : ");
			getchar();
			gets(Info.first_name);
			printf("\n\t\t\tEnter Students's Father Name : ");
			gets(Info.father_name);
			printf("\n\t\t\tEnter Students's Roll no : ");
			gets(Info.roll_no);
			printf("\t\t\tEnter Student's Class: ");
			gets(Info.class);
			printf("\t\t\tEnter Student's Group(Science/Arts) : ");
			gets(Info.group);
			printf("\t\t\tEnter Student's Gender : ");
			gets(Info.gender);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modify_students_c_9()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|================Modify Details of Students============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_9.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\t\t\tEnter Student's Name : ");
			getchar();
			gets(Info.first_name);
			printf("\n\t\t\tEnter Students's Father Name : ");
			gets(Info.father_name);
			printf("\n\t\t\tEnter Students's Roll no : ");
			gets(Info.roll_no);
			printf("\t\t\tEnter Student's Class: ");
			gets(Info.class);
			printf("\t\t\tEnter Student's Group(Science/Arts) : ");
			gets(Info.group);
			printf("\t\t\tEnter Student's Gender : ");
			gets(Info.gender);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modify_students_c_10()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|================Modify Details of Students============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_10.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\t\t\tEnter Student's Name : ");
			getchar();
			gets(Info.first_name);
			printf("\n\t\t\tEnter Students's Father Name : ");
			gets(Info.father_name);
			printf("\n\t\t\tEnter Students's Roll no : ");
			gets(Info.roll_no);
			printf("\t\t\tEnter Student's Class: ");
			gets(Info.class);
			printf("\t\t\tEnter Student's Group(Science/Arts) : ");
			gets(Info.group);
			printf("\t\t\tEnter Student's Gender : ");
			gets(Info.gender);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
//Admin Case 3 (ACCOUNTS)---
int Accounts()
{
	int cho;
	        system("cls");
        	printf("\n _________________________________________");
        	printf("\n|                                         |");
        	printf("\n|==============Modify Account=============|");
        	printf("\n|_________________________________________|");
        	printf("\n1). MODIFY ADMIN ACCOUNT");
        	printf("\n2). MODIFY TEACHER ACCOUNT");
        	printf("\n3). MODIFY STUDENT ACCOUNT");
        	printf("\n4). MODIFY PARENT ACCOUNT");
        	printf("\n__________________________________________");
        	printf("\n==========================================");
        	printf("\n      Press (5) To Return to Menu");
        	printf("\n           Enter Your Choice:");
        	scanf("%d",&cho);
        switch (cho)
         {
		    case 1:
		    	adminAccount();
                  break;
            case 2:
            	teacherAccount();
                  break;
            case 3:
            	studentAccount();
            	  break;
            case 4:
            	parentAccount();
            	  break;
            case 5:
            	menu_Admin();
            	break;
            default:
            	printf("\a");
            	Accounts();
           }
}
int adminAccount()
{
	FILE*fp = fopen("Admin Login.txt","ab+");
	FILE*ft = fopen("Admin Log.txt","wb+");
    char username[20];
    char password[20];
	struct Login Admin;
	D:
    system("cls");
    printf("\n __________________________________");
	printf("\n|---CHANGE USERNAME AND PASSWORD---|");
	printf("\n|NEW USERNAME:");
	scanf("%s",&Admin.ChangeUser);
	printf("\n|NEW PASSWORD:");
	scanf("%s",&Admin.ChangePass);
	printf("\n|________________");
	fwrite(&Admin, sizeof(Admin), 1, ft);
	remove("Admin Login.txt");
	rename("Admin log.txt","Admin Login.txt");
	printf("\n\nChanged Username & Password Sucessfully");
	printf("\nPress any key to Return to Login Page...");
	getch();
	fclose(fp);
	fclose(ft);
	main();
}
int teacherAccount()
{
	FILE*fp = fopen("Teacher Login.txt","ab+");
	FILE*ft = fopen("Teacher Log.txt","wb+");
	struct Login Teacher;
	char username[20];
	char password[20];
	C:
	system("cls");
	printf("\n ________________________________________");
	printf("\n|                                        |");
	printf("\n|------CHANGE USERNAME AND PASSWORD------|");
	printf("\n|________________________________________|");
	printf("\n\n NEW USERNAME:");
	scanf("%s",&Teacher.ChangeUser2);
	printf("\n NEW PASSWORD:");
	scanf("%s",&Teacher.ChangePass2);
	printf("\n_________________________________________");
    printf("\n=========================================");
	fwrite(&Teacher,sizeof(Teacher),1,ft);
	remove("Teacher Login.txt");
	rename("Teacher Log.txt","Teacher Login.txt");
	printf("\n\nChanged Username & Password Sucessfully");
	printf("\nPress any key to Return to Login Page...");
	getch();
	fclose(fp);
	fclose(ft);
	main();
}
int studentAccount()
{
	FILE*fp = fopen("Student Login.txt","ab+");
	FILE*ft = fopen("Student Log.txt","wb+");
	struct Login Student;
	char username[20];
	char password[20];
	C:
	system("cls");
	printf("\n ________________________________________");
	printf("\n|                                        |");
	printf("\n|------CHANGE USERNAME AND PASSWORD------|");
	printf("\n|________________________________________|");
	printf("\n\n NEW USERNAME:");
	scanf("%s",&Student.ChangeUser2);
	printf("\n NEW PASSWORD:");
	scanf("%s",&Student.ChangePass2);
	printf("\n_________________________________________");
    printf("\n=========================================");
	fwrite(&Student,sizeof(Student),1,ft);
	remove("Student Login.txt");
	rename("Student Log.txt","Student Login.txt");
	printf("\n\nChanged Username & Password Sucessfully");
	printf("\nPress any key to Return to Login Page...");
	getch();
	fclose(fp);
	fclose(ft);
	main();
}
int parentAccount()
{
	FILE*fp = fopen("Parent Login.txt","ab+");
	FILE*ft = fopen("Parent Log.txt","wb+");
	struct Login Parent;
	char username[20];
	char password[20];
	C:
	system("cls");
	printf("\n ________________________________________");
	printf("\n|                                        |");
	printf("\n|------CHANGE USERNAME AND PASSWORD------|");
	printf("\n|________________________________________|");
	printf("\n\n NEW USERNAME:");
	scanf("%s",&Parent.ChangeUser2);
	printf("\n NEW PASSWORD:");
	scanf("%s",&Parent.ChangePass2);
	printf("\n_________________________________________");
    printf("\n=========================================");
	fwrite(&Parent,sizeof(Parent),1,ft);
	remove("Parent Login.txt");
	rename("Parent Log.txt","Parent Login.txt");
	printf("\n\nChanged Username & Password Sucessfully");
	printf("\nPress any key to Return to Login Page...");
	getch();
	fclose(fp);
	fclose(ft);
	main();
}
//Admin Case 4 (EVENTS)
void add_events()
{
    FILE *fileOne = fopen("Events.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct event add;
    system("cls");
    printf("\n\n\t\t\t ______________________________________________________");
      printf("\n\t\t\t|                                                      |");
      printf("\n\t\t\t|==================ADD EVENTS DETAILS==================|");
      printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Event Name : ");
    getchar();
    gets(add.e_name);
	printf("\n\t\t\tEnter the Event Date : ");
    gets(add.e_date);
    
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Event Name:%s",add.e_name);
	printf("\n\t\t\t|Event Date:%s",add.e_date);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&add, sizeof(add), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void show_events()
{
    FILE *fp;
    struct event add;
    
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|==================Show All EVENTS====================|");
	printf("\n\t\t\t|_____________________________________________________|");
	printf("\n _______________________________________________________________________________");
    printf("\n|                Event Name             |                    Date               |");  
    printf("\n|_______________________________________|_______________________________________|");
   	printf("\n=============================================================");
    fp = fopen("Events.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Admin();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n _______________________________________________________________________________");
    printf("\n|%s                      \t|%s                      \t|",add.e_name,add.e_date);
	printf("\n|_______________________________________|_______________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Admin();
}
void modify_events()
{
    char stname[30];
    FILE *fp;
    struct event add;
    
    system("cls");
    printf("\n _______________________________________________________");
    printf("\n|                                                       |");
    printf("\n|======================Modify EVENTS====================|");
	printf("\n|_______________________________________________________|");
    printf("\n\nEnter Name of Event to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("Events.txt","rb+");
    if(fp == NULL){
        printf("\n\aError! in opening file");
        printf("\nPress Any Key To Return to Main Menu....");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&add, sizeof(add), 1,fp) == 1)
    {
        if(strcmp(stname,add.e_name) == 0){
            printf("\n\nEnter Event Name: ");
            gets(add.e_name);
            printf("\nEnter Event Date: ");
            gets(add.e_date);
            printf("\n________________________________________________________");
            printf("\n========================================================");
            
            fseek(fp ,-sizeof(add),SEEK_CUR);
            fwrite(&add,sizeof(add),1,fp);
			printf("\nDETIALS MODIFIED.\n");
	printf("\n _______________________________________________________________________________");
    printf("\n|                Event Name             |                    Date               |");  
    printf("\n|_______________________________________|_______________________________________|");
		   	printf("\n=============================================================");
    printf("\n _______________________________________________________________________________");
    printf("\n|%s                      \t|%s                      \t|",add.e_name,add.e_date);
	printf("\n|_______________________________________|_______________________________________|");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to goto menu...");
    getch();
    menu_Admin();
}
//Admin Case 5 (FEEDBACK)----
void showfeedback()
{
    FILE *fp;
    struct feedback Info;
    system("cls");
    printf("\n\t\t\t\t\t\t\t _______________________________________________________");
    printf("\n\t\t\t\t\t\t\t|                                                       |");
    printf("\n\t\t\t\t\t\t\t|===================Feedback Of Parents=================|");
	printf("\n\t\t\t\t\t\t\t|_______________________________________________________|");
    fp = fopen("feedback.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
	printf("\n _______________________________________________________________________________________________________________");
    printf("\n|Student Name   |Father Name    |Class          |Fee Concession |Fine Remission |Better System  |Date           |");  
    printf("\n|_______________|_______________|_______________|_______________|_______________|_______________|_______________|");
    while(fread(&Info,sizeof(Info),1,fp) == 1)
	{
    printf("\n ________________________________________________________________________________________________________________");
    printf("\n|%s\t\t %s  \t %s\t\t %s  \t\t%s  \t\t%s  \t\t%s|",Info.name,Info.father,Info.class,Info.feecon,Info.fine,Info.better,Info.date);
	printf("\n|________________________________________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\t\t\t\t\t\t\t           Press any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
void deleteFeedback()
{
    char stname[20];
    FILE *fp,*ft;
    struct feedback Info;
    system("cls");
    printf("\n _______________________________________________________");
    printf("\n|                                                       |");
    printf("\n|===============Delete Feedback Of Parents==============|");
	printf("\n|_______________________________________________________|");
    printf("\n\n_____________________________________");
    printf("\n =================================== ");
    printf("\n\nEnter Feedback Date to Delete: ");
    fflush(stdin);
    gets(stname);
    printf("\n\n ___________________________________");
    printf("\n=====================================");
    fp = fopen("feedback.txt","rb+");
    if(fp == NULL){
        printf("\n\aError opening file");
        printf("\nPress Any key to return to Main Menu");
        getch();
        menu_Admin();
    }
    ft = fopen("temp1.txt","wb+");
    if(ft == NULL){
        printf("\n\aError opening file");
        printf("\nPress Any Key To return to Main Menu");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        if(strcmp(stname,Info.date)!=0)
            fwrite(&Info,sizeof(Info),1,ft);
    }
    fclose(fp);
    fclose(ft);
    remove("feedback.txt");
    rename("temp1.txt","feedback.txt");
    printf("\n\nFeedback Deleted...");
    printf("\nPress any key to return Main Menu.");
    getch();
    menu_Admin();
}
//Admin Case 6 (TIME TABLE)-----
int timetable1()
{
	int ch;
	B:
   	system("cls");
        	printf("\n _______________________________________________");
        	printf("\n|                                               |");
        	printf("\n|===================TIME TABLE==================|");
        	printf("\n|_______________________________________________|");
        	printf("\n            ___________   ___________");
        	printf("\n           |           | |           |");
        	printf("\n           |1).TEACHER | |2).Student |");
        	printf("\n           |___________| |___________|");
        	printf("\n________________________________________________");
        	printf("\n================================================");
        	printf("\n           Press (3) to Return to Menu");
        	printf("\n                Enter Your Choice:");
        	scanf("%d",&ch);
        switch (ch)
        {
        	case 1:
        	    timetable();
        		break;
        	case 2:
        		Sb:
	system("cls");
    int c;
    printf("\n\t\t\t\t\t\t\t _________________________________________");
    printf("\n\t\t\t\t\t\t\t|                                         |");
    printf("\n\t\t\t\t\t\t\t|===============Select Class==============|");
    printf("\n\t\t\t\t\t\t\t|_________________________________________|\n\n");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 1st|  |Class 2nd|  |Class 3rd|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 4th|  |Class 5th|  |Class 6th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
    printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 7th|  |Class 8th|  |Class 9th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
   	printf("\n\t\t\t\t\t\t\t    ___________________________________");
	printf("\n\t\t\t\t\t\t\t   |                                   |");
	printf("\n\t\t\t\t\t\t\t   |             Class 10th            |");
    printf("\n\t\t\t\t\t\t\t   |___________________________________|");
	printf("\n\t\t\t\t\t\t\t__________________________________________");
	printf("\n\t\t\t\t\t\t\t==========================================");
	printf("\n\t\t\t\t\t\t\t     Enter (11) To Return to Login Page");
	printf("\n\t\t\t\t\t\t\t            Enter Your Choice:");
    scanf("%d",&c);
    switch(c)
    {
    	case 1:
    		student_t_table_c_1();
    		break;
    	case 2:
    		student_t_table_c_2();
    		break;
    	case 3:
    		student_t_table_c_3();
    		break;
    	case 4:
    		student_t_table_c_4();
    		break;
    	case 5:
    		student_t_table_c_5();
    		break;
    	case 6:
    		student_t_table_c_6();
    		break;
    	case 7:
    		student_t_table_c_7();
    		break;
    	case 8:
    		student_t_table_c_8();
    		break;
    	case 9:
    		student_t_table_c_9();
    		break;
    	case 10:
    		student_t_table_c_10();
    		break;
    	default:
    		printf("\a");
    		goto Sb;
	}
        		break;
        	case 3:
        		menu_Admin();
        		break;
            default:
		    printf("\n\aInvalid Choice!..");
		    printf("\nPress Any key to ReEnter..");
		    getch();
		    goto B;
		}

}
int student_t_table_c_10()
{
	system("cls");
    printf("\n\t\t\t\t\t\t\t _____________________________________________________");
    printf("\n\t\t\t\t\t\t\t|                                                     |");
    printf("\n\t\t\t\t\t\t\t|==================Show All of Teacher================|");
	printf("\n\t\t\t\t\t\t\t|_____________________________________________________|");
	printf("\n\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Day        |Period 1     |Period 2     |Period 3     |Period 4     |BREAK      |Period 5     |Period 6     |Period 7    |Period 8      |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|           |07:30-08:10  |08:10-08:50  |08:50-09:30  |09:30-10:10  |10:10-10:30|10:30-11:10  |11:50-12:30  |12:30-01:10  |01:10-01:50  |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|_____________|_____________|");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Monday     |Pakstudies   |Urdu         |Maths        |Chemistry    |BREAK      |Physics      |Comp/Bio     |Islamiat    |English       |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Tuesday    |English      |Comp/Bio     |Physics      |Chemistry    |BREAK      |Urdu         |Maths        |Islamiat    |Pak.Studies   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Wednesday  |Urdu         |Maths        |Comp/Bio     |Chemistry    |BREAK      |English      |Physics      |Pak.Studies |Islamiat      |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Thursday   |Comp/Bio     |Physics      |Chemsitry    |Maths        |BREAK      |English      |Islamiat     |Pak.Studies |Urdu          |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Friday     |Physics      |Chemistry    |Comp/Bio     |Maths        |BREAK      |English      |Urdu         | ---------- |  ---------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Saturday   |Chemistry    |Urdu         |Physics      |Chemistry    |BREAK      |Maths        |Comp/Bio     |Islamiat    |Pak.Studies   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int student_t_table_c_9()
{
	system("cls");
    printf("\n\t\t\t/t/t _____________________________________________________");
    printf("\n\t\t\t/t/t|                                                     |");
    printf("\n\t\t\t/t/t|==================Show All of Teacher================|");
	printf("\n\t\t\t/t/t|_____________________________________________________|");
	printf("\n\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Day        |Period 1     |Period 2     |Period 3     |Period 4     |BREAK      |Period 5     |Period 6     |Period 7    |Period 8      |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|           |07:30-08:10  |08:10-08:50  |08:50-09:30  |09:30-10:10  |10:10-10:30|10:30-11:10  |11:50-12:30  |12:30-01:10  |01:10-01:50  |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|_____________|_____________|");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Monday     |English      |Urdu         |Maths        |Chemistry    |BREAK      |Physics      |Comp/Bio     |Islamiat    |Pak.Studies   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Tuesday    |Comp/Bio     |English      |Physics      |Chemistry    |BREAK      |Maths        |Urdu         |Islamiat    |Pak.Studies   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Wednesday  |English      |Maths        |Comp/Bio     |Chemistry    |BREAK      |Urdu         |Physics      |Pak.Studies |Islamiat      |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Thursday   |Comp/Bio     |Physics      |Chemsitry    |Maths        |BREAK      |English      |Islamiat     |Pak.Studies |Urdu          |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Friday     |Physics      |Chemistry    |Comp/Bio     |Maths        |BREAK      |English      |Urdu         | ---------- |  ---------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Saturday   |English      |Urdu         |Physics      |Chemistry    |BREAK      |Maths        |Comp/Bio     |Islamiat    |Pak.Studies   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int student_t_table_c_8()
{
	system("cls");
    printf("\n\t\t\t/t/t _____________________________________________________");
    printf("\n\t\t\t/t/t|                                                     |");
    printf("\n\t\t\t/t/t|==================Show All of Teacher================|");
	printf("\n\t\t\t/t/t|_____________________________________________________|");
	printf("\n\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Day        |Period 1     |Period 2     |Period 3     |Period 4     |BREAK      |Period 5     |Period 6     |Period 7    |Period 8      |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
	printf("\n\n _______________________________________________________________________________________________________________________________________");
    printf("\n|           |07:30-08:10  |08:10-08:50  |08:50-09:30  |09:30-10:10  |10:10-10:30|10:30-11:10  |11:50-12:30  |12:30-01:10  |01:10-01:50  |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|_____________|_____________|");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Monday     |English      |Urdu         |Maths        |Chemistry    |BREAK      |Physics      |Comp/Bio     |Islamiat    |Pak.Studies   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Tuesday    |English      |Comp/Bio     |Chemistry    |Physics      |BREAK      |Urdu         |Islamiat     |Maths       |Pak.Studies   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Wednesday  |Maths        |English      |Comp/Bio     |Chemistry    |BREAK      |Urdu         |Physics      |Pak.Studies |Islamiat      |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Thursday   |Comp/Bio     |Physics      |Chemsitry    |Maths        |BREAK      |English      |Islamiat     |Pak.Studies |Urdu          |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Friday     |Physics      |Chemistry    |Comp/Bio     |Maths        |BREAK      |English      |Urdu         | ---------- |  ---------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Saturday   |English      |Urdu         |Physics      |Chemistry    |BREAK      |Maths        |Comp/Bio     |Islamiat    |Pak.Studies   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int student_t_table_c_7()
{
	system("cls");
    printf("\n\t\t\t/t/t _____________________________________________________");
    printf("\n\t\t\t/t/t|                                                     |");
    printf("\n\t\t\t/t/t|==================Show All of Teacher================|");
	printf("\n\t\t\t/t/t|_____________________________________________________|");
	printf("\n\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Day        |Period 1     |Period 2     |Period 3     |Period 4     |BREAK      |Period 5     |Period 6     |Period 7    |Period 8      |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
	printf("\n\n _______________________________________________________________________________________________________________________________________");
    printf("\n|           |07:30-08:10  |08:10-08:50  |08:50-09:30  |09:30-10:10  |10:10-10:30|10:30-11:10  |11:50-12:30  |12:30-01:10 |01:10-01:50   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|_____________ |");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Monday     |English      |Urdu         |Islamiat     |Geo/His      |BREAK      |SCIENCE      |Maths        |  Computer  | -------- -   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________| ________   |_____________ |");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Tuesday    |English      |Science      |Geo/His      |Maths        |BREAK      |Urdu         |Islamiat     |  Computer  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Wednesday  |English      |Urdu         |Science      |Maths        |BREAK      |Islamiat     |Geo/His      | Computer   | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Thursday   |Islamiat     |English      |Urdu         |Maths        |BREAK      |Geo/His      |Science      |  Computer  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Friday     |Geo/His      |Urdu         |Science      |Maths        |BREAK      |English      | Computer    | ---------  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Saturday   |English      |Urdu         |Maths        |Geo/His      |BREAK      |Science      |Islamiat     | Computer   |  ---------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int student_t_table_c_6()
{
	system("cls");
    printf("\n\t\t\t/t/t _____________________________________________________");
    printf("\n\t\t\t/t/t|                                                     |");
    printf("\n\t\t\t/t/t|==================Show All of Teacher================|");
	printf("\n\t\t\t/t/t|_____________________________________________________|");
	printf("\n\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Day        |Period 1     |Period 2     |Period 3     |Period 4     |BREAK      |Period 5     |Period 6     |Period 7    |Period 8      |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|           |07:30-08:10  |08:10-08:50  |08:50-09:30  |09:30-10:10  |10:10-10:30|10:30-11:10  |11:50-12:30  |12:30-01:10 |01:10-01:50   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|_____________ |");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Monday     |English      |Urdu         |Islamiat     |Geo/His      |BREAK      |SCIENCE      |Maths        |  Computer  | -------- -   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________| ________   |_____________ |");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Tuesday    |English      |Science      |Geo/His      |Maths        |BREAK      |Urdu         |Islamiat     |  Computer  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Wednesday  |English      |Urdu         |Science      |Maths        |BREAK      |Islamiat     |Geo/His      | Computer   | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Thursday   |Islamiat     |English      |Urdu         |Maths        |BREAK      |Geo/His      |Science      |  Computer  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Friday     |Geo/His      |Urdu         |Science      |Maths        |BREAK      |English      | Computer    | ---------  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Saturday   |English      |Urdu         |Maths        |Geo/His      |BREAK      |Science      |Islamiat     | Computer   |  ---------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int student_t_table_c_5()
{
	system("cls");
    printf("\n\t\t\t/t/t _____________________________________________________");
    printf("\n\t\t\t/t/t|                                                     |");
    printf("\n\t\t\t/t/t|==================Show All of Teacher================|");
	printf("\n\t\t\t/t/t|_____________________________________________________|");
	printf("\n\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Day        |Period 1     |Period 2     |Period 3     |Period 4     |BREAK      |Period 5     |Period 6     |Period 7    |Period 8      |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|           |07:30-08:10  |08:10-08:50  |08:50-09:30  |09:30-10:10  |10:10-10:30|10:30-11:10  |11:50-12:30  |12:30-01:10 |01:10-01:50   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|_____________ |");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Monday     |English      |Urdu         |Islamiat     |SST          |BREAK      |SCIENCE      |Maths        |  Computer  | -------- -   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________| ________   |_____________ |");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Tuesday    |English      |Science      |SST          |Maths        |BREAK      |Urdu         |Islamiat     |  Computer  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Wednesday  |English      |Urdu         |Science      |Maths        |BREAK      |Islamiat     |SSt          | Computer   | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Thursday   |Islamiat     |English      |Urdu         |Maths        |BREAK      |SST          |Science      |  Computer  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Friday     |SST          |Urdu         |Science      |Maths        |BREAK      |English      | Computer    | ---------  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Saturday   |English      |Urdu         |Maths        |SSt          |BREAK      |Science      |Islamiat     | Computer   |  ---------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int student_t_table_c_4()
{
	
	system("cls");
    printf("\n\t\t\t/t/t _____________________________________________________");
    printf("\n\t\t\t/t/t|                                                     |");
    printf("\n\t\t\t/t/t|==================Show All of Teacher================|");
	printf("\n\t\t\t/t/t|_____________________________________________________|");
	printf("\n\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Day        |Period 1     |Period 2     |Period 3     |Period 4     |BREAK      |Period 5     |Period 6     |Period 7    |Period 8      |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
	printf("\n\n _______________________________________________________________________________________________________________________________________");
    printf("\n|           |07:30-08:10  |08:10-08:50  |08:50-09:30  |09:30-10:10  |10:10-10:30|10:30-11:10  |11:50-12:30  |12:30-01:10 |01:10-01:50   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|_____________ |");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Monday     |English      |Urdu         |Islamiat     |SST          |BREAK      |SCIENCE      |Maths        |  Computer  | -------- -   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________| ________   |_____________ |");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Tuesday    |English      |Science      |SST          |Maths        |BREAK      |Urdu         |Islamiat     |  Computer  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Wednesday  |English      |Urdu         |Science      |Maths        |BREAK      |Islamiat     |SSt          | Computer   | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Thursday   |Islamiat     |English      |Urdu         |Maths        |BREAK      |SST          |Science      |  Computer  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Friday     |SST          |Urdu         |Science      |Maths        |BREAK      |English      | Computer    | ---------  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Saturday   |English      |Urdu         |Maths        |SSt          |BREAK      |Science      |Islamiat     | Computer   |  ---------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int student_t_table_c_3()
{
system("cls");
    printf("\n\t\t\t/t/t _____________________________________________________");
    printf("\n\t\t\t/t/t|                                                     |");
    printf("\n\t\t\t/t/t|==================Show All of Teacher================|");
	printf("\n\t\t\t/t/t|_____________________________________________________|");
	printf("\n\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Day        |Period 1     |Period 2     |Period 3     |Period 4     |BREAK      |Period 5     |Period 6     |Period 7    |Period 8      |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
	printf("\n\n _______________________________________________________________________________________________________________________________________");
    printf("\n|           |07:30-08:10  |08:10-08:50  |08:50-09:30  |09:30-10:10  |10:10-10:30|10:30-11:10  |11:50-12:30  |12:30-01:10  |01:10-01:50  |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|_____________|_____________|");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Monday     |English      |Urdu         |Islamiat     |SST          |BREAK      |SCIENCE      |Maths        |  --------  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Tuesday    |English      |Science      |SST          |Maths        |BREAK      |Urdu         |Islamiat     |  --------  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Wednesday  |English      |Urdu         |Science      |Maths        |BREAK      |Islamiat     |SSt          | ---------  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Thursday   |Islamiat     |English      |Urdu         |Maths        |BREAK      |SSt          |Science      |  --------  |  ----------  |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Friday     |SST          |Urdu         |Science      |Maths        |BREAK      |English      | ----------  | ---------- |  ---------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Saturday   |English      |Urdu         |Maths        |SSt          |BREAK      |Science      |Islamiat     | ---------- |  ---------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int student_t_table_c_2()
{
system("cls");
    printf("\n\t\t\t/t/t _____________________________________________________");
    printf("\n\t\t\t/t/t|                                                     |");
    printf("\n\t\t\t/t/t|==================Show All of Teacher================|");
	printf("\n\t\t\t/t/t|_____________________________________________________|");
	printf("\n\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Day        |Period 1     |Period 2     |Period 3     |Period 4     |BREAK      |Period 5     |Period 6     |Period 7    |Period 8      |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
	printf("\n\n _______________________________________________________________________________________________________________________________________");
    printf("\n|           |07:30-08:10  |08:10-08:50  |08:50-09:30  |09:30-10:10  |10:10-10:30|10:30-11:10  |11:50-12:30  |12:30-01:10  |01:10-01:50  |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|_____________|_____________|");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Monday     |English      |Urdu         |Islamiat     |SST          |BREAK      |SCIENCE      |Maths        |  --------  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Tuesday    |English      |Science      |SST          |Maths        |BREAK      |Urdu         |Islamiat     |  --------  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Wednesday  |English      |Urdu         |Science      |Maths        |BREAK      |Islamiat     |SSt          | ---------  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Thursday   |Islamiat     |English      |Urdu         |Maths        |BREAK      |SSt          |Science      |  --------  |  ----------  |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Friday     |SST          |Urdu         |Science      |Maths        |BREAK      |English      | ----------  | ---------- |  ---------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Saturday   |English      |Urdu         |Maths        |SSt          |BREAK      |Science      |Islamiat     | ---------- |  ---------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();    
}
int student_t_table_c_1()
{
	system("cls");
    printf("\n\t\t\t/t/t _____________________________________________________");
    printf("\n\t\t\t/t/t|                                                     |");
    printf("\n\t\t\t/t/t|==================Show All of Teacher================|");
	printf("\n\t\t\t/t/t|_____________________________________________________|");
	printf("\n\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Day        |Period 1     |Period 2     |Period 3     |Period 4     |BREAK      |Period 5     |Period 6     |Period 7    |Period 8      |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|           |07:30-08:10  |08:10-08:50  |08:50-09:30  |09:30-10:10  |10:10-10:30|10:30-11:10  |11:50-12:30  |12:30-01:10  |01:10-01:50  |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|_____________|_____________|");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Monday     |English      |Urdu         |Islamiat     |SST          |BREAK      |SCIENCE      |Maths        |  --------  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
	printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Tuesday    |English      |Science      |SST          |Maths        |BREAK      |Urdu         |Islamiat     |  --------  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Wednesday  |English      |Urdu         |Science      |Maths        |BREAK      |Islamiat     |SSt          | ---------  | ----------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Thursday   |Islamiat     |English      |Urdu         |Maths        |BREAK      |SSt          |Science      |  --------  |  ----------  |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Friday     |SST          |Urdu         |Science      |Maths        |BREAK      |English      | ----------  | ---------- |  ---------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n _______________________________________________________________________________________________________________________________________");
    printf("\n|Saturday   |English      |Urdu         |Maths        |SSt          |BREAK      |Science      |Islamiat     | ---------- |  ---------   |");  
    printf("\n|___________|_____________|_____________|_____________|_____________|___________|_____________|_____________|____________|______________|");
    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
//Admin Case 7(Exam)------
void exam()
{
	system("cls");
	int exam_name;
	printf("\n\t\t\t\t\t\t\t _____________________________________________");
	printf("\n\t\t\t\t\t\t\t|                                             |");
    printf("\n\t\t\t\t\t\t\t|==============Manage Examination=============|");
	printf("\n\t\t\t\t\t\t\t|_____________________________________________|");
	printf("\n\t\t\t\t\t\t\t             |-------Manage-------|\n");
    printf("\n\t\t\t\t\t\t\t            ________________________");
	printf("\n\t\t\t\t\t\t\t           | (1). First Term Exam   |");
	printf("\n\t\t\t\t\t\t\t           | (2). Mid Term Exam     |");
	printf("\n\t\t\t\t\t\t\t           | (3). Final Term Exam   |");
    printf("\n\t\t\t\t\t\t\t           |________________________|");
	printf("\n\t\t\t\t\t\t\t_______________________________________________");
	printf("\n\t\t\t\t\t\t\t===============================================");
	printf("\n\t\t\t\t\t\t\t          Press (4) To return To Menu");
	printf("\n\t\t\t\t\t\t\t               Enter Your Choice:");
	scanf("%d",&exam_name);
	switch(exam_name)
	{
		case 1:
                    first_term();
                    break;
		case 2:
                    mid_term();
                    break;
		case 3:
                    final_term();
                    break;
        case 4:
        	       menu_Admin();
        	       break;
		default:
                    printf("\a");
                    exam();
	}	
}
void first_term()
{
		system("cls");		
		int f_term_c;		
				
		printf("\n\t\t\t _________________________________________________");
		printf("\n\t\t\t|                                                 |");
	    printf("\n\t\t\t|==============First Term Examination=============|");
		printf("\n\t\t\t|_________________________________________________|");
		printf("\n\t\t\t            | (1). Manage Date Sheet |");
		printf("\n\t\t\t            | (2). Manage Result     |");
		printf("\n\t\t\t            |________________________|");
		printf("\n\t\t\t__________________________________________________");
		printf("\n\t\t\t==================================================");
		printf("\n\t\t\t            Press (3) To Return to Menu");
		printf("\n\t\t\t               Enter Your Choice:");
		scanf("%d",&f_term_c);

		switch(f_term_c)
		{
		        	case 1:
		        			So:
	system("cls");
    int c_c,s_c;
    printf("\n\t\t\t\t\t\t\t _________________________________________");
    printf("\n\t\t\t\t\t\t\t|                                         |");
    printf("\n\t\t\t\t\t\t\t|===============Select Class==============|");
    printf("\n\t\t\t\t\t\t\t|_________________________________________|\n");
	printf("\n\t\t\t\t\t\t\t   _____________________________________");
	printf("\n\t\t\t\t\t\t\t   =====================================");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 1st|  |Class 2nd|  |Class 3rd|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 4th|  |Class 5th|  |Class 6th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
    printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 7th|  |Class 8th|  |Class 9th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
   	printf("\n\t\t\t\t\t\t\t    ___________________________________");
	printf("\n\t\t\t\t\t\t\t   |                                   |");
	printf("\n\t\t\t\t\t\t\t   |             Class 10th            |");
    printf("\n\t\t\t\t\t\t\t   |___________________________________|");
	printf("\n\t\t\t\t\t\t\t   _____________________________________");
	printf("\n\t\t\t\t\t\t\t   =====================================");
	printf("\n\t\t\t\t\t\t\t     Enter 11 To Return to Login Page");
	printf("\n\t\t\t\t\t\t\t            Enter Your Choice:");
    scanf("%d",&c_c);
	
	switch (c_c)
	{
	case 1:
		A:
		system("cls");
		printf("\n\t\t __________________________________");
		printf("\n\t\t|                                  |");
		printf("\n\t\t|==============Class 1=============|");
		printf("\n\t\t|__________________________________|");
		first_date_sheet_1();
		break;
	case 2:
		B:
		system("cls");
		printf("\n\t\t __________________________________");
		printf("\n\t\t|                                  |");
		printf("\n\t\t|==============Class 2=============|");
		printf("\n\t\t|__________________________________|");
		first_date_sheet_2();
		break;
	case 3:
		C:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 3=============|");
		printf("\n\t\t|_________________________________|");
		first_date_sheet_3();
		break;
	case 4:
		D:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|==============Class 4============|");
		printf("\n\t\t|_________________________________|");
		first_date_sheet_4();
		break;
	case 5:
		E:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 5=============|");
		printf("\n\t\t|_________________________________|");
		first_date_sheet_5();
		break;
	case 6:
		F:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 6=============|");
		printf("\n\t\t|_________________________________|");
		first_date_sheet_6();
		break;
	case 7:
		G:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 7=============|");
		printf("\n\t\t|_________________________________|");
		first_date_sheet_7();
		break;
	case 8:
		H:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 8=============|");
		printf("\n\t\t|_________________________________|");
		first_date_sheet_8();
		break;
	case 9:
		I:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 9=============|");
		printf("\n\t\t|_________________________________|");
		first_date_sheet_9();
		break;
	case 10:
		J:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 10============|");
		printf("\n\t\t|_________________________________|");
        first_date_sheet_10();
		break;
	case 11:
		main();
		break;
	default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto So;
    }	
    break;
			        case 2:
			           first_result();
                           break;
                    case 3:
                    	menu_Admin();
                    	break;
		        	default:
                           printf("\a");
                           first_term();
		}		
}
void mid_term()
{
	system("cls");	
		int mid_term_c;		
				
		printf("\n\t\t\t _________________________________________________");
		printf("\n\t\t\t|                                                 |");
	    printf("\n\t\t\t|==============First Term Examination=============|");
		printf("\n\t\t\t|_________________________________________________|");
		printf("\n\t\t\t            | (1). Manage Date Sheet |");
		printf("\n\t\t\t            | (2). Manage Result     |");
		printf("\n\t\t\t            |________________________|");
		printf("\n\t\t\t__________________________________________________");
		printf("\n\t\t\t==================================================");
		printf("\n\t\t\t            Press (3) To Return to Menu");
		printf("\n\t\t\t               Enter Your Choice:");
		scanf("%d",&mid_term_c);

		switch(mid_term_c)
		{
		           	 case 1:
		    		        			So:
	system("cls");
    int c_c,s_c;
    printf("\n\t\t\t\t\t\t\t _________________________________________");
    printf("\n\t\t\t\t\t\t\t|                                         |");
    printf("\n\t\t\t\t\t\t\t|===============Select Class==============|");
    printf("\n\t\t\t\t\t\t\t|_________________________________________|\n");
	printf("\n\t\t\t\t\t\t\t   _____________________________________");
	printf("\n\t\t\t\t\t\t\t   =====================================");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 1st|  |Class 2nd|  |Class 3rd|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 4th|  |Class 5th|  |Class 6th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
    printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 7th|  |Class 8th|  |Class 9th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
   	printf("\n\t\t\t\t\t\t\t    ___________________________________");
	printf("\n\t\t\t\t\t\t\t   |                                   |");
	printf("\n\t\t\t\t\t\t\t   |             Class 10th            |");
    printf("\n\t\t\t\t\t\t\t   |___________________________________|");
	printf("\n\t\t\t\t\t\t\t   _____________________________________");
	printf("\n\t\t\t\t\t\t\t   =====================================");
	printf("\n\t\t\t\t\t\t\t     Enter 11 To Return to Login Page");
	printf("\n\t\t\t\t\t\t\t            Enter Your Choice:");
    scanf("%d",&c_c);
	
	switch (c_c)
	{
	case 1:
		A:
		system("cls");
		printf("\n\t\t __________________________________");
		printf("\n\t\t|                                  |");
		printf("\n\t\t|==============Class 1=============|");
		printf("\n\t\t|__________________________________|");
		mid_date_sheet_1();
		break;
	case 2:
		B:
		system("cls");
		printf("\n\t\t __________________________________");
		printf("\n\t\t|                                  |");
		printf("\n\t\t|==============Class 2=============|");
		printf("\n\t\t|__________________________________|");
		mid_date_sheet_2();
		break;
	case 3:
		C:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 3=============|");
		printf("\n\t\t|_________________________________|");
		mid_date_sheet_3();
		break;
	case 4:
		D:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|==============Class 4============|");
		printf("\n\t\t|_________________________________|");
		mid_date_sheet_4();
		break;
	case 5:
		E:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 5=============|");
		printf("\n\t\t|_________________________________|");
		mid_date_sheet_5();
		break;
	case 6:
		F:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 6=============|");
		printf("\n\t\t|_________________________________|");
		mid_date_sheet_6();
		break;
	case 7:
		G:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 7=============|");
		printf("\n\t\t|_________________________________|");
		mid_date_sheet_7();
		break;
	case 8:
		H:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 8=============|");
		printf("\n\t\t|_________________________________|");
		mid_date_sheet_8();
		break;
	case 9:
		I:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 9=============|");
		printf("\n\t\t|_________________________________|");
		mid_date_sheet_9();
		break;
	case 10:
		J:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 10============|");
		printf("\n\t\t|_________________________________|");
        mid_date_sheet_10();
		break;
	case 11:
		main();
		break;
	default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto So;
    }

                            break;
		         	 case 2:
		         	 	mid_result();
                            break;
                    case 3:
                    	menu_Admin();
                    	break;
			default:
                            printf("\a");
                            mid_term();
		}
		
}
void final_term()
{
		system("cls");		
		int f_term_c;		
				
		printf("\n\t\t\t _________________________________________________");
		printf("\n\t\t\t|                                                 |");
	    printf("\n\t\t\t|==============Final Term Examination=============|");
		printf("\n\t\t\t|_________________________________________________|");
		printf("\n\t\t\t            | (1). Manage Date Sheet |");
		printf("\n\t\t\t            | (2). Manage Result     |");
		printf("\n\t\t\t            |________________________|");
		printf("\n\t\t\t__________________________________________________");
		printf("\n\t\t\t==================================================");
		printf("\n\t\t\t            Press (3) To Return to Menu");
		printf("\n\t\t\t               Enter Your Choice:");
		scanf("%d",&f_term_c);

		switch(f_term_c)
		{
			          case 1:
		        			So:
	system("cls");
    int c_c,s_c;
    printf("\n\t\t\t\t\t\t\t _________________________________________");
    printf("\n\t\t\t\t\t\t\t|                                         |");
    printf("\n\t\t\t\t\t\t\t|===============Select Class==============|");
    printf("\n\t\t\t\t\t\t\t|_________________________________________|\n");
	printf("\n\t\t\t\t\t\t\t   _____________________________________");
	printf("\n\t\t\t\t\t\t\t   =====================================");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 1st|  |Class 2nd|  |Class 3rd|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 4th|  |Class 5th|  |Class 6th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
    printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 7th|  |Class 8th|  |Class 9th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
   	printf("\n\t\t\t\t\t\t\t    ___________________________________");
	printf("\n\t\t\t\t\t\t\t   |                                   |");
	printf("\n\t\t\t\t\t\t\t   |             Class 10th            |");
    printf("\n\t\t\t\t\t\t\t   |___________________________________|");
	printf("\n\t\t\t\t\t\t\t   _____________________________________");
	printf("\n\t\t\t\t\t\t\t   =====================================");
	printf("\n\t\t\t\t\t\t\t     Enter 11 To Return to Login Page");
	printf("\n\t\t\t\t\t\t\t            Enter Your Choice:");
    scanf("%d",&c_c);
	
	switch (c_c)
	{
	case 1:
		A:
		system("cls");
		printf("\n\t\t __________________________________");
		printf("\n\t\t|                                  |");
		printf("\n\t\t|==============Class 1=============|");
		printf("\n\t\t|__________________________________|");
		final_date_sheet_1();
		break;
	case 2:
		B:
		system("cls");
		printf("\n\t\t __________________________________");
		printf("\n\t\t|                                  |");
		printf("\n\t\t|==============Class 2=============|");
		printf("\n\t\t|__________________________________|");
		final_date_sheet_2();
		break;
	case 3:
		C:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 3=============|");
		printf("\n\t\t|_________________________________|");
		final_date_sheet_3();
		break;
	case 4:
		D:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|==============Class 4============|");
		printf("\n\t\t|_________________________________|");
		final_date_sheet_4();
		break;
	case 5:
		E:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 5=============|");
		printf("\n\t\t|_________________________________|");
		final_date_sheet_5();
		break;
	case 6:
		F:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 6=============|");
		printf("\n\t\t|_________________________________|");
		final_date_sheet_6();
		break;
	case 7:
		G:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 7=============|");
		printf("\n\t\t|_________________________________|");
		final_date_sheet_7();
		break;
	case 8:
		H:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 8=============|");
		printf("\n\t\t|_________________________________|");
		final_date_sheet_8();
		break;
	case 9:
		I:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 9=============|");
		printf("\n\t\t|_________________________________|");
		final_date_sheet_9();
		break;
	case 10:
		J:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 10============|");
		printf("\n\t\t|_________________________________|");
        final_date_sheet_10();
		break;
	case 11:
		main();
		break;
	default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto So;
    }

                           break;
			          case 2:
			          	final_result();
                           break;
                      case 3:
                      	menu_Admin();
                      	break;
			default:
                           printf("\a");
                           final_term();
		}		
}

int first_date_sheet_10()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |Physics          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Chemistry        |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Comp/Bio         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |PAk.Studies      |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int first_date_sheet_9()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Physics          |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Islmiat          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Chemistry        |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Comp/Bio         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |PAk.Studies      |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int first_date_sheet_8()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Chemistry        |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Pakistan.Studies |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Physics          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Comp/Bio         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int first_date_sheet_7()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |His/Geo          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Computer         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |  -------------  |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int first_date_sheet_6()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |His/Geo          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Computer         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |   -----------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int first_date_sheet_5()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |SST              |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Computer         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |   -----------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int first_date_sheet_4()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Computer         |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |SST              |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int first_date_sheet_3()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |SST              |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Computer         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int first_date_sheet_2()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |SST              |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |Drawing          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int first_date_sheet_1()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |Drawing          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |SST              |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int mid_date_sheet_10()
{
    printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |Physics          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Chemistry        |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Comp/Bio         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |PAk.Studies      |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int mid_date_sheet_9()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Physics          |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Islmiat          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Chemistry        |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Comp/Bio         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |PAk.Studies      |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int mid_date_sheet_8()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Chemistry        |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Pakistan.Studies |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Physics          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Comp/Bio         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int mid_date_sheet_7()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |His/Geo          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Computer         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |  -------------  |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int mid_date_sheet_6()
{

	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |His/Geo          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Computer         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |   -----------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int mid_date_sheet_5()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|28/11/2022     |Monday           |SST              |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Computer         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|12/12/2022     |Monday           |   -----------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int mid_date_sheet_4()
{
	printf("\n___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Computer         |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|28/11/2022     |Monday           |SST              |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n__________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int mid_date_sheet_3()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |SST              |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Computer         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int mid_date_sheet_2()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |SST              |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |Drawing          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int mid_date_sheet_1()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |Drawing          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |SST              |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int final_date_sheet_10()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |Physics          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Chemistry        |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Comp/Bio         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |PAk.Studies      |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int final_date_sheet_9()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Physics          |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Islmiat          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Chemistry        |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Comp/Bio         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |PAk.Studies      |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int final_date_sheet_8()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Chemistry        |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Pakistan.Studies |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Physics          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Comp/Bio         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int final_date_sheet_7()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |His/Geo          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Computer         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |  -------------  |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int final_date_sheet_6()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |His/Geo          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Computer         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |   -----------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int final_date_sheet_5()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |SST              |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Computer         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |   -----------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int final_date_sheet_4()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Computer         |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |SST              |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int final_date_sheet_3()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |SST              |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |Computer         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int final_date_sheet_2()
{

	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |SST              |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |Drawing          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}
int final_date_sheet_1()
{
	printf("\n ___________________________________________________");
    printf("\n|Date           |Day              |subject          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|25/11/2022     |Friday           |Maths            |");  
    printf("\n|_______________|_________________|_________________|");
	printf("\n ___________________________________________________");
    printf("\n|26/11/2022     |Saturday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|27/11/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|28/11/2022     |Monday           |Drawing          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|29/11/2022     |Tuesday          |  -----------    |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|30/11/2022     |wednesday        |Urdu             |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|1/12/2022      |Thursday         |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|2/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|3/12/2022      |Saturday         |Science          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|4/12/2022      |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|5/12/2022      |Monday           |English          |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|6/12/2022      |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n______________________________________________________");
    printf("\n|7/11/2022      |wednesday        |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ____________________________________________________");
    printf("\n|8/12/2022      |Thursday         |SST              |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|9/12/2022      |Friday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|10/12/2022     |Saturday         |Islamiat         |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|11/12/2022     |Sunday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|12/12/2022     |Monday           |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");
    printf("\n ___________________________________________________");
    printf("\n|13/12/2022     |Tuesday          |  ------------   |");  
    printf("\n|_______________|_________________|_________________|");

    printf("\n________________________________________________________________________________________________________________________________________");
    printf("\n========================================================================================================================================");
    printf("\n                                                 Press Any Key to Return to main menu");
    getch();
    menu_Admin();
}

int first_result()
{
	Main:
	system("cls");
    int c_c,s_c;
    printf("\n\t\t\t\t\t\t\t _________________________________________");
    printf("\n\t\t\t\t\t\t\t|                                         |");
    printf("\n\t\t\t\t\t\t\t|===============Select Class==============|");
    printf("\n\t\t\t\t\t\t\t|_________________________________________|\n");
	printf("\n\t\t\t\t\t\t\t   _____________________________________");
	printf("\n\t\t\t\t\t\t\t   =====================================");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 1st|  |Class 2nd|  |Class 3rd|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 4th|  |Class 5th|  |Class 6th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
    printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 7th|  |Class 8th|  |Class 9th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
   	printf("\n\t\t\t\t\t\t\t    ___________________________________");
	printf("\n\t\t\t\t\t\t\t   |                                   |");
	printf("\n\t\t\t\t\t\t\t   |             Class 10th            |");
    printf("\n\t\t\t\t\t\t\t   |___________________________________|");
	printf("\n\t\t\t\t\t\t\t   _____________________________________");
	printf("\n\t\t\t\t\t\t\t   =====================================");
	printf("\n\t\t\t\t\t\t\t     Enter 11 To Return to Login Page");
	printf("\n\t\t\t\t\t\t\t            Enter Your Choice:");
    scanf("%d",&c_c);
	
	switch (c_c)
	{
	case 1:
		A:
		system("cls");
		printf("\n\t\t __________________________________");
		printf("\n\t\t|                                  |");
		printf("\n\t\t|==============Class 1=============|");
		printf("\n\t\t|__________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showfresult_1();
			break;
		case 2:
			fresult_1();
			break;
		case 3:
			modifyresult_1();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto A;
			break;
		}
		
		break;
	case 2:
		B:
		system("cls");
		printf("\n\t\t __________________________________");
		printf("\n\t\t|                                  |");
		printf("\n\t\t|==============Class 2=============|");
		printf("\n\t\t|__________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showfresult_2();
			break;
		case 2:
			fresult_2();
			break;
		case 3:
			modifyresult_2();
			break;
		default:
            printf("\n________________");
			printf("\n\aInvalid Choice!..");
			printf("\n________________");
			printf("\nPress Any key to ReEnter..");
			getch();
			goto B;
			break;
		}
		
		break;
	case 3:
		C:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 3=============|");
		printf("\n\t\t|_________________________________|");
        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showfresult_3();
			break;
		case 2:
			fresult_3();
			break;
		case 3:
			modifyresult_3();
			break;
		default:
			printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
            printf("\nPress Any key to ReEnter");
            getch();
            goto C;
			break;
		}
		
		break;
	case 4:
		D:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|==============Class 4============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showfresult_4();
			break;
		case 2:
			fresult_4();
			break;
		case 3:
			modifyresult_4();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto D;
			break;
		}
		
		break;
	case 5:
		E:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 5=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showfresult_5();
			break;
		case 2:
			fresult_5();
			break;
		case 3:
			modifyresult_5();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto E;
			break;
		}
		
		break;
	case 6:
		F:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 6=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showfresult_6();
			break;
		case 2:
			fresult_6();
			break;
		case 3:
			modifyresult_6();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto F;
			break;
		}
		
		break;
	case 7:
		G:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 7=============|");
		printf("\n\t\t|_________________________________|");
        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showfresult_7();
			break;
		case 2:
			fresult_7();
			break;
		case 3:
			modifyresult_7();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto G;
			break;
		}
		
		break;
	case 8:
		H:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 8=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showfresult_8();
			break;
		case 2:
			fresult_8();
			break;
		case 3:
			modifyresult_8();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto H;
			break;
		}
		
		break;
	case 9:
		I:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 9=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
		printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showfresult_9();
			break;
		case 2:
			fresult_9();
			break;
		case 3:
			modifyresult_9();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto I;
			break;
		}
		
		break;
	case 10:
		J:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 10============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showfresult_10();
			break;
		case 2:
			fresult_10();
			break;
		case 3:
			modifyresult_10();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto J;
			break;
		}	
		break;
	case 11:
		main();
		break;
	default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto Main;
		break;
	}

}
void fresult_1()
{
    FILE *fileOne = fopen("fresult_c_1.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    scanf("%s",&Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    scanf("%s",&Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    scanf("%s",&Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    scanf("%s",&Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    scanf("%s",&Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    scanf("%s",&Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    scanf("%s",&Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    scanf("%s",&Info.math);
    fwrite(&Info, sizeof(Info), 1, fileOne);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    fclose(fileOne);
    getch();
    menu_Admin();
}
void fresult_2()
{
    FILE *fileOne = fopen("fresult_c_2.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void fresult_3()
{
    FILE *fileOne = fopen("fresult_c_3.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void fresult_4()
{
    FILE *fileOne = fopen("fresult_c_4.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void fresult_5()
{
    FILE *fileOne = fopen("fresult_c_5.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void fresult_6()
{
    FILE *fileOne = fopen("fresult_c_6.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void fresult_7()
{
    FILE *fileOne = fopen("fresult_c_7.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void fresult_8()
{
    FILE *fileOne = fopen("fresult_c_8.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void fresult_9()
{
    FILE *fileOne = fopen("fresult_c_9.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void fresult_10()
{
    FILE *fileOne = fopen("fresult_c_10.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
int showfresult_1()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("fresult_c_1.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showfresult_2()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("fresult_c_2.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");
		    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showfresult_3()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("fresult_c_3.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");
		    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showfresult_4()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("fresult_c_4.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showfresult_5()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("fresult_c_5.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");
		    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showfresult_6()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("fresult_c_6.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");
		    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showfresult_7()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("fresult_c_7.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showfresult_8()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("fresult_c_8.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");
		    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showfresult_9()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("fresult_c_9.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showfresult_10()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("fresult_c_10.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");
		    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
void modifyresult_1()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("fresult_c_1.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifyresult_2()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("fresult_c_2.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifyresult_3()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("fresult_c_3.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifyresult_4()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("fresult_c_4.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifyresult_5()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("fresult_c_5.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifyresult_6()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("fresult_c_6.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifyresult_7()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("fresult_c_7.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifyresult_8()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("fresult_c_8.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifyresult_9()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("fresult_c_9.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifyresult_10()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("fresult_c_10.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
int mid_result()
{
	Main:
	system("cls");
    int c_c,s_c;
    printf("\n\t\t\t\t\t\t\t _________________________________________");
    printf("\n\t\t\t\t\t\t\t|                                         |");
    printf("\n\t\t\t\t\t\t\t|===============Select Class==============|");
    printf("\n\t\t\t\t\t\t\t|_________________________________________|\n");
	printf("\n\t\t\t\t\t\t\t   _____________________________________");
	printf("\n\t\t\t\t\t\t\t   =====================================");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 1st|  |Class 2nd|  |Class 3rd|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 4th|  |Class 5th|  |Class 6th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
    printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 7th|  |Class 8th|  |Class 9th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
   	printf("\n\t\t\t\t\t\t\t    ___________________________________");
	printf("\n\t\t\t\t\t\t\t   |                                   |");
	printf("\n\t\t\t\t\t\t\t   |             Class 10th            |");
    printf("\n\t\t\t\t\t\t\t   |___________________________________|");
	printf("\n\t\t\t\t\t\t\t   _____________________________________");
	printf("\n\t\t\t\t\t\t\t   =====================================");
	printf("\n\t\t\t\t\t\t\t     Enter 11 To Return to Login Page");
	printf("\n\t\t\t\t\t\t\t            Enter Your Choice:");
    scanf("%d",&c_c);
	
	switch (c_c)
	{
	case 1:
		A:
		system("cls");
		printf("\n\t\t __________________________________");
		printf("\n\t\t|                                  |");
		printf("\n\t\t|==============Class 1=============|");
		printf("\n\t\t|__________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showmresult_1();
			break;
		case 2:
			mresult_1();
			break;
		case 3:
			modifymresult_1();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto A;
			break;
		}
		
		break;
	case 2:
		B:
		system("cls");
		printf("\n\t\t __________________________________");
		printf("\n\t\t|                                  |");
		printf("\n\t\t|==============Class 2=============|");
		printf("\n\t\t|__________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showmresult_2();
			break;
		case 2:
			mresult_2();
			break;
		case 3:
			modifymresult_2();
			break;
		default:
            printf("\n________________");
			printf("\n\aInvalid Choice!..");
			printf("\n________________");
			printf("\nPress Any key to ReEnter..");
			getch();
			goto B;
			break;
		}
		
		break;
	case 3:
		C:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 3=============|");
		printf("\n\t\t|_________________________________|");
        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showmresult_3();
			break;
		case 2:
			mresult_3();
			break;
		case 3:
			modifymresult_3();
			break;
		default:
			printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
            printf("\nPress Any key to ReEnter");
            getch();
            goto C;
			break;
		}
		
		break;
	case 4:
		D:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|==============Class 4============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showmresult_4();
			break;
		case 2:
			mresult_4();
			break;
		case 3:
			modifymresult_4();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto D;
			break;
		}
		
		break;
	case 5:
		E:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 5=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showmresult_5();
			break;
		case 2:
			mresult_5();
			break;
		case 3:
			modifymresult_5();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto E;
			break;
		}
		
		break;
	case 6:
		F:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 6=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showmresult_6();
			break;
		case 2:
			mresult_6();
			break;
		case 3:
			modifymresult_6();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto F;
			break;
		}
		
		break;
	case 7:
		G:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 7=============|");
		printf("\n\t\t|_________________________________|");
        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showmresult_7();
			break;
		case 2:
			mresult_7();
			break;
		case 3:
			modifymresult_7();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto G;
			break;
		}
		
		break;
	case 8:
		H:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 8=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showmresult_8();
			break;
		case 2:
			mresult_8();
			break;
		case 3:
			modifymresult_8();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto H;
			break;
		}
		
		break;
	case 9:
		I:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 9=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
		printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showmresult_9();
			break;
		case 2:
			mresult_9();
			break;
		case 3:
			modifymresult_9();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto I;
			break;
		}
		
		break;
	case 10:
		J:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 10============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showmresult_10();
			break;
		case 2:
			mresult_10();
			break;
		case 3:
			modifymresult_10();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto J;
			break;
		}	
		break;
	case 11:
		main();
		break;
	default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto Main;
		break;
	}

}
void mresult_1()
{
    FILE *fileOne = fopen("mresult_c_1.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    scanf("%s",&Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    scanf("%s",&Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    scanf("%s",&Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    scanf("%s",&Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    scanf("%s",&Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    scanf("%s",&Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    scanf("%s",&Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    scanf("%s",&Info.math);
    fwrite(&Info, sizeof(Info), 1, fileOne);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    fclose(fileOne);
    getch();
    menu_Admin();
}
void mresult_2()
{
    FILE *fileOne = fopen("mresult_c_2.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void mresult_3()
{
    FILE *fileOne = fopen("mresult_c_3.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void mresult_4()
{
    FILE *fileOne = fopen("mresult_c_4.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void mresult_5()
{
    FILE *fileOne = fopen("mresult_c_5.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void mresult_6()
{
    FILE *fileOne = fopen("mresult_c_6.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void mresult_7()
{
    FILE *fileOne = fopen("mresult_c_7.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void mresult_8()
{
    FILE *fileOne = fopen("mresult_c_8.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void mresult_9()
{
    FILE *fileOne = fopen("mresult_c_9.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void mresult_10()
{
    FILE *fileOne = fopen("mresult_c_10.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
int showmresult_1()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("mresult_c_1.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showmresult_2()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("mresult_c_2.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showmresult_3()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("mresult_c_3.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showmresult_4()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("mresult_c_4.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showmresult_5()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("mresult_c_5.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showmresult_6()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("mresult_c_6.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showmresult_7()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("mresult_c_7.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showmresult_8()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("mresult_c_8.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showmresult_9()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("mresult_c_9.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showmresult_10()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("mresult_c_10.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
void modifymresult_1()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("mresult_c_1.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifymresult_2()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("mresult_c_2.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifymresult_3()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("mresult_c_3.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifymresult_4()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("mresult_c_4.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifymresult_5()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("mresult_c_5.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifymresult_6()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("mresult_c_6.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifymresult_7()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("mresult_c_7.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifymresult_8()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("mresult_c_8.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifymresult_9()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("mresult_c_9.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifymresult_10()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("mresult_c_10.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
int final_result()
{
	Main:
	system("cls");
    int c_c,s_c;
    printf("\n\t\t\t\t\t\t\t _________________________________________");
    printf("\n\t\t\t\t\t\t\t|                                         |");
    printf("\n\t\t\t\t\t\t\t|===============Select Class==============|");
    printf("\n\t\t\t\t\t\t\t|_________________________________________|\n");
	printf("\n\t\t\t\t\t\t\t   _____________________________________");
	printf("\n\t\t\t\t\t\t\t   =====================================");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 1st|  |Class 2nd|  |Class 3rd|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 4th|  |Class 5th|  |Class 6th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
    printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 7th|  |Class 8th|  |Class 9th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
   	printf("\n\t\t\t\t\t\t\t    ___________________________________");
	printf("\n\t\t\t\t\t\t\t   |                                   |");
	printf("\n\t\t\t\t\t\t\t   |             Class 10th            |");
    printf("\n\t\t\t\t\t\t\t   |___________________________________|");
	printf("\n\t\t\t\t\t\t\t   _____________________________________");
	printf("\n\t\t\t\t\t\t\t   =====================================");
	printf("\n\t\t\t\t\t\t\t     Enter 11 To Return to Login Page");
	printf("\n\t\t\t\t\t\t\t            Enter Your Choice:");
    scanf("%d",&c_c);
	
	switch (c_c)
	{
	case 1:
		A:
		system("cls");
		printf("\n\t\t __________________________________");
		printf("\n\t\t|                                  |");
		printf("\n\t\t|==============Class 1=============|");
		printf("\n\t\t|__________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showfinresult_1();
			break;
		case 2:
			finresult_1();
			break;
		case 3:
			modifyfinresult_1();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto A;
			break;
		}
		
		break;
	case 2:
		B:
		system("cls");
		printf("\n\t\t __________________________________");
		printf("\n\t\t|                                  |");
		printf("\n\t\t|==============Class 2=============|");
		printf("\n\t\t|__________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showfinresult_2();
			break;
		case 2:
			finresult_2();
			break;
		case 3:
			modifyfinresult_2();
			break;
		default:
            printf("\n________________");
			printf("\n\aInvalid Choice!..");
			printf("\n________________");
			printf("\nPress Any key to ReEnter..");
			getch();
			goto B;
			break;
		}
		
		break;
	case 3:
		C:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 3=============|");
		printf("\n\t\t|_________________________________|");
        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showfinresult_3();
			break;
		case 2:
			finresult_3();
			break;
		case 3:
			modifyfinresult_3();
			break;
		default:
			printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
            printf("\nPress Any key to ReEnter");
            getch();
            goto C;
			break;
		}
		
		break;
	case 4:
		D:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|==============Class 4============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showfinresult_4();
			break;
		case 2:
			finresult_4();
			break;
		case 3:
			modifyfinresult_4();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto D;
			break;
		}
		
		break;
	case 5:
		E:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 5=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showfinresult_5();
			break;
		case 2:
			finresult_5();
			break;
		case 3:
			modifyfinresult_5();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto E;
			break;
		}
		
		break;
	case 6:
		F:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 6=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showfinresult_6();
			break;
		case 2:
			finresult_6();
			break;
		case 3:
			modifyfinresult_6();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto F;
			break;
		}
		
		break;
	case 7:
		G:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 7=============|");
		printf("\n\t\t|_________________________________|");
        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showfinresult_7();
			break;
		case 2:
			finresult_7();
			break;
		case 3:
			modifyfinresult_7();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto G;
			break;
		}
		
		break;
	case 8:
		H:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 8=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showfinresult_8();
			break;
		case 2:
			finresult_8();
			break;
		case 3:
			modifyfinresult_8();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto H;
			break;
		}
		
		break;
	case 9:
		I:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 9=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
		printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showfinresult_9();
			break;
		case 2:
			finresult_9();
			break;
		case 3:
			modifyfinresult_9();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto I;
			break;
		}
		
		break;
	case 10:
		J:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 10============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show Result of All Students");
		printf("\n2.Add Result Of Class");
		printf("\n3.Modify Result Details");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			showfinresult_10();
			break;
		case 2:
			finresult_10();
			break;
		case 3:
			modifyfinresult_10();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto J;
			break;
		}	
		break;
	case 11:
		main();
		break;
	default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto Main;
		break;
	}

}
void finresult_1()
{
    FILE *fileOne = fopen("finresult_c_1.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    scanf("%s",&Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    scanf("%s",&Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    scanf("%s",&Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    scanf("%s",&Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    scanf("%s",&Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    scanf("%s",&Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    scanf("%s",&Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    scanf("%s",&Info.math);
    fwrite(&Info, sizeof(Info), 1, fileOne);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    fclose(fileOne);
    getch();
    menu_Admin();
}
void finresult_2()
{
    FILE *fileOne = fopen("finresult_c_2.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void finresult_3()
{
    FILE *fileOne = fopen("finresult_c_3.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void finresult_4()
{
    FILE *fileOne = fopen("finresult_c_4.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void finresult_5()
{
    FILE *fileOne = fopen("finresult_c_5.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void finresult_6()
{
    FILE *fileOne = fopen("finresult_c_6.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void finresult_7()
{
    FILE *fileOne = fopen("finresult_c_7.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void finresult_8()
{
    FILE *fileOne = fopen("finresult_c_8.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void finresult_9()
{
    FILE *fileOne = fopen("finresult_c_9.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
void finresult_10()
{
    FILE *fileOne = fopen("finresult_c_10.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct result Info;
    system("cls");
    printf("\n\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|==================Add Details of Student Result==============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\t\t\tResult have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
int showfinresult_1()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("finresult_c_1.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showfinresult_2()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("finresult_c_2.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showfinresult_3()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("finresult_c_3.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showfinresult_4()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("finresult_c_4.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showfinresult_5()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("finresult_c_5.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showfinresult_6()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("finresult_c_6.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showfinresult_7()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("finresult_c_7.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showfinresult_8()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("finresult_c_8.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showfinresult_9()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("finresult_c_9.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
int showfinresult_10()
{
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________________");
    printf("\n\t\t\t|                                                              |");
    printf("\n\t\t\t|===================Show All of Students Result================|");
	printf("\n\t\t\t|______________________________________________________________|");
	printf("\n ______________________________________________________________________________________");
    printf("\n|Name of Students       |Eng   |Urdu  |PakSt |Isl   |Chem  |Comp  |Phy   |Math  |Total |");  
    printf("\n|_______________________|______|______|______|______|______|______|______|______|______|");
    printf("\n                                       ============");
    fp = fopen("finresult_c_10.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n ______________________________________________________________________________________");
        printf("\n|%s\t\t\t %s\t %s\t%s\t%s\t%s    %s   %s\t  %s    %s |",Info.name,Info.eng,Info.urdu,Info.pakst,Info.isl,Info.chem,Info.comp,Info.phy,Info.math);
		printf("\n|______________________________________________________________________________________|");    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Admin();
}
void modifyfinresult_1()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("finresult_c_1.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifyfinresult_2()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("finresult_c_2.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifyfinresult_3()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("finresult_c_3.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifyfinresult_4()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("finresult_c_4.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifyfinresult_5()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("finresult_c_5.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifyfinresult_6()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("finresult_c_6.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifyfinresult_7()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("finresult_c_7.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifyfinresult_8()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("finresult_c_8.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifyfinresult_9()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("finresult_c_9.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
void modifyfinresult_10()
{
    char stname[20];
    FILE *fp;
    struct result Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________________");
    printf("\n\t\t\t|                                                             |");
    printf("\n\t\t\t|================Modify Details of Students Result============|");
	printf("\n\t\t\t|_____________________________________________________________|");
    printf("\n\n\tEnter Name of Student to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("finresult_c_10.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.name) == 0){
    printf("\n\n\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(Info.name);
	printf("\n\t\t\tEnter Marks In Eng: ");
    gets(Info.eng);
    printf("\n\t\t\tEnter Marks In PakSt: ");
    gets(Info.pakst);
    printf("\n\t\t\tEnter Marks In Urdu: ");
    gets(Info.urdu);
    printf("\n\t\t\tEnter Marks In Isl: ");
    gets(Info.isl);
    printf("\n\t\t\tEnter Marks In Chem: ");
    gets(Info.chem);
    printf("\n\t\t\tEnter Marks In Comp: ");
    gets(Info.comp);
    printf("\n\t\t\tEnter Marks In Phy: ");
    gets(Info.phy);    
	printf("\n\t\t\tEnter Marks In Math: ");
    gets(Info.math);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.name);
	printf("\n\t\t\t|Eng Marks:%s",Info.eng);
	printf("\n\t\t\t|PakSt:%s",Info.pakst);
	printf("\n\t\t\t|Urdu:%s",Info.urdu);
	printf("\n\t\t\t|Isl:%s",Info.isl);
	printf("\n\t\t\t|Chem:%s",Info.chem);
	printf("\n\t\t\t|COmp:%s",Info.comp);
	printf("\n\t\t\t|Phy:%s",Info.phy);
	printf("\n\t\t\t|Math:%s",Info.math);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Admin();
}
//Admin Case 8(Finance)------
void fee()
{
	Sc:
	system("cls");
    int c,f_c;
    printf("\n\t\t\t\t\t\t\t _________________________________________");
    printf("\n\t\t\t\t\t\t\t|                                         |");
    printf("\n\t\t\t\t\t\t\t|===============Select Class==============|");
    printf("\n\t\t\t\t\t\t\t|_________________________________________|\n\n");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 1st|  |Class 2nd|  |Class 3rd|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 4th|  |Class 5th|  |Class 6th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
    printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 7th|  |Class 8th|  |Class 9th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
   	printf("\n\t\t\t\t\t\t\t    ___________________________________");
	printf("\n\t\t\t\t\t\t\t   |                                   |");
	printf("\n\t\t\t\t\t\t\t   |             Class 10th            |");
    printf("\n\t\t\t\t\t\t\t   |___________________________________|");
	printf("\n\t\t\t\t\t\t\t__________________________________________");
	printf("\n\t\t\t\t\t\t\t==========================================");
	printf("\n\t\t\t\t\t\t\t     Enter (11) To Return to Login Page");
	printf("\n\t\t\t\t\t\t\t            Enter Your Choice:");
    scanf("%d",&c);

		    switch (c)
			{
			case 1:
				A:
				system("cls");
				printf("\n\t\t __________________________________");
				printf("\n\t\t|                                  |");
				printf("\n\t\t|==============Class 1=============|");
				printf("\n\t\t|__________________________________|");
		        printf("\n\n_____________________________________");
		        printf("\n=====================================");
				printf("\n 1). Add Fee Details");
				printf("\n 2). Show Class Fee");
				printf("\n 3). Update Class Fee ");
		        printf("\n_____________________________________");
		        printf("\ns=====================================");
				printf("\n\n\n\tEnter Your Choice:");
				scanf("%d",&f_c);
				switch(f_c)
				{
				case 1:
				    add1();
					break;
				case 2:
					show1();
					break;
				case 3:
					modify1();
					break;
				default:
		            printf("\n_________________");
					printf("\n\aInvalid Choice!..");
					printf("\n_________________");
					printf("\nPress Any key to ReEnter");
					getch();
					goto A;
					break;
				}
				
				break;
			 case 2:
				B:
				system("cls");
				printf("\n\t\t __________________________________");
				printf("\n\t\t|                                  |");
				printf("\n\t\t|==============Class 2=============|");
				printf("\n\t\t|__________________________________|");
		
		        printf("\n\n_____________________________________");
		        printf("\n=====================================");
				printf("\n 1). Add Fee Details");
				printf("\n 2). Show Class Fee");
				printf("\n 3). Update Class Fee ");
		        printf("\n_____________________________________");
		        printf("\n=====================================");
				printf("\n\n\n\tEnter Your Choice:");
				scanf("%d",&f_c);
				switch(f_c)
				{
				case 1:
				    add2();
					break;
				case 2:
					show2();
					break;
				case 3:
					modify2();
					break;
				default:
		            printf("\n_________________");
					printf("\n\aInvalid Choice!..");
					printf("\n_________________");
					printf("\nPress Any key to ReEnter");
					getch();
					goto B;
					break;
				}
				
				break;
			  case 3:
				C:
				system("cls");
				printf("\n\t\t __________________________________");
				printf("\n\t\t|                                  |");
				printf("\n\t\t|==============Class 3=============|");
				printf("\n\t\t|__________________________________|");
		
		        printf("\n\n_____________________________________");
		        printf("\n=====================================");
				printf("\n 1). Add Fee Details");
				printf("\n 2). Show Class Fee");
				printf("\n 3). Update Class Fee ");
		        printf("\n_____________________________________");
		        printf("\n=====================================");
				printf("\n\n\n\tEnter Your Choice:");
				scanf("%d",&f_c);
				switch(f_c)
				{
				case 1:
				    add3();
					break;
				case 2:
					show3();
					break;
				case 3:
					modify3();
					break;
				default:
		            printf("\n_________________");
					printf("\n\aInvalid Choice!..");
					printf("\n_________________");
					printf("\nPress Any key to ReEnter");
					getch();
					goto C;
					break;
				}
				
				break;
			   case 4:
				D:
				system("cls");
				printf("\n\t\t __________________________________");
				printf("\n\t\t|                                  |");
				printf("\n\t\t|==============Class 4=============|");
				printf("\n\t\t|__________________________________|");
		
		        printf("\n\n_____________________________________");
		        printf("\n=====================================");
				printf("\n 1). Add Fee Details");
				printf("\n 2). Show Class Fee");
				printf("\n 3). Update Class Fee ");
		        printf("\n_____________________________________");
		        printf("\n=====================================");
				printf("\n\n\n\tEnter Your Choice:");
				scanf("%d",&f_c);
				switch(f_c)
				{
				case 1:
				    add4();
					break;
				case 2:
					show4();
					break;
				case 3:
					modify4();
					break;
				default:
		            printf("\n_________________");
					printf("\n\aInvalid Choice!..");
					printf("\n_________________");
					printf("\nPress Any key to ReEnter");
					getch();
					goto D;
					break;
				}
				
				break;
			   case 5:
				E:
				system("cls");
				printf("\n\t\t __________________________________");
				printf("\n\t\t|                                  |");
				printf("\n\t\t|==============Class 5=============|");
				printf("\n\t\t|__________________________________|");
		
		        printf("\n\n_____________________________________");
		        printf("\n=====================================");
				printf("\n 1). Add Fee Details");
				printf("\n 2). Show Class Fee");
				printf("\n 3). Update Class Fee ");
		        printf("\n_____________________________________");
		        printf("\n=====================================");
				printf("\n\n\n\tEnter Your Choice:");
				scanf("%d",&f_c);
				switch(f_c)
				{
				case 1:
				    add5();
					break;
				case 2:
					show5();
					break;
				case 3:
					modify5();
					break;
				default:
		            printf("\n_________________");
					printf("\n\aInvalid Choice!..");
					printf("\n_________________");
					printf("\nPress Any key to ReEnter");
					getch();
					goto E;
					break;
				}
				
				break;
			   case 6:
				F:
				system("cls");
				printf("\n\t\t __________________________________");
				printf("\n\t\t|                                  |");
				printf("\n\t\t|==============Class 6=============|");
				printf("\n\t\t|__________________________________|");
		
		        printf("\n\n_____________________________________");
		        printf("\n=====================================");
				printf("\n 1). Add Fee Details");
				printf("\n 2). Show Class Fee");
				printf("\n 3). Update Class Fee ");
		        printf("\n_____________________________________");
		        printf("\n=====================================");
				printf("\n\n\n\tEnter Your Choice:");
				scanf("%d",&f_c);
				switch(f_c)
				{
				case 1:
				     add6();
					break;
				case 2:
					show6();
					break;
				case 3:
					modify6();
					break;
				default:
		            printf("\n_________________");
					printf("\n\aInvalid Choice!..");
					printf("\n_________________");
					printf("\nPress Any key to ReEnter");
					getch();
					goto F;
					break;
				}
				
				break;
			   case 7:
				G:
				system("cls");
				printf("\n\t\t __________________________________");
				printf("\n\t\t|                                  |");
				printf("\n\t\t|==============Class 7=============|");
				printf("\n\t\t|__________________________________|");
		
		        printf("\n\n_____________________________________");
		        printf("\n=====================================");
				printf("\n 1). Add Fee Details");
				printf("\n 2). Show Class Fee");
				printf("\n 3). Update Class Fee ");
		        printf("\n_____________________________________");
		        printf("\n=====================================");
				printf("\n\n\n\tEnter Your Choice:");
				scanf("%d",&f_c);
				switch(f_c)
				{
				case 1:
				    add7();
					break;
				case 2:
					show7();
					break;
				case 3:
					modify7();
					break;
				default:
		            printf("\n_________________");
					printf("\n\aInvalid Choice!..");
					printf("\n_________________");
					printf("\nPress Any key to ReEnter");
					getch();
					goto G;
					break;
				}
				
				break;
			   case 8:
				H:
				system("cls");
				printf("\n\t\t __________________________________");
				printf("\n\t\t|                                  |");
				printf("\n\t\t|==============Class 8=============|");
				printf("\n\t\t|__________________________________|");
		
		        printf("\n\n_____________________________________");
		        printf("\n=====================================");
				printf("\n 1). Add Fee Details");
				printf("\n 2). Show Class Fee");
				printf("\n 3). Update Class Fee ");
		        printf("\n_____________________________________");
		        printf("\n=====================================");
				printf("\n\n\n\tEnter Your Choice:");
				scanf("%d",&f_c);
				switch(f_c)
				{
				case 1:
				   add8();
					break;
				case 2:
					show8();
					break;
				case 3:
					modify8();
					break;
				default:
		            printf("\n_________________");
					printf("\n\aInvalid Choice!..");
					printf("\n_________________");
					printf("\nPress Any key to ReEnter");
					getch();
					goto H;
					break;
				}
				
				break;
			  case 9:
				I:
				system("cls");
				printf("\n\t\t __________________________________");
				printf("\n\t\t|                                  |");
				printf("\n\t\t|==============Class 9=============|");
				printf("\n\t\t|__________________________________|");
		
		        printf("\n\n_____________________________________");
		        printf("\n=====================================");
				printf("\n 1). Add Fee Details");
				printf("\n 2). Show Class Fee");
				printf("\n 3). Update Class Fee ");
		        printf("\n_____________________________________");
		        printf("\n=====================================");
				printf("\n\n\n\tEnter Your Choice:");
				scanf("%d",&f_c);
				switch(f_c)
				{
				case 1:
				    add9();
					break;
				case 2:
					show9();
					break;
				case 3:
					modify9();
					break;
				default:
		            printf("\n_________________");
					printf("\n\aInvalid Choice!..");
					printf("\n_________________");
					printf("\nPress Any key to ReEnter");
					getch();
					goto I;
					break;
				}
				
				break;
			  case 10:
				J:
				system("cls");
				printf("\n\t\t __________________________________");
				printf("\n\t\t|                                  |");
				printf("\n\t\t|==============Class 10============|");
				printf("\n\t\t|__________________________________|");
		
		        printf("\n\n_____________________________________");
		        printf("\n=====================================");
				printf("\n 1). Add Fee Details");
				printf("\n 2). Show Class Fee");
				printf("\n 3). Update Class Fee ");
		        printf("\n_____________________________________");
		        printf("\n=====================================");
				printf("\n\n\n\tEnter Your Choice:");
				scanf("%d",&f_c);
				switch(f_c)
				{
				case 1:
				    add10();
					break;
				case 2:
					show10();
					break;
				case 3:
					modify10();
					break;
				default:
		            printf("\n_________________");
					printf("\n\aInvalid Choice!..");
					printf("\n_________________");
					printf("\nPress Any key to ReEnter");
					getch();
					goto J;
					break;
				}
				
			 	break;
			 	default :
					printf("\n\aInvalid Choice!..");
					printf("\n_________________");
					printf("\nPress Any key to ReEnter");
					getch();
					goto Sc;
				}
						
}
int add1()
{
	FILE *fileOne = fopen("fees1.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct student add;
    system("cls");
      printf("\n\t\t\t ______________________________________________________");
      printf("\n\t\t\t|                                                      |");
      printf("\n\t\t\t|====================ADD FEES DETAILS==================|");
      printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Class Fees : ");
    getchar();
    gets(add.fees);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Class Fees:%s",add.fees);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&add, sizeof(add), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
int add2()
{
	FILE *fileOne = fopen("fees2.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct student add;
    system("cls");     
	  printf("\n\t\t\t ______________________________________________________");
      printf("\n\t\t\t|                                                      |");
      printf("\n\t\t\t|====================ADD FEES DETAILS==================|");
      printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Class Fees : ");
    getchar();
    gets(add.fees);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Class Fees:%s",add.fees);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&add, sizeof(add), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
int add3()
{
	FILE *fileOne = fopen("fees3.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct student add;
    system("cls");
      printf("\n\t\t\t ______________________________________________________");
      printf("\n\t\t\t|                                                      |");
      printf("\n\t\t\t|====================ADD FEES DETAILS==================|");
      printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Class Fees : ");
    getchar();
    gets(add.fees);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Class Fees:%s",add.fees);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&add, sizeof(add), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
int add4()
{
	FILE *fileOne = fopen("fees4.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct student add;
    system("cls");
      printf("\n\t\t\t ______________________________________________________");
      printf("\n\t\t\t|                                                      |");
      printf("\n\t\t\t|====================ADD FEES DETAILS==================|");
      printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Class Fees : ");
    getchar();
    gets(add.fees);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Class Fees:%s",add.fees);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&add, sizeof(add), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
int add5()
{
	FILE *fileOne = fopen("fees5.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct student add;
    system("cls");
      printf("\n\t\t\t ______________________________________________________");
      printf("\n\t\t\t|                                                      |");
      printf("\n\t\t\t|====================ADD FEES DETAILS==================|");
      printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Class Fees : ");
    getchar();
    gets(add.fees);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Class Fees:%s",add.fees);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&add, sizeof(add), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
int add6()
{
	FILE *fileOne = fopen("fees6.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct student add;
    system("cls");
      printf("\n\t\t\t ______________________________________________________");
      printf("\n\t\t\t|                                                      |");
      printf("\n\t\t\t|====================ADD FEES DETAILS==================|");
      printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Class Fees : ");
    getchar();
    gets(add.fees);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Class Fees:%s",add.fees);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&add, sizeof(add), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
int add7()
{
	FILE *fileOne = fopen("fees7.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct student add;
    system("cls");
      printf("\n\t\t\t ______________________________________________________");
      printf("\n\t\t\t|                                                      |");
      printf("\n\t\t\t|====================ADD FEES DETAILS==================|");
      printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Class Fees : ");
    getchar();
    gets(add.fees);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Class Fees:%s",add.fees);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&add, sizeof(add), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
int add8()
{
	FILE *fileOne = fopen("fees8.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct student add;
    system("cls");
      printf("\n\t\t\t ______________________________________________________");
      printf("\n\t\t\t|                                                      |");
      printf("\n\t\t\t|====================ADD FEES DETAILS==================|");
      printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Class Fees : ");
    getchar();
    gets(add.fees);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Class Fees:%s",add.fees);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&add, sizeof(add), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
int add9()
{
	FILE *fileOne = fopen("fees9.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct student add;
    system("cls");
      printf("\n\t\t\t ______________________________________________________");
      printf("\n\t\t\t|                                                      |");
      printf("\n\t\t\t|====================ADD FEES DETAILS==================|");
      printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Class Fees : ");
    getchar();
    gets(add.fees);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Class Fees:%s",add.fees);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&add, sizeof(add), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
int add10()
{
	FILE *fileOne = fopen("fees10.txt", "ab+");
    if (fileOne == NULL)
    {
        printf("\n\a\t\t\tError !");
        printf("\nPress Any key to Return To Main menu");
        getch();
        menu_Admin();
    }
    struct student add;
    system("cls");
      printf("\n\t\t\t ______________________________________________________");
      printf("\n\t\t\t|                                                      |");
      printf("\n\t\t\t|====================ADD FEES DETAILS==================|");
      printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\n\t\t\tEnter Class Fees : ");
    getchar();
    gets(add.fees);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Class Fees:%s",add.fees);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");

    fwrite(&add, sizeof(add), 1, fileOne);

    printf("\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\t\t\tEnter any keys to Return to Menu.......");
    getch();
    fclose(fileOne);
    menu_Admin();
}
int show1()
{
    FILE *fp;
    struct student add;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|===================SHOW CLASSS FEES==================|");
	printf("\n\t\t\t|_____________________________________________________|");
   	printf("\n=============================================================");
    fp = fopen("fees1.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Admin();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n __________");
    printf("\n|%s",add.fees);
	printf("\n|__________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Admin();
}
int show2()
{
    FILE *fp;
    struct student add;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|===================SHOW CLASSS FEES==================|");
	printf("\n\t\t\t|_____________________________________________________|");
   	printf("\n=============================================================");
    fp = fopen("fees2.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Admin();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n __________");
    printf("\n|%s",add.fees);
	printf("\n|__________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Admin();
}
int show3()
{
    FILE *fp;
    struct student add;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|===================SHOW CLASSS FEES==================|");
	printf("\n\t\t\t|_____________________________________________________|");
   	printf("\n=============================================================");
    fp = fopen("fees3.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Admin();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n __________");
    printf("\n|%s",add.fees);
	printf("\n|__________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Admin();
}
int show4()
{
    FILE *fp;
    struct student add;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|===================SHOW CLASSS FEES==================|");
	printf("\n\t\t\t|_____________________________________________________|");
   	printf("\n=============================================================");
    fp = fopen("fees4.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Admin();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n __________");
    printf("\n|%s",add.fees);
	printf("\n|__________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Admin();
}
int show5()
{
    FILE *fp;
    struct student add;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|===================SHOW CLASSS FEES==================|");
	printf("\n\t\t\t|_____________________________________________________|");
   	printf("\n=============================================================");
    fp = fopen("fees5.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Admin();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n __________");
    printf("\n|%s",add.fees);
	printf("\n|__________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Admin();
}
int show6()
{
    FILE *fp;
    struct student add;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|===================SHOW CLASSS FEES==================|");
	printf("\n\t\t\t|_____________________________________________________|");
   	printf("\n=============================================================");
    fp = fopen("fees6.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Admin();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n __________");
    printf("\n|%s",add.fees);
	printf("\n|__________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Admin();
}
int show7()
{
    FILE *fp;
    struct student add;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|===================SHOW CLASSS FEES==================|");
	printf("\n\t\t\t|_____________________________________________________|");
   	printf("\n=============================================================");
    fp = fopen("fees7.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Admin();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n __________");
    printf("\n|%s",add.fees);
	printf("\n|__________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Admin();
}
int show8()
{
    FILE *fp;
    struct student add;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|===================SHOW CLASSS FEES==================|");
	printf("\n\t\t\t|_____________________________________________________|");
   	printf("\n=============================================================");
    fp = fopen("fees8.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Admin();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n __________");
    printf("\n|%s",add.fees);
	printf("\n|__________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Admin();
}
int show9()
{
    FILE *fp;
    struct student add;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|===================SHOW CLASSS FEES==================|");
	printf("\n\t\t\t|_____________________________________________________|");
   	printf("\n=============================================================");
    fp = fopen("fees9.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Admin();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n __________");
    printf("\n|%s",add.fees);
	printf("\n|__________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Admin();
}
int show10()
{
    FILE *fp;
    struct student add;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|===================SHOW CLASSS FEES==================|");
	printf("\n\t\t\t|_____________________________________________________|");
   	printf("\n=============================================================");
    fp = fopen("fees10.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Admin();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n __________");
    printf("\n|%s",add.fees);
	printf("\n|__________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Admin();
}
int modify1()
{
    char stname[30];
    FILE *fp;
    struct student add;
    
    system("cls");
    printf("\n _______________________________________________________");
    printf("\n|                                                       |");
    printf("\n|=======================UPDATE FEES=====================|");
	printf("\n|_______________________________________________________|");
    fp = fopen("fees1.txt","rb+");
    if(fp == NULL){
        printf("\n\aError! in opening file");
        printf("\nPress Any Key To Return to Main Menu....");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&add, sizeof(add), 1,fp) == 1)
    {
            printf("\n\nEnter New Fees: ");
            gets(add.fees);
            printf("\n________________________________________________________");
            printf("\n========================================================");
            fseek(fp ,-sizeof(add),SEEK_CUR);
            fwrite(&add,sizeof(add),1,fp);
			printf("\nDETIALS MODIFIED.\n");
            break;
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to goto menu...");
    getch();
    menu_Admin();
}
int modify2()
{
    char stname[30];
    FILE *fp;
    struct student add;
    
    system("cls");
    printf("\n _______________________________________________________");
    printf("\n|                                                       |");
    printf("\n|=======================UPDATE FEES=====================|");
	printf("\n|_______________________________________________________|");
    fp = fopen("fees2.txt","rb+");
    if(fp == NULL){
        printf("\n\aError! in opening file");
        printf("\nPress Any Key To Return to Main Menu....");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&add, sizeof(add), 1,fp) == 1)
    {
            printf("\n\nEnter New Fees: ");
            gets(add.fees);
            printf("\n________________________________________________________");
            printf("\n========================================================");
            fseek(fp ,-sizeof(add),SEEK_CUR);
            fwrite(&add,sizeof(add),1,fp);
			printf("\nDETIALS MODIFIED.\n");
            break;
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to goto menu...");
    getch();
    menu_Admin();
}
int modify3()
{
    char stname[30];
    FILE *fp;
    struct student add;
    
    system("cls");
    printf("\n _______________________________________________________");
    printf("\n|                                                       |");
    printf("\n|=======================UPDATE FEES=====================|");
	printf("\n|_______________________________________________________|");
    fp = fopen("fees3.txt","rb+");
    if(fp == NULL){
        printf("\n\aError! in opening file");
        printf("\nPress Any Key To Return to Main Menu....");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&add, sizeof(add), 1,fp) == 1)
    {
            printf("\n\nEnter New Fees: ");
            gets(add.fees);
            printf("\n________________________________________________________");
            printf("\n========================================================");
            fseek(fp ,-sizeof(add),SEEK_CUR);
            fwrite(&add,sizeof(add),1,fp);
			printf("\nDETIALS MODIFIED.\n");
            break;
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to goto menu...");
    getch();
    menu_Admin();
}
int modify4()
{
    char stname[30];
    FILE *fp;
    struct student add;
    
    system("cls");
    printf("\n _______________________________________________________");
    printf("\n|                                                       |");
    printf("\n|=======================UPDATE FEES=====================|");
	printf("\n|_______________________________________________________|");
    fp = fopen("fees4.txt","rb+");
    if(fp == NULL){
        printf("\n\aError! in opening file");
        printf("\nPress Any Key To Return to Main Menu....");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&add, sizeof(add), 1,fp) == 1)
    {
            printf("\n\nEnter New Fees: ");
            gets(add.fees);
            printf("\n________________________________________________________");
            printf("\n========================================================");
            fseek(fp ,-sizeof(add),SEEK_CUR);
            fwrite(&add,sizeof(add),1,fp);
			printf("\nDETIALS MODIFIED.\n");
            break;
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to goto menu...");
    getch();
    menu_Admin();
}
int modify5()
{
    char stname[30];
    FILE *fp;
    struct student add;
    
    system("cls");
    printf("\n _______________________________________________________");
    printf("\n|                                                       |");
    printf("\n|=======================UPDATE FEES=====================|");
	printf("\n|_______________________________________________________|");
    fp = fopen("fees5.txt","rb+");
    if(fp == NULL){
        printf("\n\aError! in opening file");
        printf("\nPress Any Key To Return to Main Menu....");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&add, sizeof(add), 1,fp) == 1)
    {
            printf("\n\nEnter New Fees: ");
            gets(add.fees);
            printf("\n________________________________________________________");
            printf("\n========================================================");
            fseek(fp ,-sizeof(add),SEEK_CUR);
            fwrite(&add,sizeof(add),1,fp);
			printf("\nDETIALS MODIFIED.\n");
            break;
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to goto menu...");
    getch();
    menu_Admin();
}
int modify6()
{
    char stname[30];
    FILE *fp;
    struct student add;
    
    system("cls");
    printf("\n _______________________________________________________");
    printf("\n|                                                       |");
    printf("\n|=======================UPDATE FEES=====================|");
	printf("\n|_______________________________________________________|");
    fp = fopen("fees6.txt","rb+");
    if(fp == NULL){
        printf("\n\aError! in opening file");
        printf("\nPress Any Key To Return to Main Menu....");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&add, sizeof(add), 1,fp) == 1)
    {
            printf("\n\nEnter New Fees: ");
            gets(add.fees);
            printf("\n________________________________________________________");
            printf("\n========================================================");
            fseek(fp ,-sizeof(add),SEEK_CUR);
            fwrite(&add,sizeof(add),1,fp);
			printf("\nDETIALS MODIFIED.\n");
            break;
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to goto menu...");
    getch();
    menu_Admin();
}
int modify7()
{
    char stname[30];
    FILE *fp;
    struct student add;
    
    system("cls");
    printf("\n _______________________________________________________");
    printf("\n|                                                       |");
    printf("\n|=======================UPDATE FEES=====================|");
	printf("\n|_______________________________________________________|");
    fp = fopen("fees7.txt","rb+");
    if(fp == NULL){
        printf("\n\aError! in opening file");
        printf("\nPress Any Key To Return to Main Menu....");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&add, sizeof(add), 1,fp) == 1)
    {
            printf("\n\nEnter New Fees: ");
            gets(add.fees);
            printf("\n________________________________________________________");
            printf("\n========================================================");
            fseek(fp ,-sizeof(add),SEEK_CUR);
            fwrite(&add,sizeof(add),1,fp);
			printf("\nDETIALS MODIFIED.\n");
            break;
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to goto menu...");
    getch();
    menu_Admin();
}
int modify8()
{
    char stname[30];
    FILE *fp;
    struct student add;
    
    system("cls");
    printf("\n _______________________________________________________");
    printf("\n|                                                       |");
    printf("\n|=======================UPDATE FEES=====================|");
	printf("\n|_______________________________________________________|");
    fp = fopen("fees8.txt","rb+");
    if(fp == NULL){
        printf("\n\aError! in opening file");
        printf("\nPress Any Key To Return to Main Menu....");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&add, sizeof(add), 1,fp) == 1)
    {
            printf("\n\nEnter New Fees: ");
            gets(add.fees);
            printf("\n________________________________________________________");
            printf("\n========================================================");
            fseek(fp ,-sizeof(add),SEEK_CUR);
            fwrite(&add,sizeof(add),1,fp);
			printf("\nDETIALS MODIFIED.\n");
            break;
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to goto menu...");
    getch();
    menu_Admin();
}
int modify9()
{
    char stname[30];
    FILE *fp;
    struct student add;
    
    system("cls");
    printf("\n _______________________________________________________");
    printf("\n|                                                       |");
    printf("\n|=======================UPDATE FEES=====================|");
	printf("\n|_______________________________________________________|");
    fp = fopen("fees9.txt","rb+");
    if(fp == NULL){
        printf("\n\aError! in opening file");
        printf("\nPress Any Key To Return to Main Menu....");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&add, sizeof(add), 1,fp) == 1)
    {
            printf("\n\nEnter New Fees: ");
            gets(add.fees);
            printf("\n________________________________________________________");
            printf("\n========================================================");
            fseek(fp ,-sizeof(add),SEEK_CUR);
            fwrite(&add,sizeof(add),1,fp);
			printf("\nDETIALS MODIFIED.\n");
            break;
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to goto menu...");
    getch();
    menu_Admin();
}
int modify10()
{
    char stname[30];
    FILE *fp;
    struct student add;
    
    system("cls");
    printf("\n _______________________________________________________");
    printf("\n|                                                       |");
    printf("\n|=======================UPDATE FEES=====================|");
	printf("\n|_______________________________________________________|");
    fp = fopen("fees10.txt","rb+");
    if(fp == NULL){
        printf("\n\aError! in opening file");
        printf("\nPress Any Key To Return to Main Menu....");
        getch();
        menu_Admin();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&add, sizeof(add), 1,fp) == 1)
    {
            printf("\n\nEnter New Fees: ");
            gets(add.fees);
            printf("\n________________________________________________________");
            printf("\n========================================================");
            fseek(fp ,-sizeof(add),SEEK_CUR);
            fwrite(&add,sizeof(add),1,fp);
			printf("\nDETIALS MODIFIED.\n");
            break;
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to goto menu...");
    getch();
    menu_Admin();
}
//Admin Case 9 (COORDINATOR)---------
int coordinator()
{
	int ch;
	system("cls");
	printf("\n _______________________________________");
	printf("\n|                                       |");
	printf("\n|============MANAGE COORDINATOR=========|");
	printf("\n|_______________________________________|");
	printf("\n            | (1). ADD      |");
	printf("\n            | (2). SHOW     |");
	printf("\n            | (3). MODIFY   |");
	printf("\n            | (4). SEARCH   |");
	printf("\n            | (5). DELETE   |");
	printf("\n            |_______________|");
	printf("\n========================================");
	printf("\n      Press (6) To Return To Menu");
	printf("\n          Enter your choice:");
	scanf("%d",&ch);
	
	switch (ch)
	{
		case 1:
		  add_coordinator();	
			break;
		case 2:
		  show_coordinator();
		    break;
		case 3:
			modify_coordinator();
			break;
		case 4:
			search_coordinator();
			break;
		case 5:
			delete_coordinator();
			break;
		case 6:
			menu_Admin();
		default:
			printf("\a");
			coordinator();
	}
}
int add_coordinator()
{
    FILE *fileOne = fopen("cordinator.txt", "ab+");
    struct cordinator Type;
    system("cls");
    printf("\n _____________________________________________________");
    printf("\n|                                                     |");
    printf("\n|====================ADD COORDINATOR==================|");
	printf("\n|_____________________________________________________|");
	printf("\n _________________=====================_______________");
    printf("\n\nEnter Coordinator Name: ");
    getchar();
    gets(Type.name);
    printf("\nEnter ID: ");
    gets(Type.id);
    printf("\nEnter Qualification: ");
    gets(Type.qualification);
    printf("\nEnter Contact Number: ");
    gets(Type.no);
    printf("\nEnter Class: ");
    gets(Type.class);
	printf("\n____________________________________________________");
	printf("\n====================================================");
    fwrite(&Type, sizeof(Type), 1, fileOne);
    printf("\n\nInformations have been stored sucessfully");
    printf("\nEnter any keys to Goto Menu.......");
    getch();
    fclose(fileOne);
    coordinator();
}
int show_coordinator()
{
    FILE *fp;
    struct cordinator Info;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|==================SHOW ALL COORDINATOR===============|");
	printf("\n\t\t\t|_____________________________________________________|");
	printf("\n\n ____________________________________________________________________________________");
    printf("\n|Coordinator Name    |Qualification  |Id             |Class          |Phone Number   |");  
    printf("\n|____________________|_______________|_______________|_______________|_______________|");
   	printf("\n                                 ==================");
    fp = fopen("cordinator.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        coordinator();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    printf("\n ____________________________________________________________________________________");
    printf("\n|%s\t\t     |%s\t     |%s\t     |%s\t     |%s    |",Info.name,Info.qualification,Info.id,Info.class,Info.no);
	printf("\n|____________________|_______________|_______________|_______________|_______________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    coordinator();
}
int modify_coordinator()
{
    char stname[40];
    FILE *fp;
    struct cordinator Info;
    system("cls");
    printf("\n ________________________________________________________");
    printf("\n|                                                        |");
    printf("\n|=================MODIFY COORDINATOR DETAILS=============|");
	printf("\n|________________________________________________________|");
    printf("\n\nEnter name of Coordinator to modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("cordinator.txt","rb+");
    if(fp == NULL){
        printf("\n\aError! in opening file");
        printf("\nPress Any Key To Return to Main Menu....");
        getch();
        coordinator();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
        if(strcmp(stname,Info.name) == 0){
            printf("\n\nEnter  Name: ");
            gets(Info.name);
            printf("\nEnter Phone Number: ");
            gets(Info.no);
            printf("\nEnter Qualification: ");
            fflush(stdin);
            gets(Info.qualification);
            printf("\nEnter Class: ");
            fflush(stdin);
            gets(Info.class);
            printf("\n________________________________________________________");
            printf("\n========================================================");
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
			printf("\nDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return menu...");
    getch();
    coordinator();
}
int search_coordinator()
{ 
    FILE *fp;
    struct cordinator type;
    char stname[20];
    system("cls");
    printf("\n\t\t\t ______________________________________________");
	printf("\n\t\t\t|                                              |");
    printf("\n\t\t\t|===============Search Coordinator=============|");
	printf("\n\t\t\t|______________________________________________|");
	printf("\n\n\t\tEnter Name of Coordinator: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("cordinator.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To Return toMain Menu");
        getch();
        coordinator();
    }
    while(fread(&type,sizeof(type),1,fp ) == 1){
        if(strcmp(stname,type.name) == 0){
			printf("\n\n_____________________________________________");
			printf("\n=============================================");
            printf("\n\tName: %s",type.name);
            printf("\n\tID: %s",type.id);
            printf("\n\tQualification: %s",type.qualification);
			printf("\n\tPhone Number:%s",type.no);
			printf("\n\tClass: %s",type.class);
			printf("\n______________________________________________");
			printf("\n==============================================");
        }
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Goto menu.");
    getch();
    coordinator();
}
int delete_coordinator()
{
    char stname[20];
    struct cordinator Info;
    system("cls");
    printf("\n _________________________________________________________");
    printf("\n|                                                         |");
    printf("\n|=====================Delete Coordinator==================|");
	printf("\n|_________________________________________________________|");
    printf("\n\n_____________________________________");
    printf("\n =================================== ");
    printf("\n\nEnter name of Coordinator to be Deleted: ");
    fflush(stdin);
    gets(stname);
    printf("\n\n ___________________________________");
    printf("\n=====================================");
    FILE*fp = fopen("cordinator.txt","rb+");
    if(fp == NULL){
        printf("\n\aError opening file");
        printf("\nPress Any key to return to Main Menu");
        getch();
        coordinator();
    }
    FILE*ft = fopen("temporary3.txt","wb+");
    if(ft == NULL){
        printf("\n\aError opening file");
        printf("\nPress Any Key To return to Main Menu");
        getch();
        coordinator();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1)
	{
        if(strcmp(stname,Info.name)!=0)
        fwrite(&Info,sizeof(Info),1,ft);
    }
    fclose(fp);
    fclose(ft);
    remove("cordinator.txt");
    rename("temporary3.txt","cordinator.txt");
    printf("\n\nCoordinator Deleted...");
    printf("\nPress any key to return Main Menu.");
    getch();
    coordinator();	
}


//Teacher Switch case 1 (SHOW PROFILE)------ 
void showprofile()
{
    FILE *fp;
    struct teacher Info;
    char stname[20];
    system("cls");

    
    printf("\n\t\t\t ________________________________________________________");
    printf("\n\t\t\t|                                                        |");
    printf("\n\t\t\t|=======================Show Profile=====================|");
	printf("\n\t\t\t|________________________________________________________|");
    printf("\n\n\tEnter your Name: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("teacher.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress any Key to goto Menu..");
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\t\t\t_______________________________________________");
            printf("\n\t\t\t===============================================");
            printf("\n\t\t\t _____________________________________");
            printf("\n\t\t\t|First Name: %s",Info.first_name);
            printf("\n\t\t\t|ID: %s",Info.id);
            printf("\n\t\t\t|Qualification: %s",Info.Qualification);
            printf("\n\t\t\t|Subject: %s",Info.subject);
			printf("\n\t\t\t|Phone Number:%s",Info.phone_number);
			printf("\n\t\t\t|Rank: %s",Info.rank);
			printf("\n\t\t\t|______________________________________");
	        printf("\n\t\t\t_________________________________________________");
            printf("\n\t\t\t=================================================");
        }
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return Menu.");
    getch();
    menu_Teacher();
}
//Teacher Switch Case 2 (SHOW STUDENTS)------
void showStudentTeacher()
{
	Main:
	system("cls");
    int c_c,s_c;
    printf("\n\t\t\t\t\t\t\t _________________________________________");
    printf("\n\t\t\t\t\t\t\t|                                         |");
    printf("\n\t\t\t\t\t\t\t|===============Select Class==============|");
    printf("\n\t\t\t\t\t\t\t|_________________________________________|\n");
	printf("\n\t\t\t\t\t\t\t   _____________________________________");
	printf("\n\t\t\t\t\t\t\t   =====================================");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 1st|  |Class 2nd|  |Class 3rd|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 4th|  |Class 5th|  |Class 6th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
    printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 7th|  |Class 8th|  |Class 9th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
   	printf("\n\t\t\t\t\t\t\t    ___________________________________");
	printf("\n\t\t\t\t\t\t\t   |                                   |");
	printf("\n\t\t\t\t\t\t\t   |             Class 10th            |");
    printf("\n\t\t\t\t\t\t\t   |___________________________________|");
	printf("\n\t\t\t\t\t\t\t   _____________________________________");
	printf("\n\t\t\t\t\t\t\t   =====================================");
	printf("\n\t\t\t\t\t\t\t     Enter 11 To Return to Login Page");
	printf("\n\t\t\t\t\t\t\t            Enter Your Choice:");
    scanf("%d",&c_c);
	
	switch (c_c)
	{
	case 1:
		A:
		system("cls");
		printf("\n\t\t __________________________________");
		printf("\n\t\t|                                  |");
		printf("\n\t\t|==============Class 1=============|");
		printf("\n\t\t|__________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show all Students");
		printf("\n2.Search Student Details");
		printf("\n3.Modify Students");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			show_1_Teacher();
			break;
		case 2:
			search_1_Teacher();
			break;
		case 3:
			modify_students_c1();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto A;
			break;
		}
		
		break;
	case 2:
		B:
		system("cls");
		printf("\n\t\t __________________________________");
		printf("\n\t\t|                                  |");
		printf("\n\t\t|==============Class 2=============|");
		printf("\n\t\t|__________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n2.Show all Students");
		printf("\n3.Search Student Details");
		printf("\n3.Modify Students");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			show_2_Teacher();
			break;
		case 2:
			search_2_Teacher();
			break;
		case 3:
			modify_students_c2();
			break;
		default:
            printf("\n________________");
			printf("\n\aInvalid Choice!..");
			printf("\n________________");
			printf("\nPress Any key to ReEnter..");
			getch();
			goto B;
			break;
		}
		
		break;
	case 3:
		C:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 3=============|");
		printf("\n\t\t|_________________________________|");
        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show all Students");
		printf("\n2.Search Student Details");
		printf("\n3.Modify Students");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			show_3_Teacher();
			break;
		case 2:
			search_3_Teacher();
			break;
		case 3:
			modify_students_c3();
			break;
		default:
			printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
            printf("\nPress Any key to ReEnter");
            getch();
            goto C;
			break;
		}
		
		break;
	case 4:
		D:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|==============Class 4============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show all Students");
		printf("\n2.Search Student Details");
		printf("\n3.Modify Students");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			show_4_Teacher();
			break;
		case 2:
			search_4_Teacher();
			break;
		case 3:
			modify_students_c4();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto D;
			break;
		}
		
		break;
	case 5:
		E:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 5=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show all Students");
		printf("\n2.Search Student Details");
		printf("\n3.Modify Students");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			show_5_Teacher();
			break;
		case 2:
			search_5_Teacher();
			break;
		case 3:
			modify_students_c5();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto E;
			break;
		}
		
		break;
	case 6:
		F:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 6=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show all Students");
		printf("\n2.Search Student Details");
		printf("\n3.Modify Students");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			show_6_Teacher();
			break;
		case 2:
			search_6_Teacher();
			break;
		case 3:
			modify_students_c6();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto F;
			break;
		}
		
		break;
	case 7:
		G:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 7=============|");
		printf("\n\t\t|_________________________________|");
        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show all Students");
		printf("\n2.Search Student Details");
		printf("\n3.Modify Students");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			show_7_Teacher();
			break;
		case 2:
			search_7_Teacher();
			break;
		case 3:
			modify_students_c7();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto G;
			break;
		}
		
		break;
	case 8:
		H:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 8=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show all Students");
		printf("\n2.Search Student Details");
		printf("\n3.Modify Students");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			show_8_Teacher();
			break;
		case 2:
			search_8_Teacher();
			break;
		case 3:
			modify_students_c8();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto H;
			break;
		}
		
		break;
	case 9:
		I:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 9=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show all Students");
		printf("\n2.Search Student Details");
		printf("\n3.Modify Students");
        printf("\n_____________________________________");
		printf("\n=====================================");
		printf("\nEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			show_9_Teacher();
			break;
		case 2:
			search_9_Teacher();
			break;
		case 3:
			modify_students_c9();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto I;
			break;
		}
		
		break;
	case 10:
		J:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 10============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.Show all Students");
		printf("\n2.Search Student Details");
		printf("\n3.Modify Students");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			show_10_Teacher();
			break;
		case 2:
			search_10_Teacher();
			break;
		case 3:
			modify_students_c10();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto J;
			break;
		}	
		break;
	case 11:
		main();
		break;
	default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto Main;
		break;
	}

}
void search_1_Teacher()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_1.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to return to Main Menu..");
    getch();
    menu_Teacher();
}
void search_2_Teacher()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_2.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key to return to Main Menu");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to return to Main Menu..");
    getch();
    menu_Teacher();
}
void search_3_Teacher()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_3.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Teacher();
}
void search_4_Teacher()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_4.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Teacher();
}
void search_5_Teacher()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_5.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Teacher();
}
void search_6_Teacher()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_6.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Teacher();
}
void search_7_Teacher()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_7.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return To Main Menu..");
    getch();
    menu_Teacher();
}
void search_8_Teacher()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_8.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Teacher();
}
void search_9_Teacher()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_9.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Teacher();
}
void search_10_Teacher()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_10.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Teacher();
}
void show_1_Teacher()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n _________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_1.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Teacher();
}
void show_2_Teacher()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n _________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_2.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Teacher();
}
void show_3_Teacher()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n _________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_3.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
     	printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return To Main Menu.");
    getch();
    menu_Teacher();
}
void show_4_Teacher()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n _________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_4.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        	printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Teacher();
}
void show_5_Teacher()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n __________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_5.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Teacher();
}
void show_6_Teacher()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n __________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_6.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
       	printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Teacher();
}
void show_7_Teacher()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n __________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_7.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
       	printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Teacher();
}
void show_8_Teacher()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n __________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_8.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
       	printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return To Main Menu.");
    getch();
    menu_Teacher();
}
void show_9_Teacher()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n __________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_9.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Teacher();
}
void show_10_Teacher()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n ______________________________________________________________________");
    printf("\n|Name of Students      |Father's Name  |Roll No        |Class  |Group  |");  
    printf("\n|______________________|_______________|_______________|_______|_______|");
    printf("\n                                       ============");
    fp = fopen("student_c_10.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
       	printf("\n ______________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s|",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|______________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Teacher();
}
void modify_students_c1()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|================Modify Details of Students============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_1.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\n\t\t\tEnter Student's Name : ");
			getchar();
			gets(Info.first_name);
			printf("\n\t\t\tEnter Students's Father Name : ");
			gets(Info.father_name);
			printf("\n\t\t\tEnter Students's Roll no : ");
			gets(Info.roll_no);
			printf("\t\t\tEnter Student's Class: ");
			gets(Info.class);
			printf("\t\t\tEnter Student's Group(Science/Arts) : ");
			gets(Info.group);
			printf("\t\t\tEnter Student's Gender : ");
			gets(Info.gender);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
			printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Teacher();
}
void modify_students_c2()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|================Modify Details of Students============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_2.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\t\t\tEnter Student's Name : ");
			getchar();
			gets(Info.first_name);
			printf("\n\t\t\tEnter Students's Father Name : ");
			gets(Info.father_name);
			printf("\n\t\t\tEnter Students's Roll no : ");
			gets(Info.roll_no);
			printf("\t\t\tEnter Student's Class: ");
			gets(Info.class);
			printf("\t\t\tEnter Student's Group(Science/Arts) : ");
			gets(Info.group);
			printf("\t\t\tEnter Student's Gender : ");
			gets(Info.gender);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Teacher();
}
void modify_students_c3()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|================Modify Details of Students============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_3.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
	
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\t\t\tEnter Student's Name : ");
			getchar();
			gets(Info.first_name);
			printf("\n\t\t\tEnter Students's Father Name : ");
			gets(Info.father_name);
			printf("\n\t\t\tEnter Students's Roll no : ");
			gets(Info.roll_no);
			printf("\t\t\tEnter Student's Class: ");
			gets(Info.class);
			printf("\t\t\tEnter Student's Group(Science/Arts) : ");
			gets(Info.group);
			printf("\t\t\tEnter Student's Gender : ");
			gets(Info.gender);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Teacher();
}
void modify_students_c4()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|================Modify Details of Students============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_4.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\t\t\tEnter Student's Name : ");
			getchar();
			gets(Info.first_name);
			printf("\n\t\t\tEnter Students's Father Name : ");
			gets(Info.father_name);
			printf("\n\t\t\tEnter Students's Roll no : ");
			gets(Info.roll_no);
			printf("\t\t\tEnter Student's Class: ");
			gets(Info.class);
			printf("\t\t\tEnter Student's Group(Science/Arts) : ");
			gets(Info.group);
			printf("\t\t\tEnter Student's Gender : ");
			gets(Info.gender);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Teacher();
}
void modify_students_c5()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|================Modify Details of Students============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_5.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
	
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\t\t\tEnter Student's Name : ");
			getchar();
			gets(Info.first_name);
			printf("\n\t\t\tEnter Students's Father Name : ");
			gets(Info.father_name);
			printf("\n\t\t\tEnter Students's Roll no : ");
			gets(Info.roll_no);
			printf("\t\t\tEnter Student's Class: ");
			gets(Info.class);
			printf("\t\t\tEnter Student's Group(Science/Arts) : ");
			gets(Info.group);
			printf("\t\t\tEnter Student's Gender : ");
			gets(Info.gender);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Teacher();
}
void modify_students_c6()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|================Modify Details of Students============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_6.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
	
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\t\t\tEnter Student's Name : ");
			getchar();
			gets(Info.first_name);
			printf("\n\t\t\tEnter Students's Father Name : ");
			gets(Info.father_name);
			printf("\n\t\t\tEnter Students's Roll no : ");
			gets(Info.roll_no);
			printf("\t\t\tEnter Student's Class: ");
			gets(Info.class);
			printf("\t\t\tEnter Student's Group(Science/Arts) : ");
			gets(Info.group);
			printf("\t\t\tEnter Student's Gender : ");
			gets(Info.gender);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Teacher();
}
void modify_students_c7()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|================Modify Details of Students============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_7.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\t\t\tEnter Student's Name : ");
			getchar();
			gets(Info.first_name);
			printf("\n\t\t\tEnter Students's Father Name : ");
			gets(Info.father_name);
			printf("\n\t\t\tEnter Students's Roll no : ");
			gets(Info.roll_no);
			printf("\t\t\tEnter Student's Class: ");
			gets(Info.class);
			printf("\t\t\tEnter Student's Group(Science/Arts) : ");
			gets(Info.group);
			printf("\t\t\tEnter Student's Gender : ");
			gets(Info.gender);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Teacher();
}
void modify_students_c8()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|================Modify Details of Students============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_8.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\t\t\tEnter Student's Name : ");
			getchar();
			gets(Info.first_name);
			printf("\n\t\t\tEnter Students's Father Name : ");
			gets(Info.father_name);
			printf("\n\t\t\tEnter Students's Roll no : ");
			gets(Info.roll_no);
			printf("\t\t\tEnter Student's Class: ");
			gets(Info.class);
			printf("\t\t\tEnter Student's Group(Science/Arts) : ");
			gets(Info.group);
			printf("\t\t\tEnter Student's Gender : ");
			gets(Info.gender);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Teacher();
}
void modify_students_c9()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|================Modify Details of Students============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_9.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\t\t\tEnter Student's Name : ");
			getchar();
			gets(Info.first_name);
			printf("\n\t\t\tEnter Students's Father Name : ");
			gets(Info.father_name);
			printf("\n\t\t\tEnter Students's Roll no : ");
			gets(Info.roll_no);
			printf("\t\t\tEnter Student's Class: ");
			gets(Info.class);
			printf("\t\t\tEnter Student's Group(Science/Arts) : ");
			gets(Info.group);
			printf("\t\t\tEnter Student's Gender : ");
			gets(Info.gender);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Teacher();
}
void modify_students_c10()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t ______________________________________________________");
    printf("\n\t\t\t|                                                      |");
    printf("\n\t\t\t|================Modify Details of Students============|");
	printf("\n\t\t\t|______________________________________________________|");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_10.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Teacher();
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\t\t\tEnter Student's Name : ");
			getchar();
			gets(Info.first_name);
			printf("\n\t\t\tEnter Students's Father Name : ");
			gets(Info.father_name);
			printf("\n\t\t\tEnter Students's Roll no : ");
			gets(Info.roll_no);
			printf("\t\t\tEnter Student's Class: ");
			gets(Info.class);
			printf("\t\t\tEnter Student's Group(Science/Arts) : ");
			gets(Info.group);
			printf("\t\t\tEnter Student's Gender : ");
			gets(Info.gender);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
			printf("\n\t\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to Return to Main Menu...");
    getch();
    menu_Teacher();
}
//Teacher Switch Case 3 (TIME TABLE)---------
int time_table()
{
    FILE *fp;
    char name[20];
    struct teacher Info;
    system("cls");
    printf("\n\t\t\t ____________________________________________");
    printf("\n\t\t\t|                                            |");
    printf("\n\t\t\t|==================Time Table================|");
	printf("\n\t\t\t|____________________________________________|");
	printf("\n\nEnter Your Name:");
    fflush(stdin);
    gets(name);
    fp = fopen("timetable.txt","ab+");
    if(fp == NULL){
        printf("\n\n\a\t\tError  in opening file.\n\n");
        printf("\nEnter Any key To Go to Menu...");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
            if(strcmp(name,Info.first_name) == 0){
			printf("\n\n\t\t\t_____________________________________________");
			printf("\n\t\t\t=============================================");
			printf("\n\t\t\t ________________________________________");
            printf("\n\t\t\t|First Name: %s",Info.first_name);
            printf("\n\t\t\t|Subject: %s",Info.subject);
			printf("\n\t\t\t|Class in Period 1:%s",Info.period1);
        	printf("\n\t\t\t|Class in Period 2:%s",Info.period2);	
	    	printf("\n\t\t\t|Class in Period 3:%s",Info.period3);
			printf("\n\t\t\t|Class in Period 4:%s",Info.period4);	
			printf("\n\t\t\t|Class in Period 5:%s",Info.period5);
			printf("\n\t\t\t|Class in Period 6:%s",Info.period6);
			printf("\n\t\t\t|________________________________________");
			printf("\n\t\t\t_____________________________________________");
			printf("\n\t\t\t=============================================");
    }
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    fclose(fp);
    menu_Teacher();
}
}
//Teacher Switch Case 4 (COPY CHECK)---------
int copy_check()
{
	FILE *fp;
    struct teacher Info;
    char name[20];
    system("cls");
    printf("\n\t\t\t ___________________________________________________________");
    printf("\n\t\t\t|                                                           |");
    printf("\n\t\t\t|=================Notebook Checking Schedule================|");
	printf("\n\t\t\t|___________________________________________________________|");
	printf("\n\nEnter Your Name:");
    fflush(stdin);
    gets(name);
    fp = fopen("copychecking.txt","ab+");
    if(fp == NULL){
        printf("\n\n\a\t\tError  in opening file.\n\n");
        printf("\nEnter Any key To Go to Menu...");
        getch();
        menu_Teacher();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
            if(strcmp(name,Info.first_name) == 0){
	        printf("\n\n\t\t\t_____________________________________________________");
			printf("\n\t\t\t=====================================================");
			printf("\n\t\t\t ____________________________________________________");
            printf("\n\t\t\t|First Name: %s",Info.first_name);
            printf("\n\t\t\t|Subject: %s",Info.subject);
			printf("\n\t\t\t|Notebook Checking Class And Day:%s,%s",Info.copycheckclass1,Info.copycheckday1);
			printf("\n\t\t\t|Notebook Checking Class And Day:%s,%s",Info.copycheckclass2,Info.copycheckday2);
	    	printf("\n\t\t\t|Notebook Checking Class And Day:%s,%s",Info.copycheckclass3,Info.copycheckday3);
			printf("\n\t\t\t|____________________________________________________");
			printf("\n\t\t\t_____________________________________________________");
			printf("\n\t\t\t=====================================================");
        }
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    fclose(fp);
    menu_Teacher();
    }
}
//Teacher Switch Case 5 (SHOW Events)--------
void showEvent()
{
    FILE *fp;
    struct event add;
    
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|==================Show All EVENTS====================|");
	printf("\n\t\t\t|_____________________________________________________|");
	printf("\n _______________________________________________________________________________");
    printf("\n|                Event Name             |                    Date               |");  
    printf("\n|_______________________________________|_______________________________________|");
   	printf("\n=============================================================");
    fp = fopen("Events.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Teacher();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n _______________________________________________________________________________");
    printf("\n|%s                      \t|%s                      \t|",add.e_name,add.e_date);
	printf("\n|_______________________________________|_______________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Teacher();

}


//Student Case (Manage Students)------
void students_c_1()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n _________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_1.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Student();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
    	printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Student();
}
void students_c_2()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n _________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_2.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Student();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Student();
}
void students_c_3()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n _________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_3.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Student();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
     	printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return To Main Menu.");
    getch();
    menu_Student();
}
void students_c_4()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n _________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_4.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Student();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        	printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Student();
}
void students_c_5()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n __________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_5.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Student();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Student();
}
void students_c_6()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n __________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_6.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Student();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
       	printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Student();
}
void students_c_7()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n __________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_7.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Student();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
       	printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Student();
}
void students_c_8()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n __________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_8.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Student();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
       	printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return To Main Menu.");
    getch();
    menu_Student();
}
void students_c_9()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n __________________________________________________________________________________________");
    printf("\n|Name of Students       |Father's Name        |Roll No        |Class        |Group        |");  
    printf("\n|_______________________|_____________________|_______________|_____________|_____________|");
    printf("\n                                       ============");
    fp = fopen("student_c_9.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Student();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n _______________________________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|_______________________________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Student();
}
void students_c_10()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\t\t\t _______________________________________________________");
    printf("\n\t\t\t|                                                       |");
    printf("\n\t\t\t|===================Show All of Students================|");
	printf("\n\t\t\t|_______________________________________________________|");
	printf("\n ______________________________________________________________________");
    printf("\n|Name of Students      |Father's Name  |Roll No        |Class  |Group  |");  
    printf("\n|______________________|_______________|_______________|_______|_______|");
    printf("\n                                       ============");
    fp = fopen("student_c_10.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Student();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
       	printf("\n ______________________________________________________________________");
        printf("\n|%s \t\t%s \t\t%s \t%s \t%s|",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n|______________________________________________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Student();
}
void search_c_1()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_1.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Student();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to return to Main Menu..");
    getch();
    menu_Student();
}
void search_c_2()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_2.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key to return to Main Menu");
        getch();
        menu_Student();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to return to Main Menu..");
    getch();
    menu_Student();
}
void search_c_3()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_3.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Student();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Student();
}
void search_c_4()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_4.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Student();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Student();
}
void search_c_5()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_5.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Student();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Student();
}
void search_c_6()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_6.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Student();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Student();
}
void search_c_7()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_7.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Student();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return To Main Menu..");
    getch();
    menu_Student();
}
void search_c_8()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_8.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Student();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Student();
}
void search_c_9()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_9.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Student();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Student();
}
void search_c_10()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_10.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Student();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Student();
}
void showEvents()
{
	    FILE *fp;
    struct event add;
    
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|==================Show All EVENTS====================|");
	printf("\n\t\t\t|_____________________________________________________|");
	printf("\n _______________________________________________________________________________");
    printf("\n|                Event Name             |                    Date               |");  
    printf("\n|_______________________________________|_______________________________________|");
   	printf("\n=============================================================");
    fp = fopen("Events.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Student();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n _______________________________________________________________________________");
    printf("\n|%s                      \t|%s                      \t|",add.e_name,add.e_date);
	printf("\n|_______________________________________|_______________________________________|");;
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Student();

}

//Parent Case 1(SHOW YOUR CHILD)
int showParent()
{
	Main:
	system("cls");
    int c_c,s_c;
    printf("\n\t\t\t\t\t\t\t _________________________________________");
    printf("\n\t\t\t\t\t\t\t|                                         |");
    printf("\n\t\t\t\t\t\t\t|===============Select Class==============|");
    printf("\n\t\t\t\t\t\t\t|_________________________________________|\n");
	printf("\n\t\t\t\t\t\t\t   _____________________________________");
	printf("\n\t\t\t\t\t\t\t   =====================================");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 1st|  |Class 2nd|  |Class 3rd|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
	printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 4th|  |Class 5th|  |Class 6th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
    printf("\n\t\t\t\t\t\t\t    _________    _________    _________");
	printf("\n\t\t\t\t\t\t\t   |         |  |         |  |         |");
	printf("\n\t\t\t\t\t\t\t   |Class 7th|  |Class 8th|  |Class 9th|");
    printf("\n\t\t\t\t\t\t\t   |_________|  |_________|  |_________|");
   	printf("\n\t\t\t\t\t\t\t    ___________________________________");
	printf("\n\t\t\t\t\t\t\t   |                                   |");
	printf("\n\t\t\t\t\t\t\t   |             Class 10th            |");
    printf("\n\t\t\t\t\t\t\t   |___________________________________|");
	printf("\n\t\t\t\t\t\t\t   _____________________________________");
	printf("\n\t\t\t\t\t\t\t   =====================================");
	printf("\n\t\t\t\t\t\t\t     Enter 11 To Return to Login Page");
	printf("\n\t\t\t\t\t\t\t            Enter Your Choice:");
    scanf("%d",&c_c);
	
	switch (c_c)
	{
	case 1:
		A:
		system("cls");
		printf("\n\t\t __________________________________");
		printf("\n\t\t|                                  |");
		printf("\n\t\t|==============Class 1=============|");
		printf("\n\t\t|__________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.SEARCH YOUR CHILD");
		printf("\n2.SHOW FEES");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			search_1();
			break;
		case 2:
			shows1();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto A;
			break;
		}
		
		break;
	case 2:
		B:
		system("cls");
		printf("\n\t\t __________________________________");
		printf("\n\t\t|                                  |");
		printf("\n\t\t|==============Class 2=============|");
		printf("\n\t\t|__________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.SEARCH YOUR CHILD");
		printf("\n2.SHOW FEES");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			search_2();
			break;
		case 2:
			shows2();
			break;
		default:
            printf("\n________________");
			printf("\n\aInvalid Choice!..");
			printf("\n________________");
			printf("\nPress Any key to ReEnter..");
			getch();
			goto B;
			break;
		}
		
		break;
	case 3:
		C:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 3=============|");
		printf("\n\t\t|_________________________________|");
        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.SEARCH YOUR CHILD");
		printf("\n2.SHOW FEES");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			search_3();
			break;
		case 2:
			shows3();
			break;
		default:
			printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
            printf("\nPress Any key to ReEnter");
            getch();
            goto C;
			break;
		}
		
		break;
	case 4:
		D:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|==============Class 4============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.SEARCH YOUR CHILD");
		printf("\n2.SHOW FEES");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			search_4();
			break;
		case 2:
			shows4();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto D;
			break;
		}
		
		break;
	case 5:
		E:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 5=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.SEARCH YOUR CHILD");
		printf("\n2.SHOW FEES");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			search_5();
			break;
		case 2:
			shows5();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto E;
			break;
		}
		
		break;
	case 6:
		F:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 6=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.SEARCH YOUR CHILD");
		printf("\n2.SHOW FEES");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			search_6();
			break;
		case 2:
			shows6();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto F;
			break;
		}
		
		break;
	case 7:
		G:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 7=============|");
		printf("\n\t\t|_________________________________|");
        printf("\n\n_____________________________________");
        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.SEARCH YOUR CHILD");
		printf("\n2.SHOW FEES");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			search_7();
			break;
		case 2:
			shows7();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto G;
			break;
		}
		
		break;
	case 8:
		H:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 8=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.SEARCH YOUR CHILD");
		printf("\n2.SHOW FEES");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			search_8();
			break;
		case 2:
			shows8();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto H;
			break;
		}
		
		break;
	case 9:
		I:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 9=============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.SEARCH YOUR CHILD");
	    printf("\n2.SHOW FEES");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			search_9();
			break;
		case 2:
			shows9();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto I;
			break;
		}
		
		break;
	case 10:
		J:
		system("cls");
		printf("\n\t\t _________________________________");
		printf("\n\t\t|                                 |");
		printf("\n\t\t|=============Class 10============|");
		printf("\n\t\t|_________________________________|");

        printf("\n\n_____________________________________");
        printf("\n=====================================");
		printf("\n1.SEARCH YOUR CHILD");
		printf("\n2.SHOW FEES");
        printf("\n_____________________________________");
        printf("\n=====================================");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			search_10();
			break;
		case 2:
			shows10();
			break;
		default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto J;
			break;
		}
		break;
	case 11:
		main();
		break;
	default:
            printf("\n_________________");
			printf("\n\aInvalid Choice!..");
			printf("\n_________________");
			printf("\nPress Any key to ReEnter");
			getch();
			goto Main;
		break;
	}

}
void search_1()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_1.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Parent();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to return to Main Menu..");
    getch();
    menu_Parent();
}
void search_2()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_2.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key to return to Main Menu");
        getch();
        menu_Parent();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to return to Main Menu..");
    getch();
    menu_Parent();
}
void search_3()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_3.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Parent();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Parent();
}
void search_4()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_4.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Parent();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu.");
    getch();
    menu_Parent();
}
void search_5()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_5.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Parent();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Parent();
}
void search_6()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_6.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Parent();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Parent();
}
void search_7()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_7.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Parent();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return To Main Menu..");
    getch();
    menu_Parent();
}
void search_8()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_8.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Parent();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Parent();
}
void search_9()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_9.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Parent();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Parent();
}
void search_10()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
    printf("\n\t\t\t _________________________________________");
	printf("\n\t\t\t|                                         |");
    printf("\n\t\t\t|==============SEARCH STUDENT=============|");
	printf("\n\t\t\t|_________________________________________|");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_10.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Parent();
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t _______________________________________");
	printf("\n\t\t\t|Name:%s",Info.first_name);
	printf("\n\t\t\t|Father's Name:%s",Info.father_name);
	printf("\n\t\t\t|Roll No:%s",Info.roll_no);
	printf("\n\t\t\t|CLass:%s",Info.class);
	printf("\n\t\t\t|Group:%s",Info.group);
	printf("\n\t\t\t|Gender:%s",Info.gender);
    printf("\n\t\t\t|_______________________________________");
	printf("\n\n\t\t\t_______________________________________________");
	printf("\n\t\t\t===============================================");
        }
    }
    fclose(fp);
    printf("\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Parent();
}
int shows1()
{
    FILE *fp;
    struct student add;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|===================SHOW CLASSS FEES==================|");
	printf("\n\t\t\t|_____________________________________________________|");
   	printf("\n=============================================================");
    fp = fopen("fees1.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Parent();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n __________");
    printf("\n|%s",add.fees);
	printf("\n|__________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Parent();
}
int shows2()
{
    FILE *fp;
    struct student add;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|===================SHOW CLASSS FEES==================|");
	printf("\n\t\t\t|_____________________________________________________|");
   	printf("\n=============================================================");
    fp = fopen("fees2.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Parent();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n __________");
    printf("\n|%s",add.fees);
	printf("\n|__________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Parent();
}
int shows3()
{
    FILE *fp;
    struct student add;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|===================SHOW CLASSS FEES==================|");
	printf("\n\t\t\t|_____________________________________________________|");
   	printf("\n=============================================================");
    fp = fopen("fees3.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Parent();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n __________");
    printf("\n|%s",add.fees);
	printf("\n|__________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Parent();
}
int shows4()
{
    FILE *fp;
    struct student add;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|===================SHOW CLASSS FEES==================|");
	printf("\n\t\t\t|_____________________________________________________|");
   	printf("\n=============================================================");
    fp = fopen("fees4.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Parent();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n __________");
    printf("\n|%s",add.fees);
	printf("\n|__________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Parent();
}
int shows5()
{
    FILE *fp;
    struct student add;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|===================SHOW CLASSS FEES==================|");
	printf("\n\t\t\t|_____________________________________________________|");
   	printf("\n=============================================================");
    fp = fopen("fees5.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Parent();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n __________");
    printf("\n|%s",add.fees);
	printf("\n|__________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Parent();
}
int shows6()
{
    FILE *fp;
    struct student add;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|===================SHOW CLASSS FEES==================|");
	printf("\n\t\t\t|_____________________________________________________|");
   	printf("\n=============================================================");
    fp = fopen("fees6.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Parent();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n __________");
    printf("\n|%s",add.fees);
	printf("\n|__________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Parent();
}
int shows7()
{
    FILE *fp;
    struct student add;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|===================SHOW CLASSS FEES==================|");
	printf("\n\t\t\t|_____________________________________________________|");
   	printf("\n=============================================================");
    fp = fopen("fees7.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Parent();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n __________");
    printf("\n|%s",add.fees);
	printf("\n|__________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Parent();
}
int shows8()
{
    FILE *fp;
    struct student add;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|===================SHOW CLASSS FEES==================|");
	printf("\n\t\t\t|_____________________________________________________|");
   	printf("\n=============================================================");
    fp = fopen("fees8.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Parent();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n __________");
    printf("\n|%s",add.fees);
	printf("\n|__________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Parent();
}
int shows9()
{
    FILE *fp;
    struct student add;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|===================SHOW CLASSS FEES==================|");
	printf("\n\t\t\t|_____________________________________________________|");
   	printf("\n=============================================================");
    fp = fopen("fees9.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Parent();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n __________");
    printf("\n|%s",add.fees);
	printf("\n|__________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Parent();
}
int shows10()
{
    FILE *fp;
    struct student add;
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|===================SHOW CLASSS FEES==================|");
	printf("\n\t\t\t|_____________________________________________________|");
   	printf("\n=============================================================");
    fp = fopen("fees10.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Parent();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n __________");
    printf("\n|%s",add.fees);
	printf("\n|__________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Parent();
}
//Parent Case 2 (CONTACT TEACHERS)-----
int contact()
{
    FILE *fp;
    struct teacher Info;
    system("cls");
    printf("\n\t\t\t ________________________________________________________");
    printf("\n\t\t\t|                                                        |");
    printf("\n\t\t\t|===================CONTACT WITH TEACHERS================|");
	printf("\n\t\t\t|________________________________________________________|");
	printf("\n _______________________________________________");
    printf("\n|     Name of    |               |     Phone    |");  
    printf("\n|    Teachers    |    Subject    |     Number   |");
    printf("\n|________________|_______________|______________|");
    printf("\n                       ============");
    fp = fopen("teacher.txt","rb+");
    if(fp == NULL){
        printf("\n\aError in opening file");
        printf("\nPress Any Key To return to Main Menu..");
        getch();
        menu_Parent();
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1)
	{
        printf("\n _______________________________________________");
        printf("\n|%s\t  %s\t  %s\t|",Info.first_name,Info.subject,Info.phone_number);
		printf("\n|_______________________________________________|");
    }
    fclose(fp);
    printf("\nPress any key to Return to Main Menu..");
    getch();
    menu_Parent();
}
//Parent Case 3 (SHOW EVENTS)-----
void showevents()
{
    FILE *fp;
    struct event add;
    
    system("cls");
    printf("\n\t\t\t _____________________________________________________");
    printf("\n\t\t\t|                                                     |");
    printf("\n\t\t\t|==================Show All EVENTS====================|");
	printf("\n\t\t\t|_____________________________________________________|");
	printf("\n _______________________________________________________________________________");
    printf("\n|                Event Name             |                    Date               |");  
    printf("\n|_______________________________________|_______________________________________|");
   	printf("\n=============================================================");
    fp = fopen("Events.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        printf("\n\n\t\tPress Any Key to return to Main Menu");
        getch();
        menu_Parent();
    }
    while(fread(&add,sizeof(add),1,fp) == 1){
    printf("\n _______________________________________________________________________________");
    printf("\n|%s                      \t|%s                      \t|",add.e_name,add.e_date);
	printf("\n|_______________________________________|_______________________________________|");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to Return to Main Menu..");
    getch();
    menu_Parent();

}
//Parent Case 4 (GIVE FEEDBACK)-----
int afeedback()
{
    FILE *fp = fopen("feedback.txt", "ab+");
    if (fp == NULL)
    {
        printf("\n\aError !");
    }
    struct feedback com;
    
    system("cls");
    printf("\n ________________________________________________________________________________");
    printf("\n|                                                                                |");
    printf("\n|==============================GIVE FEEDBACK TO ADMIN============================|");
	printf("\n|________________________________________________________________________________|");
	printf("\n __________________==============================================________________\n");
    printf("\n _______________________          RULES:");
    printf("\n|                       |              1). MENTION STUDENT NAME");
    printf("\n|==Enter Your Feedback==|              2). MENTION YOUR NAME");
    printf("\n|_______________________|              3). MENTION CLASS\n\n");
    printf("\nEnter Student Name : ");
    fflush(stdin);
    gets(com.name);
    printf("\nEnter Your Name : ");
    gets(com.father);
    printf("\nEnter Class : ");
    gets(com.class);
    printf("\nEnter Feedback ID : ");
    gets(com.feedid);
    printf("\nDo You Want Fee Concession? : ");
    gets(com.feecon);
    printf("\nDo You Want Fine Remission : ");
    gets(com.fine);
    printf("\nDo Our Systems Need Betterment : ");
    gets(com.better);
    printf("\nEnter Date of Submission : ");
    gets(com.date);
    printf("\n");
    printf("\n_________________________________________________________________________________");
    printf("\n=================================================================================");
    fwrite(&com,sizeof(com),1,fp);
    fclose(fp);
    printf("\n                   Your Feedback Has Been Transfered Successfully");
    printf("\n                       Enter any keys to Return to Main Menu");
    getch();
    menu_Parent();
}	
