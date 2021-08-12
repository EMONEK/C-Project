#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include <windows.h>

int i=0;

struct library
{
    char name[50];
    char Author[50];
    int ID;
    int Quantity;
    char Rak[50];
    char date[50];
};




void headMessage()
{
    printf("\t\t\t#####################################################################");
    printf("\n\t\t\t############                                             ############");
    printf("\n\t\t\t############   Library Management System Project in C    ############");
    printf("\n\t\t\t############                                             ############");
    printf("\n\t\t\t#####################################################################");
    printf("\n\t\t\t-------------------------------------------------------------------\n");
    printf("\n\t\t\t---------------------PROJECT MADE BY EMON KHAN---------------------\n");
    printf("\n\t\t\t---------------------------------------------------------------------");
}
///Display message
void welcomeMessage()
{
    printf("\n\n\n\n\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                    WELCOME                =");
    printf("\n\t\t\t        =                      TO                   =");
    printf("\n\t\t\t        =               Library  MANAGEMENT         =");
    printf("\n\t\t\t        =                    SYSTEM                 =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getch();
}



int INDEX = 0;
struct library  library[40];
///Input code here!!
void insert()
{
    printf("Book Name:\n");
    scanf("%s", library[INDEX].name);

    printf("Author Name:\n");
    scanf("%s", library[INDEX].Author);

    printf("ID:\n");
    scanf("%d", &library[INDEX].ID);

    printf("Quantity:\n");
    scanf("%d",&library[INDEX].Quantity);

    printf("Rak:\n");
    scanf("%s", &library[INDEX].Rak);

    printf("Date:"
           "(DD\\MM\\YY)\n");
    scanf("%s", &library[INDEX].date);

    printf("Book has been inserted!\n\n");
    INDEX++;
}

void output()                                             ///Output code here!!
{
    int i;
    int a;
    if (INDEX == 0)
    {
        printf("List Is Empty\n\n");
    }
    else
    {

        for (i = 0; i <INDEX; i++)
        {

            printf("Book Name: %s\n",library[i].name);
            printf("Author: %s",library[i].Author);
            printf("\nID: %d\n",library[i].ID);
            printf("Quantity: %d\n",library[i].Quantity);
            printf("Rak: %s",library[i].Rak);
            printf("\nDate: %s",library[i].date);
            printf("\n\n");
        }
    }
}


/// Total library No. Here!!


void tb()
{
    printf("\nThe Total Type's of Book is:( %d )\n",INDEX);

}

///Delete Function Here!!

void del_b()
{
    int a;
    printf("Enter the ID Number which you want to delete: ");
    scanf("%d",&a);
    for (int j = 0; j < INDEX; j++)
    {
        if (a == library[j].ID)
        {
            for (int k = j; k < INDEX-1; k++)
                library[k] = library[k + 1];
            INDEX--;
            printf("Book's Document removed Successfully\n");
            break;
        }

    }

}

///library Details Edit  Here!!

void up_b()
{

    printf("Enter the ID number"
           " to update the entry : ");
    int x;
    scanf("%d",&x);
    for (int i =0; i <INDEX; i++)
    {
        if (library[i].ID == x)
        {
            printf(" Book Name: %s \n",library[i].name);
            printf(" Author Name: %s",library[i].Author);
            printf(" \n ID: %d\n",library[i].ID);
            printf(" Quantity.: %d\n",library[i].Quantity);
            printf(" Rak: %s",library[i].Rak);
            printf("\n Date: %s",library[i].Rak);
            printf("\n\n");

            printf("1. Book Name\n"
                   "2. Author\n"
                   "3. ID NO.\n"
                   "4. Quantity.\n"
                   "5. Rak\n"
                   "6. Date\n"
                   "7. Exit\n"
                  );
            int z;
            printf("Enter Your Choice:__");
            scanf("%d",&z);
            switch (z)
            {
            case 1:
                printf(" Book name:\n");
                scanf("%s", library[i].name);
                break;

            case 2:
                printf(" Author:\n");
                scanf("%s", &library[i].Author);
                break;

            case 3:
                printf(" ID:\n");
                scanf("%d", &library[i].ID);
                break;

            case 4:
                printf(" Quantity.:\n");
                scanf("%d", &library[i].Quantity);
                break;

            case 5:
                printf(" Rak:\n");
                scanf("%s", &library[i].Rak);
                break;

            case 6:
                printf(" Date:"
                       "(DD\\MM\\YY)\n");
                scanf("%s", &library[INDEX].date);
                break;

            case 7:
                break;

            }

            printf(" UPDATED SUCCESSFULLY.\n");
            break;
        }

    }
}



int main()                                                ///Main Function Here!!
{
    SetConsoleTitle("library Management System | UIU");
    headMessage();
    welcomeMessage();


    int choise;

     printf("\n");
    char array[100]="uiu",array1[100]="";
    char pass[100]="1234", pass1[100]="";
    printf("\n\t\t\tEnter User name : ");
    gets(array1);


    if(strcmp(array,array1)==0)
    {
        printf("\n\t\t\tEnter Password : ");
        gets(pass1);
        if (strcmp(pass,pass1)==0)
        {
            printf("\n\t\t\tLog In Successful\n");



            while (1)
            {
                printf("\n\n");
                printf("\n\t\t\t\t\t Menu\n");
                printf("\n\t\t\t 1. Insert Book's Records\n");
                printf("\n\t\t\t 2. All Book's Records\n");
                printf("\n\t\t\t 3. Total Types Of Book Is \n");
                printf("\n\t\t\t 4. Edit Book's Records \n");
                printf("\n\t\t\t 5. Delete Book's Record\n");
                printf("\n\t\t\t 6. Exit\n");
                printf("\n\t\t\t Enter your choice:");
                scanf("%d", &choise);

                if (choise == 1)
                {
                    insert();
                }
                else if (choise == 2)
                {
                    output();
                }
                else if(choise==3)
                {
                    tb();
                }
                else if (choise == 4)
                {
                    up_b();

                }
                else if (choise == 5)
                {
                    del_b();
                }
                else if (choise == 6)
                {
                    break;
                }
                else
                {
                    printf("\tWrong Option!!\t\n\n");
                }
            }



        }
        else
            printf("\n\t\t\tWrong Password!\n");
    }
    else
        printf("\n\t\t\tWrong User Name\n");


    return 0;
}
