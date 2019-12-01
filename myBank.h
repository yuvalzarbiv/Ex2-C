#include <stdio.h>
#ifndef _myBank_H_
#define _myBank_H_
#define accounts 50
#define number 2
extern double Bank[accounts][number];

int O (double amount);
double B(int account_number);
double D(int account_number, double amount);
double W(int account_number, double amount);
void C(int account_number);
void I(double interest_rate);
void P ();
void E ();

#endif

