#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{

clock_t start,stop;
clock_t start_b,stop_b;
clock_t start_w,stop_w;
int min;
    // ////////insertion sort
    
    
    start=clock();
    // ////////Selection
    int arr[6]={10,1001,1882,13,45,78};
    int n=6;
for (int i = 0; i < n; i++)
{
    min=i;
    for (int j = i+1; j < n; j++)
    {
       if(arr[j]<arr[min])
       {
        min=j;
       }
    }
    int temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
    
}


    stop=clock();
    float res=stop-start;
    printf("\nAvg case CPU time =%f units\n",res);
    start_b=clock();
    
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }

}