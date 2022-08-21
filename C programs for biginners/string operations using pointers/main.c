#include <stdio.h> 
int lower(char *s);
int upper(char *s);
int length(char *l);
int copy(char* str1, char* str2);
int lower(char *s)
{
    int i=0; while(s[i]!='\0') {
    if(s[i]>='A' && s[i]<='Z') {
    s[i]=s[i]+32; }
    ++i; }
}
int upper(char *s){
    int i=0;
    char str[100];
    while(s[i]!='\0'){
    if(s[i]>='a' && s[i]<='z'){
    s[i]=s[i]-32;
    }
    ++i;
    }
}
int length(char* s)
{
    int i=0,count=0;
    while(s[i++]!='\0'){
        count+=1;
}
    return count;
}
int copy(char *str1, char *str2){
    int i= 0;
    for (i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
}
int main(){
    char str[100],str1[100],str2[100]; int lengths;
    printf("Enter the string : ");
    scanf("%[^\n]s",str);
    lower(str);
    printf("\nString in lower case : %s",str);
    upper(str);
    printf("\nString in upper case : %s",str);
    lengths = length(str);
    printf("\nThe length of the given string : %d", lengths);
    copy(str1,str2);
    printf("\nEnter the string to copy : ");
    scanf("%s",str1);
    printf("\nThe copied string is : %s", str1);
}