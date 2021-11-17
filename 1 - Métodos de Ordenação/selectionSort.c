#include <stdio.h>

void mostraVetor(int A[], int N) {
    int i;
    for (i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}


void troca(int *a, int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

// Algoritmo SelectionSort
void selectionSort(int A[], int N) {
    int i, j, min;
    for(i = 0; i < N - 1; i++) {
        min = i;
        for (j = i + 1; j < N; j++) {
            if (A[min] > A[j]) {
                min = j;
            }
        }
        if (i != min) {
            troca(&A[i], &A[min]);
        }
    }
}


int main() {

    int A[] = {6, 5, 4, 3, 2, 1};
    
    selectionSort(A, 6);
    
    mostraVetor(A, 6);



    return 0;
}