#include<stdio.h> 

void pattern(int num){

    for(int i=1;i<=num;i++){
        int imp2 = 0;
        int imp1 = i-1;
        for(int j=1;j<=((2*num)-1);j++){
            
            if(j>=num-(i-1) && j<=num+(i-1)){

                if(j>=num-(i-1)&&j<num){
                    printf("%d",imp1);
                    imp1--;
                }

                else{
                    printf("%d",imp2);
                    imp2++;
                }
            }

            else{
                printf(" ");
            }
        
        }
        printf("\n");
    }
}

int main(){
    int num;

    printf("Enter the number\n");
    scanf("%d",&num);

    pattern(num);

    return 0;
}
