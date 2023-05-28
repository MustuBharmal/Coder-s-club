#include<stdio.h>
// scope of variable (1st)
int i;
void print(){
    printf("%d\n", i);
}
int main(){
    int num = 10;
    printf("%d\n", num);
    if(num == 10){
        int a = 8;
        printf("%d\n", a);
    }
    for(i = 0; i < 3; i++){
        printf("%d\n", i);
    }
    printf("%d\n", i);
    // printf("%d\n", a);
    print();
}