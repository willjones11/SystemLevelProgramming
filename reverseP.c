#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 50
int main() {
  
char arr[N];
int ch, i=0;
  
printf("Enter a message : ");
while ((ch = getchar()) != '\n' && i < N)
{
    *(arr+i) = ch;
    i++;
   
}

printf("Reversal is : ");     
while(*(arr+(i-1))!='\0')
{
    putchar(*(arr+(i-1)));
    i--;
}
  

printf("\n");
  
   return 0;
  
}
