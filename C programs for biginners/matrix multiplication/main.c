#include <stdio.h>
void input(int a[100][100],int m,int n){
    int i,j;
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            printf("Enter the element in the place %d%d : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void multiply(int a[100][100],int b[100][100],int c[100][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}
void display(int c[100][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
}
void main(){
    int a[100][100],b[100][100],c[100][100],m,n,r,cl;
    printf("Enter the  number of rows in first matrix\n");
    scanf("%d",&m);
    printf("Enter the number of columns in first matrix\n");
    scanf("%d",&n);
    printf("Enter the number of rows in second matrix\n");
    scanf("%d",&r);
    printf("Enter the number of columns in second matrix\n");
    scanf("%d",&cl);
    if(n==r){
        printf("Enter Matrix-A elements\n");
        input(a,m,n);
        printf("Enter Matrix-b elements\n");
        input(b,m,n);
        multiply(a,b,c,m,n);
        printf("\nResultant Matrix\n");
        display(c,m,n);
    }
    else
       printf("Number of columns in the first matrix is not equal to the number of rows in second matrix.");
}
