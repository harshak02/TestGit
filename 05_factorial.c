#include<stdio.h> 

int fac(int n){
    if(n==1){
        return 1;
    }

    else{
        return fac(n-1)*n;
    }
}

int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    int result;
    result = fac(n);

    printf("The factorial of %d is %d\n",n,result);
    return 0;
}