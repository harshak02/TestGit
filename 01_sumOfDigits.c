#include<stdio.h> 

int main(){

    int num;
    printf("Enter the number \n");
    scanf("%d",&num);
    int k;
    int dig = 0;

    for(int i =1;i;i*=10){

        k = num/i;
        if(k<1){
            break;
        }

        dig++;
    }

    int arr[dig+1];
    int temp = 1;

    for(int i=0;i<dig;i++){

        arr[i] = num%temp;
        temp*=10;

    }

    arr[dig] = num;
    int sum = 0;
    int imp = 1;

    for(int i=0;i<dig;i++){

        int impo = (arr[i+1]-arr[i])/imp;
        imp*=10;
        sum+=impo;
        
    }

    printf("The sum of digits in %d is %d\n",num,sum);

    return 0;
}
