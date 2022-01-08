#include<stdio.h> 

int main(){
    int rows1;
    int rows2;
    int cols1;
    int cols2;

    printf("The number of rows in matrix1 are\n");
    scanf("%d",&rows1);

    printf("The number of coloumns in matrix1 are\n");
    scanf("%d",&cols1);

    printf("The number of rows in matrix2 are\n");
    scanf("%d",&rows2);

    printf("The number of columns in matrix2 are\n");
    scanf("%d",&cols2);

    int mat1[rows1][cols1];
    int mat2[rows2][cols2];
    int prod[rows1][cols2];

    for(int i=0;i<rows1;i++){
        for(int j=0;j<cols1;j++){
            int temp;
            printf("enter the %dth row and %dth coloumn element in matrix1\n",i+1,j+1);
            scanf("%d",&temp);
            mat1[i][j] = temp;

        }
    }

    for(int i=0;i<rows2;i++){
        for(int j=0;j<cols2;j++){
            int temp;
            printf("enter the %dth row and %dth coloumn element in matrix2\n",i+1,j+1);
            scanf("%d",&temp);
            mat2[i][j] = temp;

        }
    }

    for(int i=0;i<rows1;i++){
        for(int j=0;j<cols2;j++){
            prod[i][j] = 0;

        }
    }

    for(int i=0;i<rows1;i++){
        for(int j=0;j<cols2;j++){
            for(int k=0;k<cols1;k++){

                prod[i][j]+=(mat1[i][k]*mat2[k][j]);
            }


        }

    }

    printf("The multiplication of the two matrices are : \n");

    for(int i =0;i<rows1;i++){
        for(int j =0;j<cols2;j++){
            printf("%d ",prod[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
