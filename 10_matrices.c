#include<stdio.h> 

int main(){
    int rows;

    printf("The number of rows are\n");
    scanf("%d",&rows);

    int mat1[rows][rows];
    int mat2[rows][rows];
    int add[rows][rows];
    int prod[rows][rows];

    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            int temp;
            printf("enter the %dth row and %dth coloumn element in matrix1\n",i+1,j+1);
            scanf("%d",&temp);
            mat1[i][j] = temp;

        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            int temp;
            printf("enter the %dth row and %dth coloumn element in matrix2\n",i+1,j+1);
            scanf("%d",&temp);
            mat2[i][j] = temp;

        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            add[i][j] = mat1[i][j] + mat2[i][j];

        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            prod[i][j] = 0;

        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            for(int k=0;k<rows;k++){

                prod[i][j]+=(mat1[i][k]*mat2[k][j]);
            }

        }

    }

    printf("The sum of the two matrices are : \n");

    for(int i =0;i<rows;i++){
        for(int j =0;j<rows;j++){
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    printf("The multiplication of the two matrices are : \n");

    for(int i =0;i<rows;i++){
        for(int j =0;j<rows;j++){
            printf("%d ",prod[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
