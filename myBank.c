#include <stdio.h>
#include "myBank.h"



int O (double amount){
    int i=0;
    for (i = 0; i<50; i++){
        if (Bank[i][1] == 0)
        {
            Bank[i][0] = amount;
            Bank[i][1] = 1;
	    printf ("the new account number is: ");
            return (i+901);
        }
    }
    printf ("The bank is full. \n");
    return -1;
}

double B (int account_number){
    if((account_number) <901 || (account_number) >950){
                    printf("Error: invalid account number \n \n");
}
    else if (Bank[account_number -901][1] == 0){

        return printf ("The account is closed. \n");
    }
    else
    {	printf("the interest in your account is: ");
        return Bank[account_number-901][0];
    }
	return -1;
}

double D (int account_number, double amount){
    if((account_number) <901 || (account_number) >950){
                    printf("Error: invalid account number \n \n");
}
    else if (Bank[account_number-901][1] == 0)
    {
        return printf ("The account is closed. \n");
    }
    else
    {
        Bank[account_number-901][0] = (Bank[account_number -901][0] + amount);
	printf("the new interest in your account is: ");
        return Bank[account_number-901][0];
    }
	return -1;
}

double W (int account_number, double amount){
    if((account_number) <901 || (account_number) >950){
                    printf("Error: invalid account number \n \n");
}
    else if (Bank[ account_number-901][1] == 0)
    {
        printf("The account is closed. \n");
    }
    else if (Bank[account_number-901][0] < amount)
    {
        printf ("The account doesn't contain enough money. \n");
    }
    else
    {
        Bank[account_number-901][0] = Bank[account_number-901][0] - amount;
	printf("the new account interest is: ");
        return Bank[account_number-901][0];
    }
    return -1;
}
void C (int account_number){
   if((account_number) <901 || (account_number) >950){
                    printf("Error: invalid account number \n \n");
}
   else if (Bank[account_number -901][1] == 0){
        printf ("The account is already closed. \n");
    }
    else
    {
        Bank[account_number -901][1] = 0;
	Bank[account_number -901][0] = 0;
        printf("The account has been closed. \n");
    }
}
void I (double interest_rate){
    int i;
    for (i = 0; i<50; i++){
        if (Bank[i][1] == 1)
        {   double rate = ((interest_rate /100)* Bank[i][0]);
            Bank[i][0] = Bank[i][0] + rate;
	    printf("the new interest in your account is: ");			
            printf("%0.2lf \n", Bank[i][0]);
        }
    }
}
void P (){
    int i;
    for (i = 0; i<50; i++){
        if (Bank[i][1] == 1)
        {
            printf("The amount in account number %d is: %0.2lf  \n",(i+901) ,Bank[i][0] );
        }
    }
}

void E (){
    int i;
    for (i = 0; i < 50; i++)
    {
        Bank[i][1] = 0;
    }
    printf("All of the accounts have been closed. \n");

}
