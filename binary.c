#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int arr[10]={113,15,8,85,1,4,15,8,99,456};
// 1  4  8  8  15  15  85  99  113  456 
int binsearch(int arr[],int min,int max,int key)
{
    if(max<min)
    {
return 0;
    }
    int getindex=(min+max)/2;
    if(arr[getindex]==key)
    {
        return key;
    }
    else if(arr[getindex]>key)
    {
        return binsearch(arr,min,getindex-1,key);
    }
    else{
        return binsearch(arr,getindex+1,max,key);
    }

}
void main()
{

    int key, j,n=10;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    int res=binsearch(arr,0,9,113);
    printf("\n%d is found : ",res);
}