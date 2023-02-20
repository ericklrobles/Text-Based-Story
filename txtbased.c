#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main(void)
{
   float input, input2, input3; 
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
        if(input2 == 'n'){
            printf("You saved yourself congrats, afterwards you meet up some new guy in town called Heisenberg selling some of that new blue\n");
            printf("Do you meet with them and steal their blue and make an ez profit or you peacefully accept their offer(1/2)\n");
            scanf("%f", &input3);
            if(input3 == '1')
            {
                printf("congrats you stole a few pounds of that new blue meth!\n");//reference to breaking bad dont sue me
                printf("now you are DEA's most wanted list for the rest of your life\n");
            }
            if(input3 == '2')
            {
                printf("you peacefully accept the offer and buy of around 40k per pound of the new blue\n");
                printf("and then you eventually get beaten to some druggy kid that takes his own product\n");
                printf("therefore the dea still finds you and ambushes you THE END :D \n");
            }
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
