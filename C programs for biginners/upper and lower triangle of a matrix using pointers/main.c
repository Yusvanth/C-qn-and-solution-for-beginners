#include<stdio.h>
void main(){
    int a[3][3];
    int b[3][3];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the element to be in the position %d%d : ",i,j);
            scanf("%d",(*(a+i)+j));
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            b[i][j]=a[i][j];
        }
    }
    printf("Upper triangular matrix : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(j<i){
                *(*(a+i)+j)=0;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",*(*(a+i)+j));
        }
        printf("\n");
    }
    printf("Lower triangular matrix : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i<j)
                *(*(b+i)+j)=0;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",*(*(b+i)+j));
        }
        printf("\n");
    }
}
