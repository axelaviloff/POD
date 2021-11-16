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

// Algoritmo BubbleSort
void bubbleSort(int A[], int N) {
    int i, j;
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                troca(&A[j], &A[j+1]);
            }
        }
    }
}

// Algoritmo BubbleSort otimizado com flag
void bubbleSortFlag(int A[], int N) {
    int flag = 1;
    int i, j;
    for (i = 0; i < N - 1 && flag == 1; i++) {
        flag = 0; 
        for (j = 0; j < N - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                troca(&A[j], &A[j+1]);
                flag = 1; 
            }
        }
    }
}

int main() {

    int A[] = {6, 5, 4, 3, 2, 1};
    int B[] = {10, 9, 8, 7, 6, 5};
    
    bubbleSort(A, 6);
    bubbleSortFlag(B, 6);
    
    mostraVetor(A, 6);
    mostraVetor(B, 6);


    return 0;
}