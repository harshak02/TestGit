#include<stdio.h> 
#include<stdlib.h>
#include<math.h>

int main(){
    int n;
    int x;

    printf("Enter the n value\n");
    scanf("%d",&n);

    printf("Enter the value of x\n");
    scanf("%d",&x);

    int sum=0;

    if(n<0||x<0){
        printf("Enter the correct values\n");
        exit(0);
    }

    else{

        for(int i=0;i<=n;i++){
            sum+=pow(x,i);
        }
    }

    printf("The sum of the G.P for n = %d and x = %d is %d\n",n,x,sum);

    return 0;
}
