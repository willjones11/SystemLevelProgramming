#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct loan
{
double INT[100005];
double B[100005];
double P[100005];
}pay;
int main()
{
double AoL,IRPY;
int NoP;
char ch='%';
printf("Enter amount of loan : $");
scanf("%lf",&AoL);
printf("Enter interest rate per year : ");
printf("%c ",ch);
scanf("%lf",&IRPY);
printf("Enter number of payments : ");
scanf("%d",&NoP);
double A,r;
int n;
r=IRPY/1200;
n=NoP;
A=AoL*((r*pow(1+r,n))/(pow(1+r,n)-1));
printf("#\tPayment \t Principal\tInterest\tBalance\n");
for(n=1;n<=NoP;n++)
{
pay.INT[n]=pay.B[n-1]*r;
pay.P[n]=A-pay.INT[n];
pay.B[n]=pay.B[n-1]-pay.P[n];
printf("%d \t $%0.2lf \t $%0.2lf \t $%0.2lf \t $%0.2lf", n, A, pay.P[n], pay.INT[n], pay.B[n]);
printf("\n");
}
return 0;
}
