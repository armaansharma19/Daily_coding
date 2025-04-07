
#include<iostream>
using namespace std;

 bool pal(int x){
    
    if(x<0){
            return false;
        }
    long long a=0;
    int b;
    int c;
    c=x;
    while(x!=0){
    
    b=x%10;
    a=(a*10)+b;
    x=x/10;
    }
    if(a==c){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int f;
    cout<<"Enter value ";
    cin>>f;
if (pal(f)) {
        cout << f << " is a palindrome." << endl;
    } else {
        cout << f << " is not a palindrome." << endl;
    }    return 0;
}