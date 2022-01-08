#include<stdio.h> 
#include<string.h>

int main(){

    char name[100];
    char cont[1000];
    char c;

    printf("Enter the name of the file\n");
    gets(name);

    FILE *ptr;
    ptr = fopen(name,"r");

    int i =0;

    while(1){

        fflush(stdin);
        c = fgetc(ptr);

        if(c!=EOF){
            cont[i] = c;
            i++;
        }

        else{
            break;
        }

    }

    cont[i] = '\0';

    printf("The data in the file is \n\n");
    printf("%s",cont);

    return 0;
}
