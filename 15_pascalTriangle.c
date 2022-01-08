#include<stdio.h> 

int factorial(int n){

    if(n==1||n==0){
        return 1;
    }

    else{
        return n*factorial(n-1);
    }

}

int nCr (int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(){
    int n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);

    for(int i =0;i<n;i++){

        for(int j=n-i-1;j>0;j--){
            printf(" ");
        }

        for(int k=0;k<=i;k++){
            printf("%d ",nCr(i,k));
        }

        printf("\n");
    }
    return 0;
}
