#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <signal.h>
#include <pthread.h>

int buffersize;
int N;
int timeinterval;

int main(void) {
    printf("Enter number of consumers\n");
    scanf("%d", &N);

    printf("Enter the buffersize\n");
    scanf("%d", &buffersize);

    printf("Enter the time interval\n");
    scanf("%d", &timeinterval);

    printf("You entered: N=%d, buffersize=%d, timeinterval=%d\n",
           N, buffersize, timeinterval);


    
    return 0;
}
