#include<iostream>
using namespace std;
int a,b,c;
void check(int a,int b,int c){
    if(a+b<=c || b+c<=a || a+c<=b){
        cout<<"This is not a triangle.";
      //  return 0;
    }
    else if(a==b && b==c && c==a){
        cout<<"Triangle is an Equilateral Triangle.";
    }
    else if(a==b || b==c || c==a){
        cout<<"This triangle is an Isosceles Triangle.";
    }
    else if (a!=b && b!=c && c!=a){
        cout<<"This triangle is an Scalene Triangle."<<endl;
        if((a*a)==(b*b)+(c*c)||(a*a)+(b*b)==(c*c)||(b*b)==(a*a)+(c*c)){
        cout<<"Also a Right Angled Triangle.";
        }
    }
}
void scan(){
    cout<<"Enter First Side : ";
    cin>>a;
    cout<<"Enter Second Side : ";
    cin>>b;
    cout<<"Enter Third Side : "; 
    cin>>c;
    cout<<"\n";
}
int main(){
    scan();
    check(a,b,c);
}
