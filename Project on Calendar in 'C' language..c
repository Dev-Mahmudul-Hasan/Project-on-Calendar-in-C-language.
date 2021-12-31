#include<stdio.h>
#include <string.h>
#include <stdlib.h>

void well()
{



    printf("\n\n\n\n\n\n\n\n");
    printf    ("\t\t\t\t         *****                  *****    ***********   ***          ***                *********    ********    *****         *****   ************   \n");
    printf    ("\t\t\t\t          *****        *       *****    ************   ***          ***               **********   **********   ******       ******   ************   \n");
    printf    ("\t\t\t\t           *****      ***     *****     ***            ***          ***               ***          ***    ***   *** ***     *** ***   ***            \n");
    printf    ("\t\t\t\t            *****    *****   *****      *********      ***          ***               ***          ***    ***   ***  ***   ***  ***   *********      \n");
    printf    ("\t\t\t\t             *****  ******* *****       *********      ***          ***               ***          ***    ***   ***   *** ***   ***   *********      \n");
    printf    ("\t\t\t\t              ******************        ***            ***          ***               ***          ***    ***   ***    *****    ***   ***            \n");
    printf    ("\t\t\t\t               ****************         ************   **********   **********        **********   **********   ***             ***   ************   \n");
    printf    ("\t\t\t\t                **************           ***********   **********   **********         *********    ********    ***             ***   ************   \n");
    printf    ("\n\n\n\t\t\t\t\t!********************************************************************************************************************************************!\n\n\n");
}
void print()
{
    while(1)
    {
        system("color 0C");
        system("color 01");
        system("color 02");
        system("color 03");
        system("color 04");
        system("color 05");
        system("color 06");
        system("color 07");
        system("color 08");
        system("color 0B");
        system("color 09");
        system("color 0A");
        system("color 0B");
        system("color 0C");
        system("color 0D");
        system("color 0E");
        system("color 0F");
        system("color 07");
        system("cls");
        well();
        break;
    }

}

int get_first_day(int year)
{
    int day=(year*365+((year-1)/4)-((year-1)/100)+((year-1)/400))%7;
}

void calndar()
{

    int i,j,total_days,week_day,space,year;
    char *months[12] = {"january","februray","march","april","may","june","july","augest","september","octobar","nobmber","december"};
    int day_months[]= {31,28,31,30,31,30,31,30,31,30,31,30};
    print();
    system("color 0C");
    system("color 01");
    system("color 02");
    system("color 03");
    system("color 07");

    printf("\t\t\t\t\t\t\t\t\t\t\t\tyour year=");
    scanf("%d",&year);
    print();
    if((year %4 == 0&& year %100 != 0) || (year %400 == 0))
    {
        day_months[1]=29;
    }

    week_day=get_first_day(year);
    for(i=0; i<12; i++)
    {
        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t     ................**%s**.................\n\n\n",months[i]);
        printf("\t\t\t\t\t\t\t\t\t\t          sun  mon  tue  wed  thu  fri  sat \n\n\t\t\t\t\t\t\t\t\t\t\t");

        total_days=day_months[i];

        for(space=1; space<=week_day; space++)
        {

            printf("    -");
        }



        for(j=1; j<=total_days; j++)
        {

            printf("%5d",j);
            week_day++;
            if(week_day>6)
            {
                week_day=0;
                printf("\n");
                printf("\t\t\t\t\t\t\t\t\t\t\t");
            }
        }
    }
    return 0;
}
void login()
{
    int i,length,userChoice;
    char name[30];
    char password[20];
    FILE *file;
    file=fopen("test.txt","r");
    system("cls");
    printf ("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t|************LOGIN************|\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|   Username:  ");

    scanf("%s",name);
    system("color 04");
    printf("\t\t\t\t\t\t\t\t\t\t\t|   Password:  ");
    scanf("%s",password);
    printf ("\t\t\t\t\t\t\t\t\t\t\t|*****************************|\n");
    system("color 02");
    sleep(5);
    system("cls");
    while(!feof(file))
    {
        fgets (name, 30, file);
        fgets (password, 20, file);
        if(strcmp(name,"hasan")==0 && strcmp(password,"212902028")==0)
        {
            printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t|************************|");
            printf ("\n\t\t\t\t\t\t\t\t\t\t\t|----Successful Login----|\n");
            printf ("t\t\t\t\t\t\t\t\t\t\t\t|************************|");
            calndar();
            return main();

        }
        else
        {
            system("color 04");
            system("color 06");

            system("color 04");
            printf ("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t|************************|");
            printf ("\n\t\t\t\t\t\t\t\t\t\t\t|------UnSuccessful-------|\n");
            printf ("\t\t\t\t\t\t\t\t\t\t\t|************************|\n\n\n\n\n\n\n");
            sleep(2);
            system("cls");
            printf ("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t***----Try Again-----***\n");
            sleep(4);
            return main();
        }
    }

    fclose(file);


    return 0;
}

int main()
{
    int i,length,password[30],userChoice;
    char name[30];
    FILE *file;
    file=fopen("test.txt","a");
    while(1)
    {


        system("color 0B");

        printf ("\n\n\n\t\t\t\t   \t    !************************************************************************************************!");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t**WELLCOME MY PROJECT**");
        printf("\n\n\n\t\t\t\t\t\t\t       1.WellCome\t\t\t2.exit\t\t\t3.login ");
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t choice an opption : \n\n\n\t\t\t\t   \t    !************************************************************************************************!");
        scanf("%d",&userChoice);
        system("cls");
        if(userChoice==1)
        {
            print();
            system("color 0C");
            system("color 01");
            system("color 02");
            sleep(1);
            system("color 03");
            system("color 04");
            system("color 05");
            system("color 06");
            system("color 07");
            system("color 08");
            system("color 0B");
            system("color 09");
            sleep(1);
            system("color 0A");
            system("color 0B");
            system("color 0C");
            system("color 0D");
            system("color 0E");
            system("color 0F");
            system("color 07");

            print();
            sleep(5);
        }
        else if(userChoice==2)
        {

            printf ("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t|************************|");
            printf ("\n\t\t\t\t\t\t\t\t\t\t\t|-------Successful-------|\n");
            printf ("\t\t\t\t\t\t\t\t\t\t\t|************************|\n\n\n\n\n\n\n");
            return 0 ;
        }
        else if(userChoice==3)
        {
            login();

            break;
        }
        else
        {
            printf("\n-------\n 1. WellCome \n 2.exit\n choice an opption : ");
            scanf("%d",&userChoice);
        }
    }

    fclose(file);

}
