#include<stdio.h>
#include<stdbool.h>
#include<string.h>


bool isSafe(int arr[4][4],int r,int c)
{
for (int i = r-1,j=c; i >=0; i--)
{
   if (arr[i][j]==1)
   {
    return false;
   }
   
}
for (int i = r-1,j=c-1; i >=0,j >=0; i--,j--)
{
   if (arr[i][j]==1)
   {
    return false;
   }
   
}
for (int i = r-1,j=c+1; i >=0,j <4; i--,j++)
{
   if (arr[i][j]==1)
   {
    return false;
   }
   
}
// printf("%d%d\n",r,c);
return true;
}
void nqueen(int chess[4][4],char asf[200],int row)
{
    // if (row == 4)
    // {
    //     printf("%s",asf);
    //     printf("\n");
    //     return;
    // }
    // for (int col = 0; col < 4; col++)
    // {
    //     if(isSafe(chess,row,col)==true)
    //     {
    //     chess[row][col] = 1;
    //     char new_asf[200];
    //     strcpy(new_asf, asf);
    //     char indexc[20];
    //     sprintf(indexc,"%d%d",row,col);
    //     strcat(new_asf, indexc);
    //     strcat(new_asf, "  ");
    //     nqueen(chess,new_asf, row + 1);
    //     // printf("Final positions of queen is :\n");
    //     chess[row][col] = 0;
        
    //     }
    // }
if(row==4)
{
printf("%s",asf);
printf("\n");
return;
}
for (int j = 0; j < 4; j++)
{

  if(isSafe(chess,row,j)==true)
  {
   chess[row][j]=1;
   char new_asf[200];
        strcpy(new_asf, asf);
        char indexc[20];
        sprintf(indexc,"%d%d",row,j);
        strcat(new_asf, indexc);
        strcat(new_asf, "  ");
  nqueen(chess,new_asf,row+1);
   chess[row][j]=0;
}
  }


    
        
  

}
void main()
{
int arr[4][4]={{0}};
nqueen(arr," ",0);

}