#include<iostream>
using namespace std;
int main(){
    double a,b,c,i;
    cout<<"Enter Number ";
    cin>>a;
    b=a;
    c=a;
    b--;
    for(i=0;i<c-1;i++){
        
        
        a=a*b;    
        --b;
      //cout<<a<<endl;
      
    }
    cout<<a<<endl;

}