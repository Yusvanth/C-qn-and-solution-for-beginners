#include <ctype.h>
#include <stdio.h>
int count;
char ch;
int main(){
    FILE *file=fopen("file.txt","r+");
    if(file==NULL){
        printf("The file does not exist");
        return 0;
    }
    for(ch=getc(file);ch!=EOF;ch=getc(file)){
        if(isupper(ch))
            count++;
        
    }
    printf("Total number of lines in the file is : %d",count);
    fclose(file);
}