//prime numbers
#include<iostream>
using namespace std;
int main(){
    int i,a,k;
    cout<<"Enter a number "<<endl;
    cin>>a;

    if(a==1 || a==0){
        cout<<a<<" Number is neither Prime nor Composit"<<endl;
        return 0;
    }
    else{
    for(i=2;i<a;i++){
        if(a%i==0){
            k=2;
            }
    }
    if(k==2){
        cout<<a<<" is a Composit number";
    }
    else{
        cout<<a<<" is a Prime number";
    }
    
}
}