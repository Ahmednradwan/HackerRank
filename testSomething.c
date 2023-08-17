#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *str ="Hello World!";  
    printf("%s\n",str);
    printf("%c\n",*str);
    printf("%X\n",str);
    printf("%X\n",str+1);
    printf("%X\n",str+2);
    str="Embedded systems programing";
    printf("%s\n",str);
    printf("%X\n",str);
    char str_1[]="embedded systems road map";
    printf("%s\n",&str_1[9]);
    printf("%.7s\n",&str_1[9]);

    char daysOfTheWeek[][10]=
    {
        "Saturday",
        "Sunday",
        "Monday",
        "Tusday",
        "Wednesday",
        "Thurusday",
        "Friday"
    };
    for (int dayCount = 0; dayCount < 7; dayCount++)
    {
        printf("Day No. %d is: %s\n",dayCount+1,daysOfTheWeek[dayCount]);
    }
    char *days[]=
    {
        "Saturday",
        "Sunday",
        "Monday",
        "Tusday",
        "Wednesday",
        "Thurusday",
        "Friday"
    };
    for (int dayCount = 0; dayCount < 7; dayCount++)
    {
        printf("Day No. %d is: %s\n",dayCount+1,days[dayCount]);
    }

    char *myTxt;
    printf("please Enter Your Short Text here in one line:\n");
    scanf("%s",&myTxt);
    printf("Your Text is:\n");
    printf("%s\0",&myTxt);
    return EXIT_SUCCESS;
}