#include <stdio.h>
#include <stdbool.h>

void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

// void printArray(int a[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
// }

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

int bsearch(int a[],int left, int right,int item){
    while(left<=right){
        int mid=(left+right)/2;
        if(a[mid]==item){
            return mid;
        }
        else if(a[mid]<item){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    bsort(a,n);
    int item, result;
    printf("Enter item to be searched: ");
    scanf("%d",&item);
    result = bsearch(a,0,n-1,item);
    if(result==-1){
        printf("Item is not in array");
    }
    else{
        printf("Item is in array");
    }

    return 0;
}