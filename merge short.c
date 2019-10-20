#include<stdio.h>
#define m 9999999
void printArray(int A[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
}
void mergeSort(int A[],int p,int r){
    if(p<r){
        int q =(p+r)/2;
        mergeSort(A,p,q);
        mergeSort(A,q+1,r);
        merge(A,p,q,r);
    }
}
void merge(int A[],int p,int q,int r){
    int n1=q-p+1;
    int n2=r-q;
    int L[n1+1];
    int R[n2+1];
    int i,j,k;
    for (i=1;i <=n1;i++){
        L[i]=A[p+i-1];
    }
    for (j=1;j <=n2;j++){
        R[j]=A[q+j];
    }
    L[n1+1]=m;
    R[n2+1]=m;
    i=1,j=1;
    for(k=p;k<=r;k++){
        if(L[i]<=R[j]){
            A[k]=L[i];
            i=i+1;
        }
        else{
            A[k]=R[j];
            j=j+1;
        }
    }
}
int main()
{
    int n,i,r;
    printf("how many number do you want?\n");
    scanf("%d",&n);
    r=n-1;
    int arr[n];
    for (i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Given array is \n");
    printArray(arr,n);

    mergeSort(arr, 0,n);

    printf("\nSorted array is \n");
    printArray(arr,n);
    return 0;
}
