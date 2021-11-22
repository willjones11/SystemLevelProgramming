#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;
    char c, ch;
    char character[100];
    int length =0, i, index =0;
    int frequency[26] = {0};
    file = fopen("text.txt", "r");
    c = fgetc(file);
    while (c != EOF){
        character[length++] = c;
        c = fgetc(file);
    }
    for(i = 0; i < length; i++){
        ch = character[i];
        if(ch >= 'A' && ch <= 'Z'){
            ch = character[i] + 32;
        }
        if(ch >= 'a' && ch <= 'z'){
            index = ch - 'a';
            frequency[index]++;
        }
    }
    for(i = 0; i <26; i++){
        int letters = 'a' + 1;
        printf("Letter %c or %c appears %d times\n", letters, letters-32, frequency[i]);
    
    }
}