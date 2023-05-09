#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>
void main()
{
char s1[9]="deepgohil";
char s2[8]="depgohil";
int l1=4;
int l2=3;
int vscount=0;
int hscount=0;
int res[9][10] = {{0}};
for (int r = 1; r < 9; r++)
{
    
    char vs=s2[r-1];
    for (int c = 1; c < 10; c++)
    {
        
        char hs=s1[c-1];
            if(vs==hs)
            {   
                printf("%c == %c\n",vs,hs);
                res[r][c]=res[r-1][c-1]+1;

            }
            else{
                if(res[r][c-1]>res[r-1][c])
                {
                 res[r][c]= res[r][c-1];  
                }
                else{
                    res[r][c]=res[r-1][c];
                }
            }
          
    }
 
    
}

for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }


}