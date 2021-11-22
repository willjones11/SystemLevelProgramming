
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
double loanAmount,interestRatePerYear;
int n;
double A,r,totInterest;
double INT[1000],B[1000],P[1000];
printf("Enter amount of loan : $ ");
scanf("%lf",&loanAmount);
printf("Enter interest rate per year : %% ");
scanf("%lf",&interestRatePerYear);
printf("Enter number of payments : ");
scanf("%d",&n);
r=interestRatePerYear/1200;
A=loanAmount*((r*pow(1+r,n))/(pow(1+r,n)-1));
B[0]=loanAmount;
printf("# \t Payment \t Principal \t Interest \t Balance\n");
for(int i=1;i<=n;i++) {
INT[i]=B[i-1]*r;
P[i]=A-INT[i];
B[i]=B[i-1]-P[i];
}
for(int i=1;i<=n;i++) {
printf("%d \t $%0.2lf \t $%0.2lf \t $%0.2lf ",i,A,P[i],INT[i]);
if(INT[i]/10.0 < 1.0)
printf("\t\t $%0.2lf", B[i]);
else
printf("\t $%0.2lf", B[i]);
printf("\n");
}
}