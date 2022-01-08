#include<stdio.h> 

int rec(int num){

    int result;
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

    for(int i=1;i<dig+1;i++){

        int impo = (arr[i]-arr[i-1])/imp;
        imp*=10;
        sum+=impo;
        
    }

    if(sum>=10){
        return rec(sum);
    }

    else{
        return sum;
    }
}

int main(){

    int num;
    printf("Enter the number \n");
    scanf("%d",&num);
    
    int result;

    result = rec(num);
    printf("The sum of digits in %d is %d\n",num,result);

    return 0;
}
