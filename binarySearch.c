#include<stdio.h>
int main(){
    int o,n;
    printf("How many number do you want?\n");
    scanf("%d",&n);
    int a[n];
    o=binarySearch(a,n);
    if(o>=0){
        printf("your searching number in Index %d\n",o);
    }
    else{
        printf("your searching number is not here");
    }
}
int binarySearch(int a[],int n){
    int i,j,key;
    printf("plese insert sorted number in array:\n");
    for( i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Output of the array:\n");
    for(j=0;j<n;j++){
        printf("%d ",a[j]);
    }
    printf("\n");
    printf("Which number do you searching?\n");
    scanf("%d",&key);
    int start=0,end=n-1,mid=((start+end)/2);
    while(start<=end && a[mid]!=key){
        if(key<a[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=((start+end)/2);
        while(1){
            if(start>end){
                return -1;
            }
            break;
        }
    }
    return mid;
}
