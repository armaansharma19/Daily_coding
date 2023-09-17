//search for element
#include<iostream>
using namespace std;
int main(){
    int n,m,i,j,prod=1,s;
    cout<<"Enter size of 2d arr  "<<endl;
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter Elements : ";

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
        cout<<"Serch: ";
        cin>>s;
         for(i=0;i<m;i++){
        for(j=0;j<n;j++){   
            if(arr[i][j]==s){
                cout<<endl;
                cout<<"Element found at : ";
                cout<<i+1<<","<<j+1;
                return 0;
            }
           /* else{
                cout<<"Element not found at :";
                cout<<i+1<<","<<j+1;
                cout<<endl;
                
            }*/

        }
}

}