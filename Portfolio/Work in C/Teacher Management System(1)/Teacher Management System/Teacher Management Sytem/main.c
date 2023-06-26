#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <windows.h>

typedef struct Login
{
char ChangeUser[20];
char ChangePass[20];
char ChangeUser2[20];
char ChangePass2[20];
};
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
} teacher;
typedef struct student
{
    char first_name[10];
    char last_name[10];
	char father_name[30];
    char roll_no[10];
    char class[20];
    char group[20];
    char gender[30];
	
} student;

int main()
{   
	int choice;
	A:
    system("color 0b");
    system("cls");
		printf("\n|==========================================================|");
		printf("\n|============EMALAH FOUNDATION SCHOOL & COLLEGE============|");
		printf("\n|==========================================================|");
		printf("\n\n|----TEACHER MANAGEMENT SYSTEM----|");	
		printf("\n\nLogin As");
		printf("\n\n1)Admin");
		printf("\n2)Teacher");
		printf("\nEnter choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
    	First();
	}
	else if (choice == 2)
	{
	    Second();
	}
	else 
	{
		printf("\n\aInvalid Choice!..Press Any Key To ReEnter..");
		getch();
		goto A;
	}
}

int First()
{   
    struct Login Admin;
    int c;
    B:
    system("color 0f");
    system("cls");
	char username[15];
	char password[12];	 	
    	printf("\n|===========================|");
        printf("\n|======LOGIN AS ADMIN=======|");
        printf("\n|===========================|");
    	printf("\n\nUsername:");
    	scanf("%s",&username);
    	printf("\nPassword:");
    	scanf("%s",&password);
        printf("\n\n--------------------------");
        
    if(strcmp(username, "Afnan") == 0)
	  {
    if(strcmp(password, "admin") == 0)
	   {
    	printf("\nCorrect...");
    	printf("\nEnter any key to continue...");
        getch();
        printf("\n--------------------------");
	   }
	else
	   {
	   	printf("\a\nInvalid Password");
	   	printf("\nPress any key to ReEnter...");
	   	getch();
	   	goto B;
   	   }
      }
   else if(strcmp(username,Admin.ChangeUser) == 0)
	  {
    if(strcmp(password,Admin.ChangePass) == 0)
	   {
    	printf("\nCorrect...");
    	printf("\nEnter any key to continue...");
        getch();
        printf("\n--------------------------");
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
        Main_Menu:
        system("color 0e");
        system("cls");
	    printf("\n|=======================================================|");
	    printf("\n|======================>MAIN MENU<======================|");
	    printf("\n|=======================================================|");
        printf("\n1) ADD TEACHER");
        printf("\n2) MODIFY DETAILS OF TEACHERS");
        printf("\n3) SHOW ALL TEACHERS");
        printf("\n4) SEARCH INDIVIDUAL TEACHER");
        printf("\n5) REMOVE TEACHER");
        printf("\n6) CHANGE USERNAME AND PASSWORD");
        printf("\nEnter your choice :");
        scanf("%d",&c);
		 switch(c)
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
            change_Admin_username_password();
            break;
        default:
        	goto Main_Menu;
	}

}

int Second()
{   
    struct Login Teacher;
	int cho;
	C:
	system("color 0f");
	system("cls");
	char username[15];
	char password[12];

			printf("\n|=============================|");
			printf("\n|======LOGIN-AS-TEACHER=======|");
			printf("\n|=============================|");
			printf("\n\nUsername:");
			scanf("%s",&username);
			printf("\nPassword:");
			scanf("%s",&password);
    	
   	if(strcmp(username, "Ahmed") == 0)
	  {
    if(strcmp(password, "teacher") == 0)
	   {
    	printf("\nCorrect...");
    	printf("\nEnter any key to continue...");
        getch();
        printf("\n--------------------------");
	   }
	else
	   {
	   	printf("\a\nInvalid Password");
	   	printf("\nPress any key to ReEnter...");
	   	getch();
	   	goto C;
   	   }
      }
    else if(strcmp(username,Teacher.ChangeUser2) == 0)
	  {
    if(strcmp(password,Teacher.ChangePass2) == 0)
	   {
    	printf("\nCorrect...");
    	printf("\nEnter any key to continue...");
        getch();
        printf("\n--------------------------");
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
	        Main_Menu:
	        system("color 0e");
	        system("cls");       
	        printf("\n|=======================================================|");
			printf("\n|======================>MAIN MENU<======================|");
			printf("\n|=======================================================|");
			printf("\n1) SHOW PROFILE");
			printf("\n2) SHOW STUDENT");
			printf("\n3) CHECK TIME TABLE");
			printf("\n4) CHECK COPY CHECKING SCHEDULE");
			printf("\n5) CHANGE PASSWORD OR USERNAME");
			printf("\n\n\nEnter your choice:");
			scanf("%d",&cho);
    
    switch(cho)
    {
    	case 1:
    		showprofile();
    		break;
        case 2:
        	showStudent();
        	break;
        case 3:
        	printf("\nYour Time Table");
        	break;
        case 4:
            printf("\nCopy cheking shedule");
            break;
        case 5:
        	change_Teacher_username_password();
			break;
		default:
		    goto Main_Menu;

	}
	return 0;

}
//----Login As Admin Switch case 1 (ADD TEACHERS)----
void add_teacher()
{
    FILE *fileOne = fopen("teacher.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    struct teacher Info;
	

    system("cls");

    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<-----------=Add Details of Teacher=------------------>");
	printf("\n\n\t\t\t=======================================================");
	printf("\n\t\t\t===============================================");
	printf("\n\t\t\t-----------------------------------------------");
    printf("\n\t\t\t\tEnter Teacher's Name : ");
    getchar();
    gets(Info.first_name);
    printf("\t\t\t\tEnter Teacher's ID : ");
    gets(Info.id);
    printf("\t\t\t\tEnter Teacher's Qualification: ");
    gets(Info.Qualification);
    printf("\t\t\t\tEnter Teacher's Subject : ");
    gets(Info.subject);
    printf("\t\t\t\tEnter Teacher's Contact Number : ");
    gets(Info.phone_number);
    printf("\t\t\t\tEnter Teacher's Rank: ");
    gets(Info.rank);
	printf("\n\t\t\t-----------------------------------------------");
	printf("\n\t\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\n\t\t\tEnter any keys to continue.......");
	
    getch();

    fclose(fileOne);
}
// ---------Login As Admin Switch case 2 (MODIFY TEACHER DETAILS)----------
void modify()
{
    char stname[20];
    FILE *fp;
    struct teacher Info;
    system("cls");
    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<-----------=Modify Details of Teacher=--------------->");
	printf("\n\n\t\t\t=======================================================");
    printf("\n\n\tEnter name of Teacher to modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("teacher.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		printf("\n\t=========================================");
		printf("\n\t-----------------------------------------");
        if(strcmp(stname,Info.first_name) == 0){
            printf("\n\tEnter  Name: ");
            gets(Info.first_name);
            printf("\n\tEnter Phone Number: ");
            gets(Info.phone_number);
            printf("\n\tEnter Qualification: ");
            fflush(stdin);
            gets(Info.Qualification);
            printf("\n\tEnter Subject: ");
            fflush(stdin);
            gets(Info.subject);
			printf("\n\tEnter Rank:");
			gets(Info.rank);
            fseek(fp ,-sizeof(Info),SEEK_CUR);
            fwrite(&Info,sizeof(Info),1,fp);
			
			printf("\n--------------------------------------");
			printf("\n======================================");
			printf("DETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to continue...");
    getch();
}
// -------Login As Admin Switch case 5 (SEARCH TEACHERS)-------
void search()
{
    FILE *fp;
    struct teacher Info;
    char stname[20];
    system("cls");
	printf("\n\n\t\t\t==========================================");
    printf("\n\n\t\t\t<-----------=SEARCH Teacher=------------->");
	printf("\n\n\t\t\t==========================================");
	printf("\n\n\t\tEnter Name of Teacher: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("teacher.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
			printf("\n=============================================");
			printf("\n---------------------------------------------");
            printf("\n\tFirst Name: %s",Info.first_name);
            printf("\n\tLast_Name: %s",Info.last_name);
            printf("\n\tID: %s",Info.id);
            printf("\n\tQualification: %s",Info.Qualification);
            printf("\n\tSubject: %s",Info.subject);
			printf("\n\tPhone Number:%s",Info.phone_number);
			printf("\n\tRank: %s",Info.rank);
			printf("\n----------------------------------------------");
			printf("\n==============================================");
        }
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
}
//-------Login As Admin Switch Case 6 (REMOVE TEACHER)-------
void delete()
{
    char stname[20];
    FILE *fp,*ft;
    struct teacher Info;
    system("cls");
    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<-----------=Delete Details of Teacher=--------------->");
	printf("\n\n\t\t\t=======================================================");
	printf("\n=========================================");
	printf("\n-----------------------------------------");
    printf("\n\tEnter name of Teacher to be Deleted: ");
	
    fflush(stdin);
    gets(stname);
	printf("\n-----------------------------------------");
	printf("\n=========================================");
    fp = fopen("teacher.txt","rb+");
    if(fp == NULL){
        printf("Error opening file");
        exit(1);
    }
    ft = fopen("temp.txt","wb+");
    if(ft == NULL){
        printf("Error opening file");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        if(strcmp(stname,Info.first_name)!=0)
            fwrite(&Info,sizeof(Info),1,ft);
    }
    fclose(fp);
    fclose(ft);
    remove("teacher.txt");
    rename("temp.txt","teacher.txt");
    printf("\nTeacher Records Deleted...");
    printf("\n\n\t\t\tPress any key to continue.");
    getch();
}
//--------Login As Admin Switch Case 4 (SHOW ALL TEACHERS)--------
void show_all_teacher()
{
    FILE *fp;
    struct teacher Info;
    system("cls");
    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<--------------=Show All of Teacher=------------------>");
	printf("\n\n\t\t\t=======================================================");
    printf("\nName of Teacher\t\tQualification\t\tSubject\t\t\tRank\t\t\tPhone Number");  
    printf("\n---------------------------------------------------------------------------------------------------------------------");
    fp = fopen("teacher.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n%s \t\t%s \t\t%s \t\t\t%s \t\t\t%s",Info.first_name,Info.Qualification,Info.subject,Info.rank,Info.phone_number);
		printf("\n");
		printf("_______________________________________________________________________________________________________________________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
    main();
}
//-------Login As Admin Switch case 7 (CHANGE USERNAME AND PASSWORD)
int change_Admin_username_password()
{
    char username[20];
    char password[20];
	struct Login Admin;
	D:
    system("cls");
	printf("\n|---CHANGE USERNAME AND PASSWORD---|");
	printf("\n\n\nEnter Previous Username:");
	scanf("%s",&username);
	printf("\nEnter Pervious Password:");
	scanf("%s",&password);
	
    if(strcmp(username, "Afnan") == 0)
	  {
    if(strcmp(password, "admin") == 0)
	   {
    	printf("\nCorrect...");
    	printf("\nEnter any key to continue...");
        getch();
        printf("\n--------------------------");
	   }
	else
	   {
	   	printf("\a\nInvalid USERNAME AND PASSWORD!...");
	   	printf("\nPress any key to ReEnter...");
	   	getch();
	   	goto D;
   	   }
      }
    else if(strcmp(username,Admin.ChangeUser) == 0)
	  {
    if(strcmp(password,Admin.ChangePass) == 0)
	   {
    	printf("\nCorrect...");
    	printf("\nEnter any key to continue...");
        getch();
        printf("\n--------------------------");
	   }
	else
	   {
	   	printf("\a\nInvalid Password");
	   	printf("\nPress any key to ReEnter...");
	   	getch();
	   	goto D;
   	   }
      }
    else
	   {
	   	printf("\a\nInvalid Username");
	  	printf("\nPress any key to ReEnter...");
	   	getch();
	   	goto D;
	   }
	system("cls");
	printf("\nNew USERNAME:");
	scanf("%s",&Admin.ChangeUser);
	printf("\nNew PASSWORD:");
	scanf("%s",&Admin.ChangePass);
	printf("\n\nChanged Username & Password Sucessfully");
	printf("\nPress any key...");
	getch();
	goto D;
}
//-----Login As Teacher Switch Case 5 (CHANGE USER NAME AND PASSWORD)-----
int change_Teacher_username_password()
{
	struct Login Teacher;
	char username[20];
	char password[20];
	C:
	system("cls");
	
	printf("\n|---CHANGE USERNAME AND PASSWORD---|");
	printf("\n\n\nEnter Previous Username:");
	scanf("%s",&username);
	printf("\nEnter Pervious Password:");
	scanf("%s",&password);
	
	if(strcmp(username, "Ahmed") == 0)
	  {
    if(strcmp(password, "teacher") == 0)
	   {
    	printf("\nCorrect...");
    	printf("\nEnter any key to continue...");
        getch();
        printf("\n--------------------------");
	   }
	else
	   {
	   	printf("\a\nInvalid Usename and Password!..");
	   	printf("\nPress any key to ReEnter...");
	   	getch();
	   	goto C;
   	   }
      }
    else if(strcmp(username,Teacher.ChangeUser2) == 0)
	  {
    if(strcmp(password,Teacher.ChangePass2) == 0)
	   {
    	printf("\nCorrect...");
    	printf("\nEnter any key to continue...");
        getch();
        printf("\n--------------------------");
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
	system("cls");
	printf("\nNew USERNAME:");
	scanf("%s",&Teacher.ChangeUser2);
	printf("\nNew PASSWORD:");
	scanf("%s",&Teacher.ChangePass2);
	printf("\n\nChanged Username & Password Sucessfully");
	printf("\nPress any key...");
	getch();
	goto C;
	
}

void showprofile(){
    FILE *fp;
    struct teacher Info;
    char stname[20];
    system("cls");

    
	
    printf("\n\n\t\t\t==============================================================");
    printf("\n\n\t\t\t<----------------------=Show Profile=------------------------>");
	printf("\n\n\t\t\t==============================================================");
    printf("\n\tEnter your Name: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("teacher.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
			printf("\n===========================================");
			printf("\n-------------------------------------------");
            printf("\n\tFirst Name: %s",Info.first_name);
            printf("\n\tID: %s",Info.id);
            printf("\n\tQualification: %s",Info.Qualification);
            printf("\n\tSubject: %s",Info.subject);
			printf("\n\tPhone Number:%s",Info.phone_number);
			printf("\n\tRank: %s",Info.rank);
			printf("\n--------------------------------------------");
			printf("\n============================================");
        }
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
}

void showStudent(){
    int c_c,s_c;

    printf("\n\t-----------------------------------------");
    printf("\n\t==============Select Class===============");
    printf("\n\t-----------------------------------------");
	printf("\n\n\n\t|||||||||||||||||||||||||||||||||||||||||||||||||||");
	printf("\n\n\n\t***************************************************");
    printf("\n\n\t\t1.class-1");
	printf("\n\n\n\t-------------------------------");
    printf("\n\n\t\t2.Class-2");
	printf("\n\n\n\t-------------------------------");
    printf("\n\n\t\t3.Class-3");
	printf("\n\n\n\t-------------------------------");
    printf("\n\n\t\t4.Class-4");
	printf("\n\n\n\t-------------------------------");
    printf("\n\n\t\t5.class-5");
	printf("\n\n\n\t-------------------------------");
    printf("\n\n\t\t6.Class-6");
	printf("\n\n\n\t-------------------------------");
    printf("\n\n\t\t7.Class-7");
	printf("\n\n\n\t-------------------------------");
    printf("\n\n\t\t8.Class-8");
	printf("\n\n\n\t-------------------------------");
    printf("\n\n\t\t9.Class-9");
	printf("\n\n\n\t-------------------------------");
    printf("\n\n\t\t10.Class-10");
	printf("\n\n\n\t-------------------------------");
	printf("\n\n\tEnter Your Choice:");
    scanf("%d",&c_c);
	printf("\n\n\n\t***************************************************");
	printf("\n\n\n\t|||||||||||||||||||||||||||||||||||||||||||||||||||");
	switch (c_c)
	{
	case 1:
		printf("\n\t\t==================================");
		printf("\n\t\t----------Class 1-----------------");
		printf("\n\t\t==================================");

        printf("\n\t===============================================");    
		printf("\n\t-----------------------------------------------");
		printf("\n\t\t1.Add Student Details");
		printf("\n\t\t2.Show all Students");
		printf("\n\t\t3.Search Student Details");
		printf("\n\t\t4.Modify Details Of Students");
		printf("\n\t===============================================");
		printf("\n\t-----------------------------------------------");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 1-----------------");
			printf("\n\t\t==================================");
			add_student_c_1();
			break;
		case 2:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 1-----------------");
			printf("\n\t\t==================================");
			show_all_students_c_1();
			break;
		case 3:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 1-----------------");
			printf("\n\t\t==================================");
			search_st_c_1();
			break;
		case 4:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 1-----------------");
			printf("\n\t\t==================================");
			modify_students_c_1();
			break;
		default:
			printf("\n\t=========================================");
			printf("\n\t-----------------------------------------");
			printf("\n\n\t\tInvalid Choice");
			printf("\n\t-----------------------------------------");
			printf("\n\t=========================================");
			break;
		}
		
		break;
	case 2:
		printf("\n\t\t==================================");
		printf("\n\t\t----------Class 2-----------------");
		printf("\n\t\t==================================");

        printf("\n\t===============================================");    
		printf("\n\t-----------------------------------------------");
		printf("\n\t\t1.Add Student Details");
		printf("\n\t\t2.Show all Students");
		printf("\n\t\t3.Search Student Details");
		printf("\n\t\t4.Modify Details Of Students");
		printf("\n\t===============================================");
		printf("\n\t-----------------------------------------------");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 2-----------------");
			printf("\n\t\t==================================");
			add_student_c_2();
			break;
		case 2:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 2-----------------");
			printf("\n\t\t==================================");
			show_all_students_c_2();
			break;
		case 3:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 2-----------------");
			printf("\n\t\t==================================");
			search_st_c_2();
			break;
		case 4:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 2-----------------");
			printf("\n\t\t==================================");
			modify_students_c_2();
			break;
		default:
			printf("\n\t=========================================");
			printf("\n\t-----------------------------------------");
			printf("\n\n\t\tInvalid Choice");
			printf("\n\t-----------------------------------------");
			printf("\n\t=========================================");
			break;
		}
		
		break;
	case 3:
		printf("\n\t\t==================================");
		printf("\n\t\t----------Class 1-----------------");
		printf("\n\t\t==================================");

        printf("\n\t===============================================");    
		printf("\n\t-----------------------------------------------");
		printf("\n\t\t1.Add Student Details");
		printf("\n\t\t2.Show all Students");
		printf("\n\t\t3.Search Student Details");
		printf("\n\t\t4.Modify Details Of Students");
		printf("\n\t===============================================");
		printf("\n\t-----------------------------------------------");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 3-----------------");
			printf("\n\t\t==================================");
			add_student_c_3();
			break;
		case 2:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 3-----------------");
			printf("\n\t\t==================================");
			show_all_students_c_3();
			break;
		case 3:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 3-----------------");
			printf("\n\t\t==================================");
			search_st_c_3();
			break;
		case 4:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 3-----------------");
			printf("\n\t\t==================================");
			modify_students_c_3();
			break;
		default:
			printf("\n\t=========================================");
			printf("\n\t-----------------------------------------");
			printf("\n\n\t\tInvalid Choice");
			printf("\n\t-----------------------------------------");
			printf("\n\t=========================================");
			break;
		}
		
		break;
	case 4:
		printf("\n\t\t==================================");
		printf("\n\t\t----------Class 4-----------------");
		printf("\n\t\t==================================");

        printf("\n\t===============================================");    
		printf("\n\t-----------------------------------------------");
		printf("\n\t\t1.Add Student Details");
		printf("\n\t\t2.Show all Students");
		printf("\n\t\t3.Search Student Details");
		printf("\n\t\t4.Modify Details Of Students");
		printf("\n\t===============================================");
		printf("\n\t-----------------------------------------------");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 4-----------------");
			printf("\n\t\t==================================");
			add_student_c_4();
			break;
		case 2:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 4-----------------");
			printf("\n\t\t==================================");
			show_all_students_c_4();
			break;
		case 3:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 4-----------------");
			printf("\n\t\t==================================");
			search_st_c_4();
			break;
		case 4:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 4-----------------");
			printf("\n\t\t==================================");
			modify_students_c_4();
			break;
		default:
			printf("\n\t=========================================");
			printf("\n\t-----------------------------------------");
			printf("\n\n\t\tInvalid Choice");
			printf("\n\t-----------------------------------------");
			printf("\n\t=========================================");
			break;
		}
		
		break;
	case 5:
		printf("\n\t\t==================================");
		printf("\n\t\t----------Class 5-----------------");
		printf("\n\t\t==================================");

        printf("\n\t===============================================");    
		printf("\n\t-----------------------------------------------");
		printf("\n\t\t1.Add Student Details");
		printf("\n\t\t2.Show all Students");
		printf("\n\t\t3.Search Student Details");
		printf("\n\t\t4.Modify Details Of Students");
		printf("\n\t===============================================");
		printf("\n\t-----------------------------------------------");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 5-----------------");
			printf("\n\t\t==================================");
			add_student_c_5();
			break;
		case 2:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 5-----------------");
			printf("\n\t\t==================================");
			show_all_students_c_5();
			break;
		case 3:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 5-----------------");
			printf("\n\t\t==================================");
			search_st_c_5();
			break;
		case 4:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 5-----------------");
			printf("\n\t\t==================================");
			modify_students_c_5();
			break;
		default:
			printf("\n\t=========================================");
			printf("\n\t-----------------------------------------");
			printf("\n\n\t\tInvalid Choice");
			printf("\n\t-----------------------------------------");
			printf("\n\t=========================================");
			break;
		}
		
		break;
	case 6:
		printf("\n\t\t==================================");
		printf("\n\t\t----------Class 6-----------------");
		printf("\n\t\t==================================");

        printf("\n\t===============================================");    
		printf("\n\t-----------------------------------------------");
		printf("\n\t\t1.Add Student Details");
		printf("\n\t\t2.Show all Students");
		printf("\n\t\t3.Search Student Details");
		printf("\n\t\t4.Modify Details Of Students");
		printf("\n\t===============================================");
		printf("\n\t-----------------------------------------------");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 6-----------------");
			printf("\n\t\t==================================");
			add_student_c_6();
			break;
		case 2:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 6-----------------");
			printf("\n\t\t==================================");
			show_all_students_c_6();
			break;
		case 3:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 6-----------------");
			printf("\n\t\t==================================");
			search_st_c_6();
			break;
		case 4:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 6-----------------");
			printf("\n\t\t==================================");
			modify_students_c_6();
			break;
		default:
			printf("\n\t=========================================");
			printf("\n\t-----------------------------------------");
			printf("\n\n\t\tInvalid Choice");
			printf("\n\t-----------------------------------------");
			printf("\n\t=========================================");
			break;
		}
		
		break;
	case 7:
		printf("\n\t\t==================================");
		printf("\n\t\t----------Class 7-----------------");
		printf("\n\t\t==================================");

        printf("\n\t===============================================");    
		printf("\n\t-----------------------------------------------");
		printf("\n\t\t1.Add Student Details");
		printf("\n\t\t2.Show all Students");
		printf("\n\t\t3.Search Student Details");
		printf("\n\t\t4.Modify Details Of Students");
		printf("\n\t===============================================");
		printf("\n\t-----------------------------------------------");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 7-----------------");
			printf("\n\t\t==================================");
			add_student_c_7();
			break;
		case 2:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 7-----------------");
			printf("\n\t\t==================================");
			show_all_students_c_7();
			break;
		case 3:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 7-----------------");
			printf("\n\t\t==================================");
			search_st_c_7();
			break;
		case 4:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 7-----------------");
			printf("\n\t\t==================================");
			modify_students_c_7();
			break;
		default:
			printf("\n\t=========================================");
			printf("\n\t-----------------------------------------");
			printf("\n\n\t\tInvalid Choice");
			printf("\n\t-----------------------------------------");
			printf("\n\t=========================================");
			break;
		}
		
		break;
	case 8:
		printf("\n\t\t==================================");
		printf("\n\t\t----------Class 8-----------------");
		printf("\n\t\t==================================");

        printf("\n\t===============================================");    
		printf("\n\t-----------------------------------------------");
		printf("\n\t\t1.Add Student Details");
		printf("\n\t\t2.Show all Students");
		printf("\n\t\t3.Search Student Details");
		printf("\n\t\t4.Modify Details Of Students");
		printf("\n\t===============================================");
		printf("\n\t-----------------------------------------------");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 8-----------------");
			printf("\n\t\t==================================");
			add_student_c_8();
			break;
		case 2:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 8-----------------");
			printf("\n\t\t==================================");
			show_all_students_c_8();
			break;
		case 3:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 8-----------------");
			printf("\n\t\t==================================");
			search_st_c_8();
			break;
		case 4:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 8-----------------");
			printf("\n\t\t==================================");
			modify_students_c_8();
			break;
		default:
			printf("\n\t=========================================");
			printf("\n\t-----------------------------------------");
			printf("\n\n\t\tInvalid Choice");
			printf("\n\t-----------------------------------------");
			printf("\n\t=========================================");
			break;
		}
		
		break;
	case 9:
		printf("\n\t\t==================================");
		printf("\n\t\t----------Class 9-----------------");
		printf("\n\t\t==================================");

        printf("\n\t===============================================");    
		printf("\n\t-----------------------------------------------");
		printf("\n\t\t1.Add Student Details");
		printf("\n\t\t2.Show all Students");
		printf("\n\t\t3.Search Student Details");
		printf("\n\t\t4.Modify Details Of Students");
		printf("\n\t===============================================");
		printf("\n\t-----------------------------------------------");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 9-----------------");
			printf("\n\t\t==================================");
			add_student_c_9();
			break;
		case 2:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 9-----------------");
			printf("\n\t\t==================================");
			show_all_students_c_9();
			break;
		case 3:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 9-----------------");
			printf("\n\t\t==================================");
			search_st_c_9();
			break;
		case 4:
			printf("\n\t\t==================================");
			printf("\n\t\t----------Class 9-----------------");
			printf("\n\t\t==================================");
			modify_students_c_9();
			break;
		default:
			printf("\n\t=========================================");
			printf("\n\t-----------------------------------------");
			printf("\n\n\t\tInvalid Choice");
			printf("\n\t-----------------------------------------");
			printf("\n\t=========================================");
			break;
		}
		
		break;
	case 10:
		printf("\n\t\t===================================");
		printf("\n\t\t----------Class 10-----------------");
		printf("\n\t\t===================================");

        printf("\n\t===============================================");    
		printf("\n\t-----------------------------------------------");
		printf("\n\t\t1.Add Student Details");
		printf("\n\t\t2.Show all Students");
		printf("\n\t\t3.Search Student Details");
		printf("\n\t\t4.Modify Details Of Students");
		printf("\n\t===============================================");
		printf("\n\t-----------------------------------------------");
		printf("\n\n\n\tEnter Your Choice:");
		scanf("%d",&s_c);
		switch(s_c)
		{
		case 1:
			printf("\n\t\t===================================");
			printf("\n\t\t----------Class 10-----------------");
			printf("\n\t\t===================================");
			add_student_c_10();
			break;
		case 2:
			printf("\n\t\t===================================");
			printf("\n\t\t----------Class 10-----------------");
			printf("\n\t\t===================================");
			show_all_students_c_10();
			break;
		case 3:
			printf("\n\t\t===================================");
			printf("\n\t\t----------Class 10-----------------");
			printf("\n\t\t===================================");
			search_st_c_10();
			break;
		case 4:
			printf("\n\t\t===================================");
			printf("\n\t\t----------Class 10-----------------");
			printf("\n\t\t===================================");
			modify_students_c_10();
			break;
		default:
			printf("\n\t=========================================");
			printf("\n\t-----------------------------------------");
			printf("\n\n\t\tInvalid Choice");
			printf("\n\t-----------------------------------------");
			printf("\n\t=========================================");
			break;
		}
		
		break;
	
	default:
			printf("\n\t=========================================");
			printf("\n\t-----------------------------------------");
			printf("\n\n\t\tInvalid Choice");
			printf("\n\t-----------------------------------------");
			printf("\n\t=========================================");
		break;
	}

}

