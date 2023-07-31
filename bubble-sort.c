#include <stdio.h>
#include <stdbool.h>

void swap(int* x, int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

int bsort(int a[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
void readArray(int a[],int n){
    printf("Enter %d elements for the array\n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
}

int main()
{
    printf("Enter the size of the array: ");
    int n;
    scanf("%d",&n);
    int arr[n];
    readArray(arr,n);
    bsort(arr, n);
    printf("Sorted array:");
    printArray(arr, n);
    return 0;
}