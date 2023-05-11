#include<stdio.h>
#include<stdbool.h>
#define V 4
bool isSafe(bool graph[4][4],int colour[4])
{
for (int i = 0; i < 4; i++)
{
    for (int j = i+1; j < 4; j++)
    {
        if(graph[i][j]==true&&colour[i]==colour[j])
        {
            return false;
        }
    }
    
}
return true;
}

void returnGraph(int colour[4])
{
    for (int i = 0; i < 4; i++)
    {
        printf("%d\t",colour[i]);
    }
    

}


bool colourgraph(bool graph[4][4],int m,int i,int colour[4])
{int j;
if(i==4)
{
    if(isSafe(graph,colour))
    {
        returnGraph(colour);
        return true;
    }
return false;
}
for (j = 1; j <=m; j++)
{
   colour[i]=j;
    if(colourgraph(graph, m,i+1,colour))
    {
        return true;
    }
   colour[i]=0;
}
return false;
}



int main(){


 bool graph[V][V]={
        { 0, 1, 1, 1 },
		{ 1, 0, 1, 0 },
		{ 1, 1, 0, 1 },
		{ 1, 0, 1, 0 }
    };
    int m=3,color[V],i;
    for(i=0;i<V;i++)
        color[i]=0;
    if(!colourgraph(graph,m,0,color))
        printf("Solution does not exist for %d color",m);
    return 0;
}

