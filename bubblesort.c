#include<stdio.h>
#include<conio.h>
void main(){
    int arr[10]={19,45,9,8,0,12,14,56};
    int i,j,k,temp;
    printf("unsorted array");
    for(i=0;i<8;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nsorted array:");
    for(j=0;j<8;j++){
        for(k=j+1;k<8;k++){
            if(arr[j]>arr[k]){
                temp=arr[j];
                arr[j]=arr[k];
                arr[k]=temp;
            }
        }
    }
    printf("\n");
    
    for(i=0;i<8;i++){
        printf("%d\t",arr[i]);
    }

}