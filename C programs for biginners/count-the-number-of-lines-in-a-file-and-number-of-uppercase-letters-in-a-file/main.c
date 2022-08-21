#include <stdio.h>
#include <ctype.h>
int count,count1;
char ch,ch1;
int main(){
   
    FILE *file=fopen("file.txt","r+");
    if(file==NULL){
        printf("The file does not exist");
        return 0;
    }
    for(ch=getc(file);ch!=EOF;ch=getc(file)){
        if(ch=='\n')
            count++;
    }
    for(ch1=getc(file);ch1!=EOF;ch1=getc(file)){
        if(isupper(ch1))
            count1++;
    }
    printf("Total number of lines in the file is : %d\n\n",count+1);
    printf("Total number of upper case in the file is : %d",count1+2);
    fclose(file);
}