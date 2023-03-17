#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *fp;
    char str[100];
    fp=fopen("a.txt","r");
    if(fp==NULL){
        printf("File not found");
    }
    else{
        while(!feof(fp)){
            fscanf(fp, " %s",&str);
         }
    }
    
    printf("%s",str);
}
