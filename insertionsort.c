#include<stdio.h>
#include<conio.h>
void main(){
    int arr[10]={19,6,78,45,7,12,90,78};
    int i,temp;
    for(i=0;i<8;i++){
        temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
            }
            arr[j+1]=temp;//storing temp value
        }

for(i=0;i<8;i++){
    printf("\t%d",arr[i]);
}

}