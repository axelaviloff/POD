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

// Algoritmo insertionSort
void insertionSort(int A[], int N) {
    int i, j, p;
    for (i = 1; i < N; i++) {
        p = A[i];
        j = i;
        while (j > 0 && p < A[j - 1]) {
            A[j] = A[j - 1];
            j--;
        }
        A[j] = p;
    }

}


int main() {

    int A[] = {6, 5, 4, 3, 2, 1};
    
    insertionSort(A, 6);
    
    mostraVetor(A, 6);



    return 0;
}