#include <stdio.h>
int n;
struct student
{
    char name[50];
    int roll;
    long dob;
    float mark1;
    float mark2;
    float mark3;
    float mark4;
    float mark5;
};
void main()
{
    struct student s[100];
    printf("Enter total of students:\n");
    scanf("%d",&n);
    int m;
    for(int i=0;i<n;i++)
    {
        m=i+1;
        printf("Enter information of student %d:\n",m);
        printf("Enter name:\n");
        scanf("%s", s[i].name);
        printf("Enter roll number: \n");
        scanf("%d", &s[i].roll);
        printf("Enter date of birth in the format DDMMYYYY: \n");
        scanf("%ld", &s[i].dob);
        printf("Enter first subject mark: \n");
        scanf("%f", & s[i].mark1);
        printf("Enter second subject mark: \n");
        scanf("%f", & s[i].mark2);
        printf("Enter third subject mark: \n");
        scanf("%f", &s[i].mark3);
        printf("Enter forth subject mark: \n");
        scanf("%f", &s[i].mark4);
        printf("Enter fifth subject mark: \n");
        scanf("%f", &s[i].mark5);
    }
    printf("Displaying Information:\n");
    for(int i=0;i<n;i++)
    {
        m=i+1;
        printf("\n%d student's info\n",m);
        printf("Name:%s\n",s[i].name);
        printf("Roll number: %d\n",s[i].roll);
        printf("DOB: %ld\n\n",s[i].dob);
        printf("first subject mark: %.1f\n\n",s[i].mark1);
        printf("second subject mark: %.1f\n\n",s[i].mark2);
        printf("third subject mark: %.1f\n\n",s[i].mark3);
        printf("forth subject mark: %.1f\n\n",s[i].mark4);
        printf("fifth subject mark: %.1f\n\n",s[i].mark5);
    }
}