#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main(void)
{
   float input, input2; 
   char input2;
   
    printf("Choose your life 1.[a cartel drug lord] or 2.[a absolute chad of a father]\n");
    scanf("%f",&input);
    if (input == 1){
        printf("Welcome to the Cartel Homie ORALE IUUUU!\n ");
        printf("Want to get a Corona Homie or what (y/n)\n");
        scanf(" %c", &input2);
        if(input2 == 'y'){
         printf("you get a corona and later realized you got drugged yourself and betrayed by one of your homies\n");
        }
    }
    if (input == 2)
    {
        printf("You wake up and go wake up little ole jimmy\n");
        printf("Do you tell him to go to the gym or go to school? (1/2)");
        scanf("%f", &input2);
        if (input2 == 1){
            printf("You decide for him to skip school and go to the gym like an absolute chad\n");
            printf("Its push day and your son only benches the bar what do you do?(1.give him roids/2.go get some milk)\n");
        }
    }

    

    return 0;
}
