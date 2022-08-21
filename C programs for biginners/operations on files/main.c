#include <stdio.h>
#include <stdlib.h>
int student_id;
char student_FirstName[50];
char student_SurName[50];
char gender[6];
char name_of_college[50];
char opted_course[50];
char home_town[50];
long int mobile_number;
void main(){
    FILE *file=fopen("student.txt","w");
    fprintf(file,"\nSTUDENT FILE :\n\n");
    printf("Enter the student's first name : \n");
    scanf("%s",student_FirstName);
    fprintf(file, "Name of the student : %s ", student_FirstName);
    printf("Enter the student's sur name : \n");
    scanf("%s",student_SurName);
    for(int i=0;student_SurName[i]!='\0';i++){
        fputc(student_SurName[i],file);
    }
    printf("Enter the student id: \n");
    scanf("%d",&student_id);
    fprintf(file,"\nStudent ID : %d",student_id);
    printf("Enter the student's college name: ");
    scanf("%s",name_of_college);
    fprintf(file,"\nName of the college : %s \n",name_of_college);
    printf("Name of the course : ");
    scanf("%s",opted_course);
    fprintf(file,"Name of the course : ");
    fputs(opted_course,file);
    fprintf(file,"\n");
    printf("Gender : ");
    scanf("%s",gender);
    fprintf(file,"Gender: %s\n",gender);
    printf("Enter Student's home town :");
    scanf("%s",home_town);
    fprintf(file,"Student's home town : %s\n",home_town);
     printf("Enter Student's mobile number :");
    scanf("%li",&mobile_number);
    fprintf(file,"Student's mobile number : %li",mobile_number);
    fclose(file);
    file=fopen("student.txt","r");
    char a;
    printf("\n\nContents in the file: \n");
    while((a=fgetc(file))!=EOF) {
      printf("%c",a);
   }
    fclose(file);
}
