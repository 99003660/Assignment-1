#include <pthread.h>
#include <semaphore.h>
#include <stdlib.h>
#include <stdio.h>

#define Max 5 // Maximum items a producer can produce or a consumer can consume
#define BufSize 5 // Size of the buffer

int in = 0;
int out = 0;
int item=0;
int buffer[BufSize];
pthread_mutex_t mutex;

void *producer(void *pno)
{   
    if(in==BufSize-1)
    {
        printf("Producer Stack is full \n");
    }
    else
    {
     for(int i = 0; i < Max; i++) {
        item = rand(); // Produce a random item
        pthread_mutex_lock(&mutex);
        /* put value item into the buffer */
        buffer[in] = item;
        printf("Producer %d: Insert Item %d at %d\n", *((int *)pno),buffer[in],in);
        in = (in + 1) % BufSize;     
        pthread_mutex_unlock(&mutex);
     }
    }
}
void *consumer(void *cno)
{   
    if(out==BufSize-1)
    {
        printf("Consumer Stack is full\n");
    }
    else
    {
     int item=0;
     for(int i = 0; i < Max; i++) {
        pthread_mutex_lock(&mutex);
        item = buffer[out];
        printf("Consumer %d: Remove Item %d from %d\n",*((int *)cno),item, out); 
        out = (out + 1) % BufSize;     
        pthread_mutex_unlock(&mutex);
     }
    }
}

int main()
{   

    pthread_t pro[5],con[5];
    pthread_mutex_init(&mutex, NULL);

    int a[5] = {1,2,3,4,5}; //Just used for numbering the producer and consumer

    for(int i = 0; i < 5; i++) {
        pthread_create(&pro[i], NULL, (void *)producer, (void *)&a[i]);
    }
    for(int i = 0; i < 5; i++) {
        pthread_create(&con[i], NULL, (void *)consumer, (void *)&a[i]);
    }

    for(int i = 0; i < 5; i++) {
        pthread_join(pro[i], NULL);
    }
    for(int i = 0; i < 5; i++) {
        pthread_join(con[i], NULL);
    }

    pthread_mutex_destroy(&mutex);

    return 0;
}
