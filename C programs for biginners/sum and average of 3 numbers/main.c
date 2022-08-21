#include <stdio.h>
int sum;
int ave;
int main()
{
    int a=0,b=0,c=0;
    printf("Emter the three numbers to claculate sum and average : \n");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    ave=sum/3;
    printf("\nThe sum of the given 3 numbers is : %d",sum);
    printf("\nThe average of given three numbers is : %d",ave);
}