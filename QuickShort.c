#include <stdio.h>

int partitions(int A[], int low, int high) {
    int pivot, i, j, t;
    pivot = A[high];

    for(i = low - 1, j = low; j < high; j++) {
        if(A[j] < pivot) {
            i += 1;
            t = A[i];
            A[i] = A[j];
            A[j] = t;
        }
    }

    t = A[i+1];
    A[i+1] = A[high];
    A[high] = t;
    return i+1;
}
void quick_sort(int A[], int low, int high) {

    if(low >= high) {
        return;
    }
    int p;
    p = partitions(A,low,high);
    quick_sort(A,low,p-1);
    quick_sort(A,p+1,high);

}
int main ()
{
    int i,j,x, A[100];
    printf("Array length : ");
    scanf("%d" , &x);
    printf("Input Array : ");
    for( i = 0; i < x; i++) {
        scanf("%d" , &A[i]);
    }
    quick_sort(A,0,x-1);
    for( j = 0; j < x; j++) {
        printf("%d ", A[j]);
    }
}
