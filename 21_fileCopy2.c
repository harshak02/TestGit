#include<stdio.h> 
#include<string.h>

int main(){

    char c;
    FILE *ptr1;
    FILE *ptr2;
    char name1[100],name2[100];

    printf("Enter the source file:\n");
    gets(name1);

    printf("Enter the desitination file:\n");
    gets(name2);

    ptr1 = fopen(name1,"r");
    ptr2 = fopen(name2,"w");

    while(1){

        fflush(stdin);
        c = fgetc(ptr1);

        if(c!=EOF){
            fputc(c,ptr2);
        }
        
        else{
            break;
        }
    }


    fclose(ptr1);
    fclose(ptr2);
    printf("Operation Done");

    return 0;
}
