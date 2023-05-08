#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

bool isSaf(int chess[4][4], int r, int c)
{
    for (int i = r - 1, j = c; i >= 0; i--)
    {
        if (chess[i][j] == 1)
        {
            return false;
        }
    }

    for (int i = r - 1, j = c-1; i >= 0,j >= 0; i--,j--)
    {
        if (chess[i][j] == 1)
        {
            return false;
        }
    }
    for (int i = r - 1, j = c+1; i >= 0,j < 4; i--,j++)
    {
        if (chess[i][j] == 1)
        {
            return false;
        }
    }

    printf("safe AT %d %d",r,c);
    printf("\n");
    if(r==3)
    {
       exit(0); 
    }
    return true;
}
void nQueen(int chess[4][4],char qsf[200], int row)
{
    if (row == 4)
    {
   
        return;
    }
    for (int col = 0; col < 4; col++)
    {
        if(isSaf(chess,row,col)==true)
        {
        chess[row][col] = 1;
        nQueen(chess,qsf, row + 1);
        printf("Final positions of queen is :\n");
        chess[row][col] = 0;
        
        }
    }
}
void main()
{
    int chess[4][4] = {{0}};
    nQueen(chess,"", 0);




}
