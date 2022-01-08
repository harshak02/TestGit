#include<stdio.h> 
#include<string.h>

int main(){

    char data[100];
    printf("Enter the required data\n");
    gets(data);

    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    int len;
    len = strlen(data);

    char new[len];

    int j =0;

    for(int i =0;i<len;i++){

        if(i<n){
            new[i] = data[n-i-1];
        }

        else{
            new[i] = data[n+j];
            j++;
        }
    }

    new[len] = '\0';

    puts(new);


    return 0;
}
