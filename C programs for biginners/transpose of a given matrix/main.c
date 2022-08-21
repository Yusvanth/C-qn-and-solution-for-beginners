#include <stdio.h>
int matrix[100][100];
int transpose[100][100];
int row;
int column;
void input(){
    printf("Enter the number of rows and columns of the matrix:\n");
    scanf("%d %d",&row,&column);
    printf("Enter the elements of the array : \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("Enter the element in %d%d : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
}
void convert(){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            transpose[i][j]=matrix[j][i];
        }
    }
}
void display(){
    printf("\nThe original matrix is :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of the given matrix is:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d",transpose[i][j]);
        }
        printf("\n");
    }
    
}
void main(){
    input();
    convert();
    display();
}


