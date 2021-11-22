#include <stdio.h>
#define N 50
int main()
{
int arr[N], i = 0;
char ch;

printf("Enter a message: ");
while((ch = getchar()) != '\n' && i < N){
    arr[i] = ch;
    i++;
}
printf("Reversal is: ");
while(arr[i-1] != '\0'){
    putchar(arr[i-1]);
    i--;
}
printf("\n");
return 0;
}
