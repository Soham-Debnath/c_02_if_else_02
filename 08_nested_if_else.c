// divisible by 5 or 3 but not 15
#include <stdio.h>
int main(){
    int n;
    printf("enter your number= ");
    scanf("%d",&n);
    if(n%3==0 || n%5==0){
        if(n%15==0){
            printf("%d is divisible by both 3 and 5 i.e. divisible by 15",n);
        }
        if(n%3==0){
            printf("%d is divisible by 3 only",n);
        }
        if(n%5==0){
            printf("%d is divisible by 5 only",n);
        }
    }
    else{
        printf("%d is neither divisible by 3 nor 5",n);
    }
    return 0;
}