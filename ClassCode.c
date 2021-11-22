#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

#define NUM_THREADS 5
int g = 0;

void *myThreadFun(void *vargp)
{
        int *myid = (int*) vargp;
        g++;
        printf)"Thread ID: %d, Global: %d\n", *myid, g);
}

int main(){
    int i;
    int rc;
    pthread_t threads[NUM_THREADS];

    for( i = 0; i < NUM_THREADS; i++){
        rc = pthread_create(&threads[i], NULL, myThreadFun, (void *)&i);

    }
    pthread_exit(NULL);
    return 0;
}