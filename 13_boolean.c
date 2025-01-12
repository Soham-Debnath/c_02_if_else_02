//true=1 and false=2
#include<stdio.h>
int main(){
    int x=10;
    int z=x>15;

    printf("%d\n",z);//false = 0
    printf("%d\n",x<11);//true = 1
    printf("%d\n",x==10);//true = 1
    printf("%d\n",x==9);//false = 0
    printf("%d",x>11);//false = 0
    return 0;
}