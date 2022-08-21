#include <stdlib.h>
#include <stdio.h>
void main(){
    int *arr;
    int n;
    int sum;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++)
        scanf("%d",(arr+i));
    sum=0;
    for(int i=0;i<n;i++)
		sum+=*(arr+i);
	printf("Sum of array elements= %d",sum);
}
