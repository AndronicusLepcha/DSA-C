#include<stdio.h>
#include<conio.h>
void main(){
    int arr[10]={12,43,6,7,89,9,19,8};
    int i,j,min,temp;
    for(i=0;i<8;i++){
        min=i;
        for(j=i+1;j<8;j++){
            if(arr[j]<arr[min]){
                min=j;
               //  printf(" iteration of j %d\n",j);
            
            }
        }
        if(min!=j){
                temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
        }
        
    }
    for(i=0;i<8;i++){
    printf("\t%d",arr[i]);
}
}