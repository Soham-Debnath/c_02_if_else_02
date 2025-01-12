#include<stdio.h>
int main (){
    // odd or even
    int n;
    scanf("%d",&n);
    n%2==0? printf("even"):printf("odd");
    // three digit number
    int a;
    scanf("%d",&a);
    a>99&&a<1000? printf("three digit number"):printf("not a three digit number");
    return 0;
}