//sorting
#include<stdio.h>
#include<stdlib.h>
int asc(const void *a,const void *b){
    return(*(int *)a - *(int *)b);
}
int dec(const void *a,const void *b){
    return(*(int *)b - *(int *)a);
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
    
    qsort(arr,p,4,asc);
    printf("asc\n");
    for(int i =0;i< p;i++){
        printf("%d ",arr[i]);
    }
    qsort(arr,p,4,dec);
    printf("\n");
    printf("dec\n");
    for(int i =0;i< p;i++){
        printf("%d ",arr[i]);
    }
}
