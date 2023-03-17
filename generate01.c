#include<stdio.h>
#include<stdlib.h>
void main(){
    int n=100;
    FILE *fp;
    fp=fopen("r.xt","w");
    for(int i=0;i<n;i++){
        //srand(time(NULL));
        int j=i%2;
        fprintf(fp,"%d",j);
    }
}
