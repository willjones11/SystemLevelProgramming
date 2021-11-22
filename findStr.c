#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

    char input[21],small[21],large[21];

    printf("Enter Word : ");
    scanf("%s",input);
    strcpy(small,input);
    strcpy(large,input);
    while(strlen(input)!=4)
    {
        if(strcmp(input,small)<0)
        strcpy(small,input);
        else if (strcmp(input,large)>0)
        strcpy(large,input);
        printf("Enter Word : ");
        scanf("%s",input);
    }

    printf("Smallest word : %s\n",small);
    printf("Largest word : %s\n",large);
    return 0;
}