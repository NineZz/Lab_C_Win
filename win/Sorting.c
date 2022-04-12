#include<stdio.h>
#include<stdlib.h>

void sort(int n, int* ptr);
void display(int A[], int B[], int size_A, int size_B);

int main(){
    int size_A;
    printf("Input A: Size = ");
    scanf("%d", &size_A);
    int A[size_A];
    for (int i = 0; i < size_A; i++){
        printf("A%d = ", i+1);
        scanf("%d", &A[i]);
    }

    int size_B;
    printf("Input B: Size = ");
    scanf("%d", &size_B);
    int B[size_B];
    for (int i = 0; i < size_B; i++){
        printf("B%d = ", i+1);
        scanf("%d", &B[i]);
    }

    display(A, B, size_A, size_B);
    return 0;
}

void sort(int n, int* ptr){
    int i, j, tmp;

    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (*(ptr + j) < *(ptr + i)){
                tmp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = tmp;
            }
        }
    }
}

void display(int A[], int B[], int size_A, int size_B){
    printf("Before Sorting...\n  A: ");
    for (int i = 0; i < size_A; i++){
        printf("%d  ", A[i]);
    }
    printf("\n  B: ");
    for (int i = 0; i < size_B; i++){
        printf("%d  ", B[i]);
    }

    sort(size_A, A);
    sort(size_B, B);

    printf("\nAfter Sorting\n  A: ");
    for (int i = 0; i < size_A; i++){
        printf("%d  ", A[i]);
    }
    printf("\n  B: ");
    for (int i = 0; i < size_B; i++){
        printf("%d  ", B[i]);
    }
}
