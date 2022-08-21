#include <stdio.h>
 int n;
struct Student{
  char name[100];
  int roll;
  char stream[100];
} Student;
 
int main()
{
  printf("Enter number of students\n");
  scanf("%d",&n);
  struct Student students[n];
  printf("Enter %d Student Details \n \n",n);
  for(int i=0; i<n; i++){
    printf("Student %d:- \n",i+1);

    printf("Name: ");
    scanf("%s",students[i].name);
    
    printf("Roll: ");
    scanf("%d",&students[i].roll);

    printf("Stream: ");
    scanf("%s",students[i].stream);

    printf("\n");
  }
  printf(" All Students Details \n");
  for(int i=0; i<n; i++){
    printf("Name \t: ");
    printf("%s \n",students[i].name);

    printf("Roll \t: ");
    printf("%d \n",students[i].roll);

    printf("Stream \t: ");
    printf("%s \n",students[i].stream);

    printf("\n");
  }

  return 0;
}