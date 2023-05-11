#include<stdio.h>
#include<stdbool.h>
#define V 4

bool isSafe(bool graph[V][V],int color[]){
    for(int i=0;i<V;i++)
        for(int j=i+1;j<V;j++)
            if(graph[i][j]==true&&color[i]==color[j])
                return false;
    return true;
}

void printSolution(int color[]){
    printf("Solution Exist with the following assigned colors:\n");
    for(int i=0;i<V;i++)
        printf("%d\t",color[i]);
    printf("\n");
}

bool graphColoring(bool graph[][V],int m,int i,int color[]){
    int j;
    if(i==V){
        if(isSafe(graph,color)){
            printSolution(color);
            return true;
        }
        return false;
    }
    for(j=1;j<=m;j++){
        color[i]=j;
        if(graphColoring(graph,m,i+1,color))
            return true;
        color[i]=0;
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
    if(!graphColoring(graph,m,0,color))
        printf("Solution does not exist for %d color",m);
    return 0;
}