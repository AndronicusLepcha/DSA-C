#include<stdio.h>
#include<stdlib.h>
void main(){
    int row=8,col=8;
    int **chess;
    chess=(int **)malloc(row*sizeof(int *));

    for(int i=0;i<row;i++){
        chess[i]= (int *)malloc(col*sizeof(int));
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if((i+j)%2==0){
                chess[i][j]=1;
            }
            else{
                chess[i][j]=0;
            }

         }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\t",chess[i][j]);
        }
    }
     free(chess);

}