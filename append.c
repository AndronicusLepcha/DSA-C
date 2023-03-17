#include<string.h>
#include<stdio.h>
void main(){
    char s1[10]="andro";
    char s2[10]="lepcha";
    char app[20];
    int j=0;
    for(int i=0;i<20;i++){
        if(i<strlen(s1)){
            app[i]=s1[i];
        }
        else{
            
            app[i]=s2[j];
            j=j+1;
        }
    }
    printf("%s",app);
}