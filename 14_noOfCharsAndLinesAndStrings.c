#include<stdio.h> 
#include<string.h> 

int main(){
    char text[5000];

    printf("Enter the text\n");
    gets(text);
    printf("Helloworld\n");

    int num;
    int letters = 0;
    int words = 0;
    int lines = 0;
    num = strlen(text);

    for(int i=0;i<num;i++){
        if(text[i]==' '){
            words++;
        }
    }

    for(int i=0;i<num;i++){
        if(text[i]=='\n'){
            lines++;
        }
    }

    for(int i=0;i<num;i++){
        if(text[i]!='\n' && text[i]!=' '){
            letters++;
        }
    }

    printf("The number of the letters in text are %d\n",letters);
    printf("The number of the words in text are %d\n",words+1);
    printf("The number of the lines in text are %d\n",lines+1);

    return 0;
}
