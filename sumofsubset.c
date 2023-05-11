#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

void sumofsubset(int arr[], int index, int sos, int tar,char asf[1000])
{
    if (index == 6)
    {
        if (sos == tar)
        {
            printf("%s\n", asf);
        }
        return;
    }
    if(sos>tar)
    {
        return;
    }

    char new_asf[200];
    strcpy(new_asf, asf);
    char indexc[20];
    sprintf(indexc,"%d",arr[index]);
    strcat(new_asf, indexc);
    strcat(new_asf, "  ");



    sumofsubset(arr, index + 1, sos + arr[index], tar,new_asf);
    sumofsubset(arr, index + 1, sos, tar,asf);
}
void main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int target = 10;
    sumofsubset(arr, 0, 0, target," ");
}
