#include <stdio.h> // else if r jaigai kokhonoi if lekha jabe na karon, sob if alada but if, else if, else ai 3te connected;
// akta cholleo ar kono ta cholbe na
int main(){
    int n;
    printf("enter your marks: ");
    scanf("%d",&n);
    if(n<=100 && n>=90){
        printf("your marks is %d and your grade A",n);
    }
    else if(n<90 && n>=80){
        printf("your marks is %d and your grade B",n);
    }
    else if(n<80 && n>=70){
        printf("your marks is %d and your grade C",n);
    }
    else if(n<70){
        printf("your marks is %d and your grade D",n);
    }
    else if(n>100 || n<0 ){
        printf("Enter a valid number, %d is not true",n);
    }
    else{
        printf("your marks is %d and you're failed ",n);
    }
    
    return 0;
}