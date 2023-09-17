//highest frequency in arr
#include<iostream>
using namespace std;
int main(){
    int i,j,n,a,c,x;
    cout<<"Enter Size ";
    cin>>n;
    int arr[n];
    a=0;
    int max=0;
    int count;
    cout<<"Enter elements"<<endl;

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
            x=arr[i];

        }
    }
    cout<<x<<" is occouring "<<max<<" times.";

}