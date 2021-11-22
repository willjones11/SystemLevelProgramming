#include <stdio.h>

#include <math.h>

#include <stdlib.h>

int main()

{

   float principalAmount, annualInterstRate, monthlyInterestRate;

   float equatedMonthlyInstallment , initialBalance, interest, principalPaid, finalBalance;

   int totalMonths, month;

   float interestList[30], principalPaidList[30], finalBalanceList[30];

   printf(" principalAmount: ");

   scanf("%f", &principalAmount);

  printf(" Annual Interest rate: ");

   scanf("%f", &annualInterstRate);

  printf(" Term in month: ");

   scanf("%d", &totalMonths);

  monthlyInterestRate = (float)(annualInterstRate / (12*100.0));

  equatedMonthlyInstallment  = principalAmount * (monthlyInterestRate / (1 - pow( (1 + monthlyInterestRate) , (-totalMonths) )));

  initialBalance = principalAmount;

  printf(" Monthly Payment: $%.2f \n", equatedMonthlyInstallment );

   for(month = 1; month <= totalMonths; month++)

   {

      *(interestList+month-1) = (initialBalance * monthlyInterestRate);

      *(principalPaidList+month-1) = equatedMonthlyInstallment  - *(interestList+month-1);

      *(finalBalanceList+month-1) = (initialBalance - *(principalPaidList+month-1));

      initialBalance = *(finalBalanceList+month-1);

   }

  printf(" %10s %14s %10s %10s ", " Payment ", " principalAmount ", " Interest ", " Balance ");

   for(month = 1; month <= totalMonths; month++)

   {

      printf("\n %6d\t\t $%-10.2f $%-10.2f $%-12.2f ", month, *(principalPaidList+month-1), *(interestList+month-1), *(finalBalanceList+month-1));

   }

   return 0;

} 