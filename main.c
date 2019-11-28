#include "myBank.h"
#include <stdio.h>
#include <stdbool.h>

int main(){
    int account_number = 0;
    double amount = 0;
    double interest_rate = 0;
    char function;
    bool flag = true;
    while(flag == true){
        printf("Enter O to open new account: \n Enter B to find out the balance of each account: \n Enter D to deposit money: \n Enter W to withdraw money: \n Enter C to close account: \n Enter I to add interest: \n Enter P to print all the open accounts: \n Enter E to close all the accounts: \n");
        if (scanf(" %c", &function) != 1 ){
             printf("Error: you made typing mistake \n \n ");
        }
        else{
        switch (function)
        {
            case 'O':
                printf("Enter the amount: ");
                if(scanf("%lf",&amount) == 0){
                    printf("Error: invalid value \n \n ");
                }
                else {
                int o = O(amount);
                printf( "%d \n \n", o);

                }
                break;

            case 'B':
                printf("Enter the account number: ");
                if(scanf("%d",&account_number) == 0){
                    printf("Error: invalid value \n \n");
                }
                 else {
                double b = B(account_number);
                printf( "%0.2lf \n \n", b);
                 }
                break;

            case 'D':
                printf("Enter the account number: ");
                if(scanf("%d" ,&account_number) == 0){
                    printf("Error: invalid value  \n \n ");
                }
                else{
                    printf("Enter the amount you wish to deposit: ");
                    if(scanf( "%lf",&amount) == 0){
                        printf("Error: invalid value  \n \n ");
                    }
                    else{
                    double d = D(account_number, amount);
                    printf( "%0.2lf \n \n", d);
                    }
                }
                break;

            case 'W':
                printf("Enter the account number: ");
                if(scanf("%d" ,&account_number ) == 0){
                     printf("Error: invalid value \n \n");
                }
                else{
                    printf("Enter the amount you wish to withdrawal: ");
                    if(scanf( "%lf",&amount)== 0){
                         printf("Error: invalid value  \n \n ");
                    }
                    else{
                    double w = W(account_number, amount);
                    printf( "%0.2lf \n \n", w);
                    }
                }
                break;

            case 'C':
                printf("Enter the account number: ");
                if(scanf("%d",&account_number) == 0){
                     printf("Error: invalid value  \n \n ");
                }
                else{
                C(account_number);
                }
                break;

            case 'I':
                printf("Enter the interest rate: ");
                if(scanf("%lf",&interest_rate) == 0){
                     printf("Error: invalid value  \n \n ");
                }
                else{
                I(interest_rate);
                }
                break;

            case 'P':
                P(account_number, amount);
                break;

            case 'E':
                E();
                flag = false;
                break;
            default :
                printf(" \n Error: invalid value , try again: \n \n");
        }
        }
    }
}
