#include <stdio.h>
int arr[5];
int ave;
int average(int *arr){
    int a=0;
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=*arr;
        arr++;
    }
    a=sum/5;
    return a;
}
void main(){
    printf("Enter the 5 subjects marks: \n");
    for(int i=0;i<5;i++)
    {
        printf("Enter the mark for subject %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    ave=average(arr);
    printf("The average of the given numbers is: %d",ave);
}
