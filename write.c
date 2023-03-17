#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *fp;
    fp=fopen("a.txt","w");
    char ch;
    while(ch != 'W'){
        scanf("%c",&ch);
        fprintf(fp,"%c",ch);
    }
}