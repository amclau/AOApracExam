#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{

clock_t start,stop;
clock_t start_b,stop_b;
clock_t start_w,stop_w;

    // ////////insertion sort
    
    
    start=clock();
    // ////////Selection
    int arr[6]={10,11,12,13,45,78};
    int n=6;
    for (int i = 0; i < n; i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                min=j;
            }
        }
       int x=arr[min];
       arr[i]=arr[min];
       arr[min]=x;
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