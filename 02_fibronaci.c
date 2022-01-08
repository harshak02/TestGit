#include<stdio.h> 

int fib(int n){
    int result;
    if(n==1){
        result = 0;
    }

    else if(n==2){
        result = 1;
    }

    else{
        result = fib(n-1) + fib(n-2);
    }

    return result;

}

int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++){
        int result;
        result = fib(i);
        printf("%d\n",result);

    }

    return 0;
}

