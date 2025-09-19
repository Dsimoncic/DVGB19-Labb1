#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <signal.h>
#include <pthread.h>

int buffersize;
int N;
int timeinterval;
int counter=0;
int bufferfull=0;


void* prodthread(void* arg) {
    printf("Hej, jag är en tråd \n");
    return NULL;
}

void* consthread(void* arg) {
    printf("Hej, jag är en consumer tråd\n");
    return NULL;
}

int main(void) {


    printf("Enter number of consumers: ");
    scanf("%d", &N);

    printf("Enter the buffersize: ");
    scanf("%d", &buffersize);

    printf("Enter the time interval: ");
    scanf("%d", &timeinterval);


    int buffer[buffersize];

    pthread_t cons[N];
    

    for(int i = 0; i < N; i++) {
        if(pthread_create(&cons[i], NULL, consthread, NULL) != 0) {
            perror("Kunde inte skapa tråd");
            return 1;
        }
     }

    pthread_t prod;

    
    if(pthread_create(&prod, NULL, prodthread, NULL) != 0) {
        perror("Kunde inte skapa tråd");
        return 1;
    }
    while(true){
        counter++;
       
       

        if(buffersize==1){
            // buffer{[0] lägg i en consumer thread
            // for loop för att flytta ner alla värden ett steg. sista blir ledig
            //buffer[buffersize]=counter;

        }
        if(bufferfull==0){
            buffer[counter] = counter;
             printf("antal counter %d\n",buffer[counter]);
            if(counter==buffersize){
                bufferfull=1;
            }
        }

        

        sleep(timeinterval);
    }




    pthread_join(prod, NULL);

    printf("Tråden är klar \n");

    for(int i = 0; i < N; i++) {
        pthread_join(cons[i], NULL);
        printf("Tråden %d är klar\n", i);
    }

    return 0;
}
