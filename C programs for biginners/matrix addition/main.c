#include <stdio.h>
int main()
{
    int a[100][100],b[100][100],row,column,rows,columns,sum[100][100];
    printf("Enter the number of rows for the first matrix\n");
    scanf("%d",&row);
    printf("Enter the number of columns for the first matrix\n");
    scanf("%d",&column);
    printf("Enter the number of rows for the second matrix\n");
    scanf("%d",&rows);
    printf("Enter the number of columns for the second matrix\n");
    scanf("%d",&columns);
    if((row==rows)&&(column==columns)){
        printf("Enter the elements for the first matrix\n");
        for(int i=0;i<row;++i){
            for(int j=0;j<column;++j){
                printf("Enter the element in the place %d%d  ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the elements for the second matrix\n");
        for(int m=0;m<row;++m){
                for(int n=0;n<column;++n){
                        printf("Enter the elemen in the place %d%d  ",m+1,n+1);
                        scanf("%d",&b[m][n]);
                    } 
         
            }
        printf("Sum of the two marices is");
        for(int r=0;r<row;++r){
                for(int s=0;s<column;++s)
                {
                    sum[r][s]=a[r][s]+b[r][s];
                }
            }
    
    for(int x=0;x<row;++x){
        for(int y=0;y<column;++y){
            printf("%d \n",sum[x][y]);
        }
    }
    }
    else
    {
        printf("Number of rows and columns in the first matrix is not equal to the number of rows and columns in the second matrix ");
    }
}

