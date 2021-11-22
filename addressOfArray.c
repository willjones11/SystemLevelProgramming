#include <stdio.h>
int main(){
    //intialize array of int 
    int numbers[5] = {0};
    int i = 0;
    
    //print address of array
    printf("numbers = %p\n", numbers);

    //print each element address using method 1
    printf("Method 1: Addresses of array elements");
    do{
        printf("numbers[%u] = %p\n", i, (void*)(&numbers[i]));
        i++;
    } while(i < 5);

    i = 0;
    //print each element address using method 2
    printf("Method 2: Addresses of array elements");
    do
    {  
        printf("numbers[%u] = %p\n", i, (void*)(numbers + 1));
        i++;
    } while(i < 5);
    //print size of the array
    printf("sizeOf(numbers) = %1u\n", sizeof(numbers));
}