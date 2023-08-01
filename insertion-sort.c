# include <stdio.h>

void printArray(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
}

void readArray(int a[], int n){
    printf("Enter %d elements for the array\n",n);
    for(int i = 0; i < n; ++i){
        scanf("%d",&a[i]);
    }
}

void isort(int a[], int n){
    int key,j;
    for(int i = 1; i < n; i++){
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j = j - 1;
        }
        a[j+1]=key;
    }
}
int main()
{
    printf("Enter the size of the array: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    readArray(arr, n);
    isort(arr, n);
    printf("Sorted array:");
    printArray(arr, n);
    return 0;
}