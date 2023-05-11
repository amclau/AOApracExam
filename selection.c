#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{


int min;
    // ////////insertion sort
    
    

    // ////////Selection
    int arr[6]={78,10,11,12,13,45};
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



    
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }

}