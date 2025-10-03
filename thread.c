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
static pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t not_empty = PTHREAD_COND_INITIALIZER;
static pthread_cond_t not_full = PTHREAD_COND_INITIALIZER;
volatile sig_atomic_t stop = 0;

static void* sigint(int sig) {





}













void* prodthread(void* arg) {

    while(stop == 0){   // kollar ctrl-c
        if (stop == 1) break;
    }

}



















void* consthread(void* arg) {
while(stop){



    
}


}
























int main(void) {



    printf("Ange antal konsumenter: ");
    scanf("%d", &N);

    printf("Ange Bufferstorlek: ");
    scanf("%d", &buffersize);

    printf("Ange tidsintervall");
    scanf("%d", timeinterval);



    return 0;
}
