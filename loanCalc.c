#include <math.h>
#include <stdio.h>
int main() {
    double amt,r,t;
    printf("Enter amount of loan: $ ");
    scanf("%lf", &amt);
    printf("Enter Interest rate per year: %% ");
    scanf("%lf", &r);
    printf("Enter Number of payments: ");
    scanf("%lf", &t);
    // rate stored in form of divided 100
    // 7.5 percent per year is stored as 0.075
    r=r/100;
    //rate converted to per month
    r=(r/12);
    //synthesized fast monthly payment formula
    double monthlyPayment = (amt*r)/(1-pow(1+r, -t));
    printf("Monthly payment should be %.2lf\n",monthlyPayment);
    //intr for storing monthly interest on amount
    //p for storing monthly principal
    double intr,p;
    int i=1;
    printf("#\tPayment\t\tPrincipal\tInterest\tBalance\n");
    while(i<=t)
    {
        intr=r*amt;
        p=monthlyPayment-intr;
        amt=amt-p;
        printf("%d\t%.2lf\t\t%.2lf\t\t%.2lf\t\t%.2lf\n",i++, monthlyPayment,p,intr,amt);
    }
    return 0;
}