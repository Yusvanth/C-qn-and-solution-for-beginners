#include <stdio.h>
#define m1 100
#define m2 65
#define m3 90
#define m4 75
#define m5 70
#define AVE ((m1+m2+m3+m4+m5)/5)

void main(){
    printf("\nAverage of the total mark is : %d\n\n",AVE);
    #if AVE>=90
        printf("Your grade iss : S");
    #elif AVE>=80
        printf("Your grade iss : A");
    #elif AVE>=70
        printf("Your grade iss : B"); 
    #elif AVE>=60
        printf("Your grade iss : C");
    #else
        printf("Your grade iss : F");
    #endif    
}
