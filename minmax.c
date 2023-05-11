#include <stdio.h>

int arr[6]={1,100000,12,5,8,19};
int min=0,max=0;
void minmax(int low,int high)
{int mid,min1,max1;
if(low==high)
{
    min=max=arr[low];
   

}
else
{
    if(low==high-1)
    {
        if(arr[low]>arr[high])
        {
            min=arr[high];
            max=arr[low];
        }
        else{
            min=arr[low];
            max=arr[high];
        }
    }
    else
    {
        mid=(low+high)/2;
        minmax(low,mid);
        max1=max;
        min1=min;
        minmax(mid+1,high);


        
        if(max1>max)
        {
            max=max1;
        }
        if(min1<min)
        {
            min=min1;
        }
    }
}
}
int main()
{
minmax(0,5);

printf("%d\t%d",min,max);

return 0;
}



// #include <stdio.h>

// int arr[6] = {6, 100000, 12, 5, 8, 19};
// int min = 0, max = 0;

// void minmax(int low, int high)
// {
//     int mid, min1, max1;
    
//     if (low == high)
//     {
//         min = max = arr[low];
//     }
//     else
//     {
//         if (low == high - 1)
//         {
//             if (arr[low] > arr[high])
//             {
//                 min = arr[high];
//                 max = arr[low];
//             }
//             else
//             {
//                 min = arr[low];
//                 max = arr[high];
//             }
//         }
//         else
//         {
//             mid = (low + high) / 2;
//             minmax(low, mid);
//             max1 = max;
//             min1 = min;
//             minmax(mid + 1, high);
//             if (max < max1)
//             {
//                 max = max1;
//             }
//             if (min > min1)
//             {
//                 min = min1;
//             }
//         }
//     }
// }

// int main()
// {
//     minmax(0, 5);
//     printf("%d\t%d", min, max);
//     return 0;
// }