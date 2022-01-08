#include<stdio.h> 
#include<string.h>

void addStr(int n,char name[1000],char sub[100]){
    int lensub;
    lensub = strlen(sub);

    int lenname;
    lenname = strlen(name);

    int imp = lenname+lensub;

    char combo[imp];

    for(int i=0;i<imp;i++){
        if(i<n){
            combo[i] = name[i];
        }

        else if(i>=n && i<n+lensub){
            combo[i] = sub[i-n];
        }

        else{
            combo[i] = name[i-lensub];
        }
    }

    combo[imp] = '\0';

    printf("The string is %s",combo);
}

int main(){

    char name[1000];
    char sub[100];

    printf("Enter the main string\n");
    gets(name);

    printf("Enter the sub string\n");
    gets(sub); 

    int n;
    printf("Enter the position to collocate sub string\n");
    scanf("%d",&n);

    addStr(n,name,sub);

    return 0;
}
