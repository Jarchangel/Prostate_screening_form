#include <stdio.h>

/**
 * main - a program that checks if the user is eligible for prostate cancer screening.
 */
int main()
{
        char name[30];
        int age,gender,i;

        printf("Enter your gender (F/M): ");
        gender=getchar();

        if(gender == 70)

                printf("You're not of the required gender\n");
        else{
                printf("Proceed to Entering your name\n");


        printf("Enter your name(s): \n");
        scanf("%s",name);

        printf("Welcome %s, Kindly Enter your age\n",name);
        printf("Age: ");
        scanf("%d",&age);
        
        if(age >= 40)
                printf("You're Eligible for a prostrate cancer screening test, Endeavour to visit a doctor\n");
        else if (age <= 39)
                printf("You're not Eligible for the test, come back in %d year(s)\n",(40 - age));
        }
        return (0);
}
