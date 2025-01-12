#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if((n%5==0 || n%3==0)&& n%15!=0){
        printf("%d is divided by either 5 or 3 but not 15",n);
    }
    else{
        printf("none of business");
    }
    return 0;
}