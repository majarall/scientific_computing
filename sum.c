#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define N_ELEMENTS 100000000
int main(int argc, char** argv) {
    clock_t start = clock();
    double* a = (double*) malloc(sizeof(double) * N_ELEMENTS);
    int i;
    for(i=0; i<N_ELEMENTS; ++i) {
        a[i] = (double) rand() / RAND_MAX;
    }
    double sum = 0;
    for(i=0; i<N_ELEMENTS; ++i) {
        sum += a[i];
    }
    printf("%f", sum);
    clock_t end = clock();
    double elapsed = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Elapsed time: %f\n", elapsed);
    return 0;
}
