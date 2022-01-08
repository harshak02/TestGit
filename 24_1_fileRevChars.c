#include<stdio.h>
#include<string.h> 

int main(){
    
    char name[100];
    printf("Enter the name of the file\n");
    gets(name);

    int num;
    printf("Enter the number of the location to reverse the string\n");
    scanf("%d",&num);

    FILE *ptr;
    ptr = fopen(name,"r");

    char data[100];
    char c;
    int i = 0;

    while(1){
        
        c = fgetc(ptr);
        if(c!=EOF){
            data[i] = c;
            i++;
        }

        else{
            break;
        }
    }

    fclose(ptr);

    int len = i;
    char new[len];

    int j =0;

    for(int i =0;i<len;i++){

        if(i<num){
            new[i] = data[num-i-1];
        }

        else{
            new[i] = data[num+j];
            j++;
        }
    }

    new[len] = '\0';

    FILE *ptr1;
    ptr1 = fopen("reverse.txt","w");

    for(int i =0;i<len;i++){
        fprintf(ptr1,"%c",new[i]);
        //fputc(new[i],ptr1);
    }

    printf("Operation Done!");


    return 0;
}
