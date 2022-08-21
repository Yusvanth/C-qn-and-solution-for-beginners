#include<stdio.h>
#include<string.h>
void main(){
    char str[20][20],sort[20],temp[20];
    int n,i,j;
    printf("Enter the number of strings : ");
    scanf("%d",&n);
    printf("Enter the strings :\n");
    for(i=0;i<n;i++){
        scanf("%s", str[i]);
    }
    for(i=1; i<n; i++){
        for(j=1; j<n; j++){
            if(strcmp(str[j-1],str[j])>0){
                strcpy(temp,str[j-1]);
                strcpy(str[j-1],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("After sorting :\n"); 
    for(i=0; i<n; i++){
        printf("%s\n",str[i]);
    }
}