#include <stdio.h>

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

void merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
  
    // Create temp arrays
    int L[n1], R[n2];
  
    // Copy data to temp arrays
    // L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
  
    // Merge the temp arrays back
    // into arr[l..r]
    // Initial index of first subarray
    i = 0;
  
    // Initial index of second subarray
    j = 0;
  
    // Initial index of merged subarray
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
  
    // Copy the remaining elements
    // of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
  
    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void msort(int a[], int l, int r){
    if(l < r){
        int m = (l+r)/2;
        msort(a, l, m);
        msort(a, m+1, r);
        merge(a, l, m, r);
    }
}

int main()
{
    printf("Enter the size of the array: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    readArray(arr, n);
    msort(arr, 0, n-1);
    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}