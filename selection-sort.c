#include <stdio.h>

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void printArray(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
}

void readArray(int a[], int n){
    printf("Enter %d elements for the array\n",n);
    for(int i = 0; i< n; ++i){
        scanf("%d",&a[i]);
    }
}

void ssort(int a[], int n){
    int min, i, j;
    for(i = 0; i < n-1; i++){  //since last element will automatically be sorted by j = i+1
        min = i;
        for(j = i+1; j < n; j++){
            if(a[j] < a[min]){
                min=j;
            }
        }
        if(min != i){
            swap(&a[min], &a[i]);
        }
    }
}

int main()
{
    printf("Enter the size of the array: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    readArray(arr, n);
    ssort(arr, n);
    printf("Sorted array:");
    printArray(arr, n);
    return 0;
}