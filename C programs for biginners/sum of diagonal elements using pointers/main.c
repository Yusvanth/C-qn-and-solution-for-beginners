#include <stdio.h>
void main(){
    int sum=0;
    printf("Enter the number of rows and coulumns: \n");
    int n;
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the elements for the array: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter matrix elements in the place %d%d :",i,j);
            scanf("%d",(*(a+i)+j));
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=*(*(a+i)+j);
            }
        }
    }
    printf("Sum of the diagonal elements in the given array is:\n");
    printf("%d",sum);
}
