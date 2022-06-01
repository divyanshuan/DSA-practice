#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int n1, n2, opt, x;
    do
    {
        printf("\n choose what you want do:---->>\n");
        printf("\n 1. addition \n 2.substraction \n 3.multiplication \n 4.division. \n 5.exit\n");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf("you chosse addition:: \n");
            printf("enter the value of n1 :");
            scanf("%d", &n1);
            printf("\nenter the value of n2 :");
            scanf("%d", &n2);
            x = n1 + n2;
            printf("Sum of these two numbers: %d", x);
            break;

        case 2:
            printf("you chosse substraction:\n");
            printf("enter the value of n1:");
            scanf("%d", &n1);
            printf("enter the value of n2:");
            scanf("%d", &n2);
            x = n1 - n2;
            printf("Difference of these two numbers: %d", x);
            break;

        case 3:
            printf("you chosse multiplication:");
            printf("enter the value of n1:");
            scanf("%d", &n1);
            printf("enter the value of n2:");
            scanf("%d", &n2);
            x = n1 * n2;
            printf("Multiplication of these two numbers: %d", x);
            break;

        case 4:
            printf("you chosse division:");
            printf("enter the value of n1:");
            scanf("%d", &n1);
            printf("enter the value of n2:");
            scanf("%d", &n2);
            if (n2 == 0)
            {
                printf("it is not defined please enter another number:--->>");
            }
            else
            {
                x = n1 / n2;
                printf("Division of these two numbers: %d", x);
            }
            break;

        case 5:
            opt = 5;
            break;
        default:
            printf("it is not defined please enter another number:--->>");
            break;
        }
    } while (opt != 5);
    return 0;
}