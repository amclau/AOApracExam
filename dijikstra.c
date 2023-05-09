#include <stdio.h>
#include <stdbool.h>
int findminvertex(int distance[6],bool visited[6])
{
  
  int minV=5;
  for (int i = 0; i < 6; i++)
  {
    if(visited[i]==false&&distance[i]<distance[minV])
    {
        minV=i;

    }
  }
  
  printf("%d min vertext is \n",minV);
  return minV;

  
}


// main code here
void djsk(int graph[6][6],int distance[6],int srcVt)
{
bool visited[6]={false};

///iniitalize force vertex to zero(distance array)
distance[srcVt]=0;

// for loop will run no of edge times
for (int i = 0; i < 6; i++)
{
    int minInd=findminvertex(distance,visited);
    visited[minInd]=true;
    for (int j = 0; j < 6; j++)//loop for column (matlab edge che ke nai)
    {       //edge che         visited nathi
        if(graph[minInd][j]!=0&&visited[j]==false)
        {   
            int newdistase=distance[minInd]+graph[minInd][j];
            if(newdistase<distance[j])
            {
                distance[j]=newdistase;
            }

        }
    }
    

    
}


}

void main()
{
    int graph[6][6] = {
        //0  1  2  3  4  5
        { 0, 2, 0, 4, 0, 0 },
        { 0, 0, 3, 1, 0, 0 },
        { 0, 0, 0, 0, 0, 4 },
        { 0, 0, 0, 0, 2, 0 },
        { 0, 0, 0, 0, 0, 1 },
        { 0, 0, 0, 0, 0, 0 }
    };
    // int graph[6][6]={{0, 2, 0, 4, 0, 0},
    //                   {2, 0, 3, 0, 0, 0},
    //                   {0, 3, 0, 0, 0, 4},
    //                   {4, 0, 0, 0, 2, 0},
    //                   {0, 0, 0, 2, 0, 1},
    //                   {0, 0, 4, 0, 1, 0}};
    int distance[6]={0};
    for (int i = 0; i < 6; i++) {
        distance[i] = 1e9; 
    }
    djsk(graph,distance,0);
    for (int j = 0; j < 6; j++) {
            printf("%d ", distance[j]);
   
    }

}
