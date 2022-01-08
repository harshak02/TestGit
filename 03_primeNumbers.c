#include<stdio.h>

int prime(int n){

    int result;
    
    if(n==2){
        result = 1;
    }
    
    else{
       for(int i =2;i<n;i++){
        if(n%i==0){
            result = 0;
            break;
        }

        else{
            result = 1;
        }
    } 
    }

    return result;
}

int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);

    int result;

    for(int i =0;i<n;i++){

        result = prime(i);
        if(result==1){
            printf("%d,",i);
        }

    }

    return 0;
}
