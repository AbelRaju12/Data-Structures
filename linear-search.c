#include <stdio.h>
int lsearch(int a[],int n,int item){
    for(int i=0;i<n;i++){
        if(a[i]==item){
            return i;
        }
    }
    return -1;
}
int main(void){   
    int n, item,result;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int a[100];
    printf("\nEnter the elements in the array.\n");
    for(int i=0;i<n;i++){
        // printf("\nelement %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the item to be searched: ");
    scanf("%d",&item);
    result = lsearch(a,n,item);
    if(result==-1){
        printf("\nItem is not in array.");
    }
    else{
        printf("\nItem %d is in position %d in the array.",item, (result+1));
    }
    return 0;
}
