#include<stdio.h>

int gcd(int num1,int num2){
    int result;

    if(num1<num2){

        for(int i = num1;i;i--){

            if(num1%i==0){
                if(num2%i==0){     
                    result = i;
                    break;
                    }
            }
        }
    }

    else{

        for(int i = num2;i;i--){

            if(num2%i==0){
                if(num1%i==0){     
                    result = i;
                    break;

                    
                }
            }
        }  
    }

    return result;
}

int main(){
    int num1;
    int num2;

    printf("Enter the number \n");
    scanf("%d",&num1);

    printf("Enter the number \n");
    scanf("%d",&num2);

    int result;
    result = gcd(num1,num2);

    printf("the gcd of two numbers %d and %d is %d\n",num1,num2,result);

    return 0;
}
