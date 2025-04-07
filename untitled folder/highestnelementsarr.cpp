//highest n numbers in a arr
#include<iostream>
using namespace std;
int dsc(const void *a,const void *b){
    return(*(int*)b-*(int*)a);
}

int main(){
    int i,n,a,c,b;
    cout<<"Enter Size ";
    cin>>n;
    int arr[n];
    a=0;
    cout<<"Enter elements"<<endl;

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    qsort(arr,n,4,dsc);
   // cout<<arr[0];
    cout<<"How many ele u need : ";
    cin>>b;
    cout<<b<<" Largest elements are"<<endl;
    for(i=0;i<b;i++){
        cout<<arr[i]<<endl;
    }
}