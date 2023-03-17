#include<stdio.h>
#include<stdlib.h>
#include<omp.h>
float start,end;
int visited[7] = {0,0,0,0,0,0,0};
    int A [7][7] = {
        {0,1,0,1,0,0,0},//0-->1,3
        {1,0,1,0,0,1,1},//1-->0,2,5,3,6
        {0,0,0,1,1,1,0},//2-->1,3,5,4
        {1,1,1,0,1,0,0},//3-->0,1,2,4
        {0,0,1,1,0,0,1},//4-->3,2,6
        {0,1,1,0,0,0,0},//5-->1,2
        {0,0,0,0,1,0,0}//6-->4
    };
 
void DFS(int i){
    printf("visited node : %d\n", i);
    visited[i] = 1;
    #pragma omp parallel
    {
        #pragma omp for
            for (int j = 0; j < 7; j++)
            {
                if(A[i][j]==1 && visited[j]!=1){
                    printf("node to visit: %d\n",j);
                    DFS(j);
                 }
             }
    }
   
}
 
int main(){ 
    // DFS Implementation  
    start=omp_get_wtime();
    DFS(0); 
    end=omp_get_wtime();
    printf("Execution time:%f",end-start);
    return 0;
}
