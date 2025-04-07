//*max_element
#include<iostream>
using namespace std;
int main(){
    int i,n,a,c;
    cout<<"Enter Size : ";
    cin>>n;
    int arr[n];
    a=0;
    cout<<"Enter elements"<<endl;

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(a<=arr[i]){
            a=arr[i];
        }
    }
    cout<<a;
}