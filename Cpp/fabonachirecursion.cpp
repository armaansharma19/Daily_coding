#include<iostream>
using namespace std;
int fab(int a,int b,int max){
    int c=a+b;
    if(a>max){
        return 0;
    }
    
    cout<<a<<endl;
    a=b;
    b=c;
    fab(a,b,max);
    return 0;

}
int main(){
    int x;
    cout<<"Print upto--> ";
    cin>>x;
    fab(0,1,x);
}
