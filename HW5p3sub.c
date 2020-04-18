#include <stdio.h>
#include <time.h>
int main()
{
    clock_t start, end;
    double cpuTime;
    start = clock();
  
    for(int i=0; i<99999; i++){
        subscript();   
    }
    end = clock();
    cpuTime = ((double) (end - start)) / CLOCKS_PER_SEC;
  
    printf("Time taken by using subscript references = %fs\n",cpuTime);
  
    return 0;
}
void subscript()
{ 
    int arr[20][18] = {0}; 
    for(int j=0; j<18 ; j++){
        for(int i=0; i<20; i++){
            arr[i][j]; 
        }
    }
    return;
}