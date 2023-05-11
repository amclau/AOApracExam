#include<stdio.h>
#include<stdio.h>
int a[6]={110,3000,15,6,9,10};
int partition(int a[6],int p,int q)
{
int x=a[p];
int i=p;
for (int j = i+1; j <= q; j++)
{
  if(a[j]<=x)
    {
        i=i+1;
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

}
        int temp=a[i];
        a[i]=a[p];
        a[p]=temp;
return i;
}

void quicksort(int a[],int p,int q)
{
int partitionIndex;
if(p<q)
{
    partitionIndex=partition(a,p,q);
    quicksort(a,p,partitionIndex-1);
    quicksort(a,partitionIndex+1,q);

}
}
void main()
{

    quicksort(a,0,5);
    for (int j = 0; j < 6; j++) {
            printf("%d ", a[j]);
   
    }
    printf("\n");
}