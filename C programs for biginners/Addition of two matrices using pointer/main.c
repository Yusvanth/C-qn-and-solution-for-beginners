#include <stdio.h>
int r; 
int c;
void display(int (*p2)[c],int r,int c){
    int *k;
    for(int i=0;i<r;i++){
        k=*(p2+i);
        for(int j=0;j<c;j++){
            printf("%d ",*(k+j));
        }
        printf("\n");
    }
}
void main(){
    int a[3][3],b[3][3],sum[3][3];
    int r=3;int c=3;
    int *ptr,*ptr1,*ptr2;
    ptr=&a[0][0];
    ptr1=&b[0][0];
    ptr2=&sum[0][0];
    printf("Enter the elements of first matrix of size 3x3: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the element in the position %d%d : ",i,j);
            scanf("%d",(ptr+i*c+j));
        }
    }
    printf("Enter the elements of first matrix of size 3x3: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the element in the position %d%d : ",i,j);
            scanf("%d",(ptr1+i*c+j));
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            *(ptr2+i*c+j)=*(ptr+i*c+j)+*(ptr1+i*c+j);
        }
    }
    display(sum,r,c);
}
