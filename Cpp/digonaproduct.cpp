//2d array product of diagonal
#include<iostream>
using namespace std;
int main(){
    int n,m,i,j,prod=1;
    cout<<"Enter size of 2d array "<<endl;
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter elements";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
}
        cout<<endl;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){   
            if(i==j){
                prod=arr[i][j]*prod;
            }
            //    cout<<prod;
                cout<<endl;


    }    
}
  //  cout<<endl;

    cout<<"Product of digonal is "<<prod;
}
