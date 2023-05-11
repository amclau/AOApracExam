#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int arr[9]={10,20,416,4,6,100,60,50,1};
int pivot(int arr[9],int p,int q)
{
    int x=arr[p];
    int i=p;
    for (int j = i+1; j <=q; j++)
    {
        if(arr[j]<=x)
        {
            i=i+1;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i];
            arr[i]=arr[p];
            arr[p]=temp; 

            return i;

}
void quicksort(int arr[9],int p,int q)
{int pivotindex;
if(p<q)
{
   pivotindex=pivot(arr,p,q);
    quicksort(arr,p,pivotindex-1);
    quicksort(arr,pivotindex+1,q);

}
}
void binarysort(int arr[],int low,int high,int data)
{
    int mid;
   if(low>high)
   {
return 0;
   } 
   mid=(low+high)/2;
   if(arr[mid]==data)
   {
    printf("data found : %d",data);
    return ;

   }
   else if (arr[mid]<data)
   {
    binarysort(arr,mid+1,high,data);
   }
   else
{
    binarysort(arr,low,mid-1,data);
}   
   
}
void main()
{
    quicksort(arr,0,8);
    for (int i = 0; i < 9; i++)
    {
        printf("%d\t",arr[i]);
    }
    binarysort(arr,0,8,1);
    
}