//stack
#include <stdio.h>
#define maxsize 10
int top=-1;
int stack[maxsize];
int full(){
    return top==(maxsize-1);
}
int isempty(){
    return top==-1;
}
int push(int ele){
    if(full()){
        printf("Stack overflow\n");
        return 0;
    }
    stack[++top]=ele;
}
int pop(){
    if(isempty()){
        printf("Stack Underflow");
    }
    return stack[top--];
}
int display(){
    for(int i=0;i<=top;i++){
        printf("%d,",stack[i]);
    }
}

int main(){
    push(10);
    push(20);
    push(10);
    pop();
    display();
}
