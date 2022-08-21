#include <stdio.h>
int a;
int b;
int c;
struct time{
    int hrs;
    int min;
    int sec;
};
struct time Time(struct time starting_Time)
{
    scanf("%d",&starting_Time.hrs);
    scanf("%d",&starting_Time.min);
    scanf("%d",&starting_Time.sec);
    
    return starting_Time;
}
struct time TimE(struct time stoping_Time)
{
    scanf("%d",&stoping_Time.hrs);
    scanf("%d",&stoping_Time.min);
    scanf("%d",&stoping_Time.sec);
    
    return stoping_Time;
}
void time_diff(struct time t1,struct time t2,struct time *diff);
int time_to_seconds(struct time tim1);
void display_structure(struct time starting_Time,struct time stoping_Time,struct time *diff);
void main(){
    struct time starting_Time, stoping_Time, diff;
   printf("Enter the starting hours, minutes and seconds: \n");
   starting_Time=Time(starting_Time);
   printf("Enter the stoping hours, minutes and seconds: \n");
   stoping_Time=TimE(stoping_Time);
   time_diff(starting_Time, stoping_Time, &diff);
   display_structure(starting_Time, stoping_Time, &diff);
}
void time_diff(struct time starting_Time,struct time stoping_Time,struct time *diff){
    a=time_to_seconds(starting_Time);
    b=time_to_seconds(stoping_Time);
    c=0;
    if(a>b){
        c=a-b;
    }
    else if(b>a){
        c=b-a;
    }
    int p1 = c % 60;
    int p2 = c / 60;
    int p3 = p2 % 60;
    p2 = p2 / 60;
    diff->hrs=p2;
    diff->min=p3;
    diff->sec=p1;
}
int time_to_seconds(struct time tim1){
    int p=tim1.hrs*3600;
    int q=tim1.min*60;
    int seconds=p+q+tim1.sec;
    return seconds;
}
void display_structure(struct time starting_Time,struct time stoping_Time,struct time *diff){
    printf("Time Difference: %d:%d:%d - ", starting_Time.hrs,starting_Time.min,starting_Time.sec);
    printf("%d:%d:%d ", stoping_Time.hrs,stoping_Time.min,stoping_Time.sec);
    if(a>b){
        printf("= %d:%d:%d\n", diff->hrs,diff->min,diff->sec);
    }
    else if(b>a){
        printf("= - %d:%d:%d\n", diff->hrs,diff->min,diff->sec);
    }
}

