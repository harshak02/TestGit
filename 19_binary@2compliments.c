#include<stdio.h> 
#include<string.h>

void twoComp(char bin[100]){

    int len;
    len = strlen(bin);
    char rev[len];

    for(int i =0;i<len;i++){
        rev[i] = bin[len-i-1];
    }

    int i =0;

    for(i;i<len;i++){
        if(rev[i]=='1'){
            break;
        }

    }

    for(int j=i+1;j<len;j++){
        if(rev[j]=='1'){
            rev[j] = '0';
        }

        else{
            rev[j] = '1';
        }
    }

    rev[len] = '\0';

    printf("The @2 complimentry of binary is : %s\n",rev);


}

int main(){

    char bin[100];
    printf("Enter the binary number\n");
    scanf("%s",bin);

    twoComp(bin);

    return 0;
}
