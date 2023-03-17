#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int fact(int a){
    int sum=1;
    for(int i=1;i<=a;i++){
        sum=sum*i;
    }
    return sum;
}
void main(){
    int j=0;
    char n[]="Qndro";
    for(int i=0,j=strlen(n)-1;i<j;i++,j--){
        char temp=n[i];
        n[i]=n[j];
        n[j]=temp;
    }
    printf("%d",fact(5));
}
