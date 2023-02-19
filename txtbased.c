#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main(void)
{
   float input; 
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
        printf("");
    }
    

    return 0;
}