void add_student_c_1()
{
    FILE *fileOne = fopen("student_c_1.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    struct student Info;
	

    system("cls");

    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<-----------=Add Details of Student=------------------>");
	printf("\n\n\t\t\t=======================================================");
	printf("\n\t\t===============================================");
	printf("\n\t\t-----------------------------------------------");
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
    printf("\n\t\t=====================================================");
	printf("\n\t\t-----------------------------------------------------");
	printf("\n\t\t\tName:%s",Info.first_name);
	printf("\n\t\t\tFather's Name:%s",Info.father_name);
	printf("\n\t\t\tRoll No:%s",Info.roll_no);
	printf("\n\t\t\tCLass:%s",Info.class);
	printf("\n\t\t\tGroup:%s",Info.group);
	printf("\n\t\t\tGender:%s",Info.gender);
	printf("\n\t\t-----------------------------------------------------");
	printf("\n\t\t=====================================================");
	printf("\n\t\t-----------------------------------------------");
	printf("\n\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\n\t\t\tEnter any keys to continue.......");
	
    getch();

    fclose(fileOne);
}
void add_student_c_2()
{
    FILE *fileOne = fopen("student_c_2.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    struct student Info;
	

    system("cls");

    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<-----------=Add Details of Student=------------------>");
	printf("\n\n\t\t\t=======================================================");
	printf("\n\t\t===============================================");
	printf("\n\t\t-----------------------------------------------");
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
    printf("\n\t\t=====================================================");
	printf("\n\t\t-----------------------------------------------------");
	printf("\n\t\t\tName:%s",Info.first_name);
	printf("\n\t\t\tFather's Name:%s",Info.father_name);
	printf("\n\t\t\tRoll No:%s",Info.roll_no);
	printf("\n\t\t\tCLass:%s",Info.class);
	printf("\n\t\t\tGroup:%s",Info.group);
	printf("\n\t\t\tGender:%s",Info.gender);
	printf("\n\t\t-----------------------------------------------------");
	printf("\n\t\t=====================================================");
	printf("\n\t\t-----------------------------------------------");
	printf("\n\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\n\t\t\tEnter any keys to continue.......");
	
    getch();

    fclose(fileOne);
}
void add_student_c_3()
{
    FILE *fileOne = fopen("student_c_3.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    struct student Info;
	

    system("cls");

    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<-----------=Add Details of Student=------------------>");
	printf("\n\n\t\t\t=======================================================");
	printf("\n\t\t===============================================");
	printf("\n\t\t-----------------------------------------------");
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
    printf("\n\t\t=====================================================");
	printf("\n\t\t-----------------------------------------------------");
	printf("\n\t\t\tName:%s",Info.first_name);
	printf("\n\t\t\tFather's Name:%s",Info.father_name);
	printf("\n\t\t\tRoll No:%s",Info.roll_no);
	printf("\n\t\t\tCLass:%s",Info.class);
	printf("\n\t\t\tGroup:%s",Info.group);
	printf("\n\t\t\tGender:%s",Info.gender);
	printf("\n\t\t-----------------------------------------------------");
	printf("\n\t\t=====================================================");
	printf("\n\t\t-----------------------------------------------");
	printf("\n\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\n\t\t\tEnter any keys to continue.......");
	
    getch();

    fclose(fileOne);
}
void add_student_c_4()
{
    FILE *fileOne = fopen("student_c_4.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    struct student Info;
	

    system("cls");

    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<-----------=Add Details of Student=------------------>");
	printf("\n\n\t\t\t=======================================================");
	printf("\n\t\t===============================================");
	printf("\n\t\t-----------------------------------------------");
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
    printf("\n\t\t=====================================================");
	printf("\n\t\t-----------------------------------------------------");
	printf("\n\t\t\tName:%s",Info.first_name);
	printf("\n\t\t\tFather's Name:%s",Info.father_name);
	printf("\n\t\t\tRoll No:%s",Info.roll_no);
	printf("\n\t\t\tCLass:%s",Info.class);
	printf("\n\t\t\tGroup:%s",Info.group);
	printf("\n\t\t\tGender:%s",Info.gender);
	printf("\n\t\t-----------------------------------------------------");
	printf("\n\t\t=====================================================");
	printf("\n\t\t-----------------------------------------------");
	printf("\n\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\n\t\t\tEnter any keys to continue.......");
	
    getch();

    fclose(fileOne);
}
void add_student_c_5()
{
    FILE *fileOne = fopen("student_c_5.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    struct student Info;
	

    system("cls");

    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<-----------=Add Details of Student=------------------>");
	printf("\n\n\t\t\t=======================================================");
	printf("\n\t\t===============================================");
	printf("\n\t\t-----------------------------------------------");
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
    printf("\n\t\t=====================================================");
	printf("\n\t\t-----------------------------------------------------");
	printf("\n\t\t\tName:%s",Info.first_name);
	printf("\n\t\t\tFather's Name:%s",Info.father_name);
	printf("\n\t\t\tRoll No:%s",Info.roll_no);
	printf("\n\t\t\tCLass:%s",Info.class);
	printf("\n\t\t\tGroup:%s",Info.group);
	printf("\n\t\t\tGender:%s",Info.gender);
	printf("\n\t\t-----------------------------------------------------");
	printf("\n\t\t=====================================================");
	printf("\n\t\t-----------------------------------------------");
	printf("\n\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\n\t\t\tEnter any keys to continue.......");
	
    getch();

    fclose(fileOne);
}
void add_student_c_6()
{
    FILE *fileOne = fopen("student_c_6.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    struct student Info;
	

    system("cls");

    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<-----------=Add Details of Student=------------------>");
	printf("\n\n\t\t\t=======================================================");
	printf("\n\t\t===============================================");
	printf("\n\t\t-----------------------------------------------");
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
    printf("\n\t\t=====================================================");
	printf("\n\t\t-----------------------------------------------------");
	printf("\n\t\t\tName:%s",Info.first_name);
	printf("\n\t\t\tFather's Name:%s",Info.father_name);
	printf("\n\t\t\tRoll No:%s",Info.roll_no);
	printf("\n\t\t\tCLass:%s",Info.class);
	printf("\n\t\t\tGroup:%s",Info.group);
	printf("\n\t\t\tGender:%s",Info.gender);
	printf("\n\t\t-----------------------------------------------------");
	printf("\n\t\t=====================================================");
	printf("\n\t\t-----------------------------------------------");
	printf("\n\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\n\t\t\tEnter any keys to continue.......");
	
    getch();

    fclose(fileOne);
}
void add_student_c_7()
{
    FILE *fileOne = fopen("student_c_7.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    struct student Info;
	

    system("cls");

    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<-----------=Add Details of Student=------------------>");
	printf("\n\n\t\t\t=======================================================");
	printf("\n\t\t===============================================");
	printf("\n\t\t-----------------------------------------------");
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
    printf("\n\t\t=====================================================");
	printf("\n\t\t-----------------------------------------------------");
	printf("\n\t\t\tName:%s",Info.first_name);
	printf("\n\t\t\tFather's Name:%s",Info.father_name);
	printf("\n\t\t\tRoll No:%s",Info.roll_no);
	printf("\n\t\t\tCLass:%s",Info.class);
	printf("\n\t\t\tGroup:%s",Info.group);
	printf("\n\t\t\tGender:%s",Info.gender);
	printf("\n\t\t-----------------------------------------------------");
	printf("\n\t\t=====================================================");
	printf("\n\t\t-----------------------------------------------");
	printf("\n\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\n\t\t\tEnter any keys to continue.......");
	
    getch();

    fclose(fileOne);
}
void add_student_c_8()
{
    FILE *fileOne = fopen("student_c_8.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    struct student Info;
	

    system("cls");

    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<-----------=Add Details of Student=------------------>");
	printf("\n\n\t\t\t=======================================================");
	printf("\n\t\t===============================================");
	printf("\n\t\t-----------------------------------------------");
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
    printf("\n\t\t=====================================================");
	printf("\n\t\t-----------------------------------------------------");
	printf("\n\t\t\tName:%s",Info.first_name);
	printf("\n\t\t\tFather's Name:%s",Info.father_name);
	printf("\n\t\t\tRoll No:%s",Info.roll_no);
	printf("\n\t\t\tCLass:%s",Info.class);
	printf("\n\t\t\tGroup:%s",Info.group);
	printf("\n\t\t\tGender:%s",Info.gender);
	printf("\n\t\t-----------------------------------------------------");
	printf("\n\t\t=====================================================");
	printf("\n\t\t-----------------------------------------------");
	printf("\n\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\n\t\t\tEnter any keys to continue.......");
	
    getch();

    fclose(fileOne);
}
void add_student_c_9()
{
    FILE *fileOne = fopen("student_c_9.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    struct student Info;
	

    system("cls");

    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<-----------=Add Details of Student=------------------>");
	printf("\n\n\t\t\t=======================================================");
	printf("\n\t\t===============================================");
	printf("\n\t\t-----------------------------------------------");
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
    printf("\n\t\t=====================================================");
	printf("\n\t\t-----------------------------------------------------");
	printf("\n\t\t\tName:%s",Info.first_name);
	printf("\n\t\t\tFather's Name:%s",Info.father_name);
	printf("\n\t\t\tRoll No:%s",Info.roll_no);
	printf("\n\t\t\tCLass:%s",Info.class);
	printf("\n\t\t\tGroup:%s",Info.group);
	printf("\n\t\t\tGender:%s",Info.gender);
	printf("\n\t\t-----------------------------------------------------");
	printf("\n\t\t=====================================================");
	printf("\n\t\t-----------------------------------------------");
	printf("\n\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\n\t\t\tEnter any keys to continue.......");
	
    getch();

    fclose(fileOne);
}
void add_student_c_10()
{
    FILE *fileOne = fopen("student_c_10.txt", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    struct student Info;
	

    system("cls");

    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<-----------=Add Details of Student=------------------>");
	printf("\n\n\t\t\t=======================================================");
	printf("\n\t\t===============================================");
	printf("\n\t\t-----------------------------------------------");
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
    printf("\n\t\t=====================================================");
	printf("\n\t\t-----------------------------------------------------");
	printf("\n\t\t\tName:%s",Info.first_name);
	printf("\n\t\t\tFather's Name:%s",Info.father_name);
	printf("\n\t\t\tRoll No:%s",Info.roll_no);
	printf("\n\t\t\tCLass:%s",Info.class);
	printf("\n\t\t\tGroup:%s",Info.group);
	printf("\n\t\t\tGender:%s",Info.gender);
	printf("\n\t\t-----------------------------------------------------");
	printf("\n\t\t=====================================================");
	printf("\n\t\t-----------------------------------------------");
	printf("\n\t\t===============================================");

    fwrite(&Info, sizeof(Info), 1, fileOne);

    printf("\n\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\n\t\t\tEnter any keys to continue.......");
	
    getch();

    fclose(fileOne);
}

void search_st_c_1()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
	printf("\n\n\t\t\t==========================================");
    printf("\n\n\t\t\t<-----------=SEARCH STUDENT=------------->");
	printf("\n\n\t\t\t==========================================");
	printf("\n\n\t============================================");
	printf("\n\t--------------------------------------------");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
	printf("\n\t--------------------------------------------");
	printf("\n\n\t============================================");
    fp = fopen("student_c_1.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
			printf("\n=============================================");
			printf("\n---------------------------------------------");
            printf("\n\tFirst Name: %s",Info.first_name);
            printf("\n\tFather's Name: %s",Info.father_name);
            printf("\n\tRoll No: %s",Info.roll_no);
            printf("\n\tGroup: %s",Info.group);
            printf("\n\tClass: %s",Info.class);
			printf("\n\tGender:%s",Info.gender);
			printf("\n----------------------------------------------");
			printf("\n==============================================");
        }
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
}
void search_st_c_2()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
	printf("\n\n\t\t\t==========================================");
    printf("\n\n\t\t\t<-----------=SEARCH STUDENT=------------->");
	printf("\n\n\t\t\t==========================================");
	printf("\n\n\t============================================");
	printf("\n\t--------------------------------------------");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
	printf("\n\t--------------------------------------------");
	printf("\n\n\t============================================");
    fp = fopen("student_c_2.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
			printf("\n=============================================");
			printf("\n---------------------------------------------");
            printf("\n\tFirst Name: %s",Info.first_name);
            printf("\n\tFather's Name: %s",Info.father_name);
            printf("\n\tRoll No: %s",Info.roll_no);
            printf("\n\tGroup: %s",Info.group);
            printf("\n\tClass: %s",Info.class);
			printf("\n\tGender:%s",Info.gender);
			printf("\n----------------------------------------------");
			printf("\n==============================================");
        }
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
}
void search_st_c_3()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
	printf("\n\n\t\t\t==========================================");
    printf("\n\n\t\t\t<-----------=SEARCH STUDENT=------------->");
	printf("\n\n\t\t\t==========================================");
	printf("\n\n\t============================================");
	printf("\n\t--------------------------------------------");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
	printf("\n\t--------------------------------------------");
	printf("\n\n\t============================================");
    fp = fopen("student_c_3.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
			printf("\n=============================================");
			printf("\n---------------------------------------------");
            printf("\n\tFirst Name: %s",Info.first_name);
            printf("\n\tFather's Name: %s",Info.father_name);
            printf("\n\tRoll No: %s",Info.roll_no);
            printf("\n\tGroup: %s",Info.group);
            printf("\n\tClass: %s",Info.class);
			printf("\n\tGender:%s",Info.gender);
			printf("\n----------------------------------------------");
			printf("\n==============================================");
        }
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
}
void search_st_c_4()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
	printf("\n\n\t\t\t==========================================");
    printf("\n\n\t\t\t<-----------=SEARCH STUDENT=------------->");
	printf("\n\n\t\t\t==========================================");
	printf("\n\n\t============================================");
	printf("\n\t--------------------------------------------");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
	printf("\n\t--------------------------------------------");
	printf("\n\n\t============================================");
    fp = fopen("student_c_4.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
			printf("\n=============================================");
			printf("\n---------------------------------------------");
            printf("\n\tFirst Name: %s",Info.first_name);
            printf("\n\tFather's Name: %s",Info.father_name);
            printf("\n\tRoll No: %s",Info.roll_no);
            printf("\n\tGroup: %s",Info.group);
            printf("\n\tClass: %s",Info.class);
			printf("\n\tGender:%s",Info.gender);
			printf("\n----------------------------------------------");
			printf("\n==============================================");
        }
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
}
void search_st_c_5()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
	printf("\n\n\t\t\t==========================================");
    printf("\n\n\t\t\t<-----------=SEARCH STUDENT=------------->");
	printf("\n\n\t\t\t==========================================");
	printf("\n\n\t============================================");
	printf("\n\t--------------------------------------------");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
	printf("\n\t--------------------------------------------");
	printf("\n\n\t============================================");
    fp = fopen("student_c_5.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
			printf("\n=============================================");
			printf("\n---------------------------------------------");
            printf("\n\tFirst Name: %s",Info.first_name);
            printf("\n\tFather's Name: %s",Info.father_name);
            printf("\n\tRoll No: %s",Info.roll_no);
            printf("\n\tGroup: %s",Info.group);
            printf("\n\tClass: %s",Info.class);
			printf("\n\tGender:%s",Info.gender);
			printf("\n----------------------------------------------");
			printf("\n==============================================");
        }
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
}
void search_st_c_6()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
	printf("\n\n\t\t\t==========================================");
    printf("\n\n\t\t\t<-----------=SEARCH STUDENT=------------->");
	printf("\n\n\t\t\t==========================================");
	printf("\n\n\t============================================");
	printf("\n\t--------------------------------------------");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
	printf("\n\t--------------------------------------------");
	printf("\n\n\t============================================");
    fp = fopen("student_c_6.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
			printf("\n=============================================");
			printf("\n---------------------------------------------");
            printf("\n\tFirst Name: %s",Info.first_name);
            printf("\n\tFather's Name: %s",Info.father_name);
            printf("\n\tRoll No: %s",Info.roll_no);
            printf("\n\tGroup: %s",Info.group);
            printf("\n\tClass: %s",Info.class);
			printf("\n\tGender:%s",Info.gender);
			printf("\n----------------------------------------------");
			printf("\n==============================================");
        }
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
}
void search_st_c_7()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
	printf("\n\n\t\t\t==========================================");
    printf("\n\n\t\t\t<-----------=SEARCH STUDENT=------------->");
	printf("\n\n\t\t\t==========================================");
	printf("\n\n\t============================================");
	printf("\n\t--------------------------------------------");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
	printf("\n\t--------------------------------------------");
	printf("\n\n\t============================================");
    fp = fopen("student_c_7.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
			printf("\n=============================================");
			printf("\n---------------------------------------------");
            printf("\n\tFirst Name: %s",Info.first_name);
            printf("\n\tFather's Name: %s",Info.father_name);
            printf("\n\tRoll No: %s",Info.roll_no);
            printf("\n\tGroup: %s",Info.group);
            printf("\n\tClass: %s",Info.class);
			printf("\n\tGender:%s",Info.gender);
			printf("\n----------------------------------------------");
			printf("\n==============================================");
        }
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
}
void search_st_c_8()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
	printf("\n\n\t\t\t==========================================");
    printf("\n\n\t\t\t<-----------=SEARCH STUDENT=------------->");
	printf("\n\n\t\t\t==========================================");
	printf("\n\n\t============================================");
	printf("\n\t--------------------------------------------");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
	printf("\n\t--------------------------------------------");
	printf("\n\n\t============================================");
    fp = fopen("student_c_8.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
			printf("\n=============================================");
			printf("\n---------------------------------------------");
            printf("\n\tFirst Name: %s",Info.first_name);
            printf("\n\tFather's Name: %s",Info.father_name);
            printf("\n\tRoll No: %s",Info.roll_no);
            printf("\n\tGroup: %s",Info.group);
            printf("\n\tClass: %s",Info.class);
			printf("\n\tGender:%s",Info.gender);
			printf("\n----------------------------------------------");
			printf("\n==============================================");
        }
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
}
void search_st_c_9()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
	printf("\n\n\t\t\t==========================================");
    printf("\n\n\t\t\t<-----------=SEARCH STUDENT=------------->");
	printf("\n\n\t\t\t==========================================");
	printf("\n\n\t============================================");
	printf("\n\t--------------------------------------------");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
	printf("\n\t--------------------------------------------");
	printf("\n\n\t============================================");
    fp = fopen("student_c_9.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
			printf("\n=============================================");
			printf("\n---------------------------------------------");
            printf("\n\tFirst Name: %s",Info.first_name);
            printf("\n\tFather's Name: %s",Info.father_name);
            printf("\n\tRoll No: %s",Info.roll_no);
            printf("\n\tGroup: %s",Info.group);
            printf("\n\tClass: %s",Info.class);
			printf("\n\tGender:%s",Info.gender);
			printf("\n----------------------------------------------");
			printf("\n==============================================");
        }
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
}
void search_st_c_10()
{
    FILE *fp;
    struct student Info;
    char stname[20];
    system("cls");
	printf("\n\n\t\t\t==========================================");
    printf("\n\n\t\t\t<-----------=SEARCH STUDENT=------------->");
	printf("\n\n\t\t\t==========================================");
	printf("\n\n\t============================================");
	printf("\n\t--------------------------------------------");
	printf("\n\n\t\tEnter Name of Student: ");
    fflush(stdin);
    gets(stname);
	printf("\n\t--------------------------------------------");
	printf("\n\n\t============================================");
    fp = fopen("student_c_10.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp ) == 1){
        if(strcmp(stname,Info.first_name) == 0){
			printf("\n=============================================");
			printf("\n---------------------------------------------");
            printf("\n\tFirst Name: %s",Info.first_name);
            printf("\n\tFather's Name: %s",Info.father_name);
            printf("\n\tRoll No: %s",Info.roll_no);
            printf("\n\tGroup: %s",Info.group);
            printf("\n\tClass: %s",Info.class);
			printf("\n\tGender:%s",Info.gender);
			printf("\n----------------------------------------------");
			printf("\n==============================================");
        }
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
}

void show_all_students_c_1()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<--------------=Show All of Students=------------------>");
	printf("\n\n\t\t\t=======================================================");
    printf("\nName of Students\t\tFather's Name\t\tRoll No\t\t\tClass\t\t\tGroup");  
    printf("\n---------------------------------------------------------------------------------------------------------------------");
    fp = fopen("student_c_1.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n%s \t\t\t\t%s \t\t%s \t\t\t%s \t\t\t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n");
		printf("_____________________________________________________________________________________________________________________________________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
    main();
}
void show_all_students_c_2()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<--------------=Show All of Students=------------------>");
	printf("\n\n\t\t\t=======================================================");
    printf("\nName of Students\t\tFather's Name\t\tRoll No\t\t\tClass\t\t\tGroup");  
    printf("\n---------------------------------------------------------------------------------------------------------------------");
    fp = fopen("student_c_2.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n%s \t\t\t\t%s \t\t%s \t\t\t%s \t\t\t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n");
		printf("_____________________________________________________________________________________________________________________________________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
    main();
}
void show_all_students_c_3()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<--------------=Show All of Students=------------------>");
	printf("\n\n\t\t\t=======================================================");
    printf("\nName of Students\t\tFather's Name\t\tRoll No\t\t\tClass\t\t\tGroup");  
    printf("\n---------------------------------------------------------------------------------------------------------------------");
    fp = fopen("student_c_3.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n%s \t\t\t\t%s \t\t%s \t\t\t%s \t\t\t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n");
		printf("_____________________________________________________________________________________________________________________________________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
    main();
}
void show_all_students_c_4()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<--------------=Show All of Students=------------------>");
	printf("\n\n\t\t\t=======================================================");
    printf("\nName of Students\t\tFather's Name\t\tRoll No\t\t\tClass\t\t\tGroup");  
    printf("\n---------------------------------------------------------------------------------------------------------------------");
    fp = fopen("student_c_4.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n%s \t\t\t\t%s \t\t%s \t\t\t%s \t\t\t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n");
		printf("_____________________________________________________________________________________________________________________________________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
    main();
}
void show_all_students_c_5()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<--------------=Show All of Students=------------------>");
	printf("\n\n\t\t\t=======================================================");
    printf("\nName of Students\t\tFather's Name\t\tRoll No\t\t\tClass\t\t\tGroup");  
    printf("\n---------------------------------------------------------------------------------------------------------------------");
    fp = fopen("student_c_5.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n%s \t\t\t\t%s \t\t%s \t\t\t%s \t\t\t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n");
		printf("_____________________________________________________________________________________________________________________________________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
    main();
}
void show_all_students_c_6()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<--------------=Show All of Students=------------------>");
	printf("\n\n\t\t\t=======================================================");
    printf("\nName of Students\t\tFather's Name\t\tRoll No\t\t\tClass\t\t\tGroup");  
    printf("\n---------------------------------------------------------------------------------------------------------------------");
    fp = fopen("student_c_6.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n%s \t\t\t\t%s \t\t%s \t\t\t%s \t\t\t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n");
		printf("_____________________________________________________________________________________________________________________________________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
    main();
}
void show_all_students_c_7()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<--------------=Show All of Students=------------------>");
	printf("\n\n\t\t\t=======================================================");
    printf("\nName of Students\t\tFather's Name\t\tRoll No\t\t\tClass\t\t\tGroup");  
    printf("\n---------------------------------------------------------------------------------------------------------------------");
    fp = fopen("student_c_7.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n%s \t\t\t\t%s \t\t%s \t\t\t%s \t\t\t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n");
		printf("_____________________________________________________________________________________________________________________________________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
    main();
}
void show_all_students_c_8()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<--------------=Show All of Students=------------------>");
	printf("\n\n\t\t\t=======================================================");
    printf("\nName of Students\t\tFather's Name\t\tRoll No\t\t\tClass\t\t\tGroup");  
    printf("\n---------------------------------------------------------------------------------------------------------------------");
    fp = fopen("student_c_8.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n%s \t\t\t\t%s \t\t%s \t\t\t%s \t\t\t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n");
		printf("_____________________________________________________________________________________________________________________________________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
    main();
}
void show_all_students_c_9()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<--------------=Show All of Students=------------------>");
	printf("\n\n\t\t\t=======================================================");
    printf("\nName of Students\t\tFather's Name\t\tRoll No\t\t\tClass\t\t\tGroup");  
    printf("\n---------------------------------------------------------------------------------------------------------------------");
    fp = fopen("student_c_9.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n%s \t\t\t\t%s \t\t%s \t\t\t%s \t\t\t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n");
		printf("_____________________________________________________________________________________________________________________________________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
    main();
}
void show_all_students_c_10()
{
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t=======================================================");
    printf("\n\n\t\t\t<--------------=Show All of Students=------------------>");
	printf("\n\n\t\t\t=======================================================");
    printf("\nName of Students\t\tFather's Name\t\tRoll No\t\t\tClass\t\t\tGroup");  
    printf("\n---------------------------------------------------------------------------------------------------------------------");
    fp = fopen("student_c_10.txt","rb+");
    if(fp == NULL){
        printf("\n\n\t\tError  in opening file.\n\n");
        exit(1);
    }
    while(fread(&Info,sizeof(Info),1,fp) == 1){
        printf("\n%s \t\t\t\t%s \t\t%s \t\t\t%s \t\t\t%s",Info.first_name,Info.father_name,Info.roll_no,Info.class,Info.group);
		printf("\n");
		printf("_____________________________________________________________________________________________________________________________________");
    }
    fclose(fp);
    printf("\n\n\t\tPress any key to continue.");
    getch();
    main();
}

void modify_students_c_1()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t========================================================");
    printf("\n\n\t\t\t<-----------=Modify Details of Students=--------------->");
	printf("\n\n\t\t\t========================================================");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_1.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
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
			printf("\n\t\t=====================================================");
			printf("\n\t\t-----------------------------------------------------");
			printf("\n\t\t\tName:%s",Info.first_name);
			printf("\n\t\t\tFather's Name:%s",Info.father_name);
			printf("\n\t\t\tRoll No:%s",Info.roll_no);
			printf("\n\t\t\tCLass:%s",Info.class);
			printf("\n\t\t\tGroup:%s",Info.group);
			printf("\n\t\t\tGender:%s",Info.gender);
			printf("\n\t\t-----------------------------------------------------");
			printf("\n\t\t=====================================================");
			printf("\n\n--------------------------------------");
			printf("\n\n======================================");
			printf("\n\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to continue...");
    getch();
}
void modify_students_c_2()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t========================================================");
    printf("\n\n\t\t\t<-----------=Modify Details of Students=--------------->");
	printf("\n\n\t\t\t========================================================");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_2.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
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
			printf("\n\t\t=====================================================");
			printf("\n\t\t-----------------------------------------------------");
			printf("\n\t\t\tName:%s",Info.first_name);
			printf("\n\t\t\tFather's Name:%s",Info.father_name);
			printf("\n\t\t\tRoll No:%s",Info.roll_no);
			printf("\n\t\t\tCLass:%s",Info.class);
			printf("\n\t\t\tGroup:%s",Info.group);
			printf("\n\t\t\tGender:%s",Info.gender);
			printf("\n\t\t-----------------------------------------------------");
			printf("\n\t\t=====================================================");
			printf("\n\n--------------------------------------");
			printf("\n\n======================================");
			printf("\n\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to continue...");
    getch();
}
void modify_students_c_3()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t========================================================");
    printf("\n\n\t\t\t<-----------=Modify Details of Students=--------------->");
	printf("\n\n\t\t\t========================================================");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_3.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
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
			printf("\n\t\t=====================================================");
			printf("\n\t\t-----------------------------------------------------");
			printf("\n\t\t\tName:%s",Info.first_name);
			printf("\n\t\t\tFather's Name:%s",Info.father_name);
			printf("\n\t\t\tRoll No:%s",Info.roll_no);
			printf("\n\t\t\tCLass:%s",Info.class);
			printf("\n\t\t\tGroup:%s",Info.group);
			printf("\n\t\t\tGender:%s",Info.gender);
			printf("\n\t\t-----------------------------------------------------");
			printf("\n\t\t=====================================================");
			printf("\n\n--------------------------------------");
			printf("\n\n======================================");
			printf("\n\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to continue...");
    getch();
}
void modify_students_c_4()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t========================================================");
    printf("\n\n\t\t\t<-----------=Modify Details of Students=--------------->");
	printf("\n\n\t\t\t========================================================");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_4.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&Info, sizeof(Info), 1,fp) == 1)
    {
		printf("\n\t=========================================");
		printf("\n\t-----------------------------------------");
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
			printf("\n\t\t=====================================================");
			printf("\n\t\t-----------------------------------------------------");
			printf("\n\t\t\tName:%s",Info.first_name);
			printf("\n\t\t\tFather's Name:%s",Info.father_name);
			printf("\n\t\t\tRoll No:%s",Info.roll_no);
			printf("\n\t\t\tCLass:%s",Info.class);
			printf("\n\t\t\tGroup:%s",Info.group);
			printf("\n\t\t\tGender:%s",Info.gender);
			printf("\n\t\t-----------------------------------------------------");
			printf("\n\t\t=====================================================");
			printf("\n\t\t-----------------------------------------------");
			printf("\n\t\t===============================================");
			printf("\n--------------------------------------");
			printf("\n======================================");
			printf("DETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to continue...");
    getch();
}
void modify_students_c_5()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t========================================================");
    printf("\n\n\t\t\t<-----------=Modify Details of Students=--------------->");
	printf("\n\n\t\t\t========================================================");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_5.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
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
			printf("\n\t\t=====================================================");
			printf("\n\t\t-----------------------------------------------------");
			printf("\n\t\t\tName:%s",Info.first_name);
			printf("\n\t\t\tFather's Name:%s",Info.father_name);
			printf("\n\t\t\tRoll No:%s",Info.roll_no);
			printf("\n\t\t\tCLass:%s",Info.class);
			printf("\n\t\t\tGroup:%s",Info.group);
			printf("\n\t\t\tGender:%s",Info.gender);
			printf("\n\t\t-----------------------------------------------------");
			printf("\n\t\t=====================================================");
			printf("\n\n--------------------------------------");
			printf("\n\n======================================");
			printf("\n\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to continue...");
    getch();
}
void modify_students_c_6()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t========================================================");
    printf("\n\n\t\t\t<-----------=Modify Details of Students=--------------->");
	printf("\n\n\t\t\t========================================================");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_6.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
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
			printf("\n\t\t=====================================================");
			printf("\n\t\t-----------------------------------------------------");
			printf("\n\t\t\tName:%s",Info.first_name);
			printf("\n\t\t\tFather's Name:%s",Info.father_name);
			printf("\n\t\t\tRoll No:%s",Info.roll_no);
			printf("\n\t\t\tCLass:%s",Info.class);
			printf("\n\t\t\tGroup:%s",Info.group);
			printf("\n\t\t\tGender:%s",Info.gender);
			printf("\n\t\t-----------------------------------------------------");
			printf("\n\t\t=====================================================");
			printf("\n\n--------------------------------------");
			printf("\n\n======================================");
			printf("\n\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to continue...");
    getch();
}
void modify_students_c_7()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t========================================================");
    printf("\n\n\t\t\t<-----------=Modify Details of Students=--------------->");
	printf("\n\n\t\t\t========================================================");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_7.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
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
			printf("\n\t\t=====================================================");
			printf("\n\t\t-----------------------------------------------------");
			printf("\n\t\t\tName:%s",Info.first_name);
			printf("\n\t\t\tFather's Name:%s",Info.father_name);
			printf("\n\t\t\tRoll No:%s",Info.roll_no);
			printf("\n\t\t\tCLass:%s",Info.class);
			printf("\n\t\t\tGroup:%s",Info.group);
			printf("\n\t\t\tGender:%s",Info.gender);
			printf("\n\t\t-----------------------------------------------------");
			printf("\n\t\t=====================================================");
			printf("\n\n--------------------------------------");
			printf("\n\n======================================");
			printf("\n\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to continue...");
    getch();
}
void modify_students_c_8()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t========================================================");
    printf("\n\n\t\t\t<-----------=Modify Details of Students=--------------->");
	printf("\n\n\t\t\t========================================================");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_8.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
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
			printf("\n\t\t=====================================================");
			printf("\n\t\t-----------------------------------------------------");
			printf("\n\t\t\tName:%s",Info.first_name);
			printf("\n\t\t\tFather's Name:%s",Info.father_name);
			printf("\n\t\t\tRoll No:%s",Info.roll_no);
			printf("\n\t\t\tCLass:%s",Info.class);
			printf("\n\t\t\tGroup:%s",Info.group);
			printf("\n\t\t\tGender:%s",Info.gender);
			printf("\n\t\t-----------------------------------------------------");
			printf("\n\t\t=====================================================");
			
			printf("\n\n--------------------------------------");
			printf("\n\n======================================");
			printf("\n\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to continue...");
    getch();
}
void modify_students_c_9()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t========================================================");
    printf("\n\n\t\t\t<-----------=Modify Details of Students=--------------->");
	printf("\n\n\t\t\t========================================================");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_9.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
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
			printf("\n\t\t=====================================================");
			printf("\n\t\t-----------------------------------------------------");
			printf("\n\t\t\tName:%s",Info.first_name);
			printf("\n\t\t\tFather's Name:%s",Info.father_name);
			printf("\n\t\t\tRoll No:%s",Info.roll_no);
			printf("\n\t\t\tCLass:%s",Info.class);
			printf("\n\t\t\tGroup:%s",Info.group);
			printf("\n\t\t\tGender:%s",Info.gender);
			printf("\n\t\t-----------------------------------------------------");
			printf("\n\t\t=====================================================");
			
			printf("\n\n--------------------------------------");
			printf("\n\n======================================");
			printf("\n\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to continue...");
    getch();
}
void modify_students_c_10()
{
    char stname[20];
    FILE *fp;
    struct student Info;
    system("cls");
    printf("\n\n\t\t\t========================================================");
    printf("\n\n\t\t\t<-----------=Modify Details of Students=--------------->");
	printf("\n\n\t\t\t========================================================");
    printf("\n\n\tEnter Name of Students to Modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("student_c_10.txt","rb+");
    if(fp == NULL){
        printf("Error in opening file");
        exit(1);
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
			printf("\n\t\t=====================================================");
			printf("\n\t\t-----------------------------------------------------");
			printf("\n\t\t\tName:%s",Info.first_name);
			printf("\n\t\t\tFather's Name:%s",Info.father_name);
			printf("\n\t\t\tRoll No:%s",Info.roll_no);
			printf("\n\t\t\tCLass:%s",Info.class);
			printf("\n\t\t\tGroup:%s",Info.group);
			printf("\n\t\t\tGender:%s",Info.gender);
			printf("\n\t\t-----------------------------------------------------");
			printf("\n\t\t=====================================================");
			
			printf("\n\n--------------------------------------");
			printf("\n\n======================================");
			printf("\n\t\tDETIALS MODIFIED.");
            break;
        }
    }
    fclose(fp);
	printf("\n\n\t\t\tPress any key to continue...");
    getch();
}

