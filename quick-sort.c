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

int partition(int a[], int low, int high){
    int pivot = a[high]; //or low or mid
    int i = (low - 1);
    for(int j = low; j <= high -1; j++){
        if(a[j] < pivot){
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i+1], &a[high]);
    return (i+1);
}

void qsort(int a[], int low, int high){
    if(low < high){
        int index = partition(a, low, high);
        qsort(a, low, index - 1);
        qsort(a, index + 1, high);
    }
}


int main()
{
    printf("Enter the size of the array: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    readArray(arr, n);
    qsort(arr, 0, n-1);
    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}