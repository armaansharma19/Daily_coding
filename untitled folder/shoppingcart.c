#include<stdio.h>
struct cart{
    int pr_code;
    char pr_name[500];
    int pr_count;
    char address[500];
    
};
struct cart item1;
void scan(){
    printf("Enter Code ");
    scanf("%d",&item1.pr_code);
    printf("Enter Name  ");
    scanf("%s",&item1.pr_name);
    printf("Enter Count ");
    scanf("%d",&item1.pr_count);
    printf("Enter Address ");
    scanf("%s",&item1.address);

};
void print(){
    printf("\n");
    printf("Current cart info\n");
    printf("\n");
    printf("Product Code ->%d\n",item1.pr_code);
    printf("Product Name ->%s\n",item1.pr_name);
    printf("Product Count ->%d\n",item1.pr_count);
    printf("Address ->%s\n",item1.address);
};


int main(){
    
scan();
print();
}
