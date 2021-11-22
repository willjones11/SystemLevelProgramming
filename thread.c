#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

typedef struct ft
{
    char* file_name;
    int start_index;
    int end_index;
    int totalCount;
    
};

void *threadCount(void *arg){
    int i;
    char c;
    int count = 0;
    struct ft* fi = (struct ft*)arg;
    FILE* file = fopen(fi->file_name, "r");
    fseek(file, fi->start_index, SEEK_SET);
    for(i = 0; i < fi->end_index - fi->start_index; i++){
        c = getc(file);
        if(c == 'g')
            count++;
    }
    fi->totalCount=count;
}

int main(){
    struct ft f[2];
    f[0].file_name="input.txt";
    f[0].start_index=0;
    f[0].end_index=40;
    f[0].totalCount=0;
    f[1].file_name="input.txt";
    f[1].start_index=40;
    f[1].end_index=80;
    f[1].totalCount=0;
    
    int i;
    pthread_t tid[2];;
    for(i = 0; i < 2; i++){
        pthread_create(&tid[i], NULL, threadCount, (void*)&f[i]);
    }
    pthread_join(tid[0], NULL);
    pthread_join(tid[i], NULL);
    printf("Total count = %d", f[0].totalCount + f[1].totalCount);
    return 0;
    
    
}