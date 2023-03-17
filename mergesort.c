#include<stdio.h>

void mergesort(int arr[],int l,int m,int r){
    int i,j,k;
    int mid=m;
    while(arr[i]<=mid && arr[j]>=r){
        if(arr[i]<arr[j]){
            arr[k]=arr[i];
            k++;
            i++;
        }
        else{
            arr[k]=arr[j];
            j++;
            k++;
        }
    }
    while(arr[i]<=mid){
        arr[k]=arr[i];
        k++;
        i++;
    }
    while(arr[j]>=r){
        arr[k]=arr[j];
        k++;
        j++;
    }
    for(i=0;i<r;i++){
        arr[i]=arr[k];
    }
}

void merge(int arr[],int l,int r){
    int m;
    if(l<r){
        m=(l+r)/2;
        merge(arr,l,m);
        merge(arr,m+1,r);
        mergesort(arr,l,m,r);
    }
}

void main(){
    int arr[10]={13,4,54,54,76,87,9};
    int n,i;
    n=sizeof(arr)/sizeof(arr[0]);
    //printf("%d",sizeof(arr));
    //printf("%d",n);
    merge(arr,0,n-1);
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}