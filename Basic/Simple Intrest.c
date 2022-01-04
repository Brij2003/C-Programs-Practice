#include <stdio.h>
int main()
{
    int Amount, Rate, Time, Simple_Intrest;
    {
        printf("Please enter the amount of which you are intrested to find intrest\n");
        scanf("%d", &Amount);
        printf("Enter the rate at which interst is to be counted\n");
        scanf("%d", &Rate);
        printf("Enter the time for which you are intrested to find intrest \t (Make sure you enter time is in Months)\n");
        scanf("%d", &Time);
        {
            Simple_Intrest = (Amount * Rate * Time) / 100;
            printf("Your intrest on %d amount at %d Percentage of rate,for %d of Months is = %d\n", Amount, Rate, Time, Simple_Intrest);
        }
    }

}
