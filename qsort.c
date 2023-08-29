//sorting
#include<stdio.h>
#include<stdlib.h>
int asc(const void *a,const void *b){
    return(*(int *)a - *(int *)b);
}
int main(){
    int p;
    int arr[1000];
   // int size= sizeof(arr)/sizeof(arr[0]);
    printf("enter number of elements ");
    scanf("%d",&p);
    printf("enter values in array ");
    for(int j=0;j<p;j++){
        scanf("%d",&arr[j]);
    }
    
    qsort(arr,p,sizeof(int),asc);
    printf("asc\n");
    for(int i =0;i< p;i++){
        printf("%d ",arr[i]);
    }
}
