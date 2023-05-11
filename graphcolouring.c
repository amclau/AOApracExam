// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

#define V 4

void printSol(int color[V]){
    printf("Solution exists: \n");
    for(int i=0; i<V;i++){
        printf("Vertex %d is colored %d\n", i, color[i]);
    }
}

bool isSafe(bool g[][V], int color[V]){
    for(int i=0; i<V; i++){
        for(int j=i+1; j<V; j++){
            if(g[i][j] && color[i] == color[j]){
                return false;
            }
        }
    }
    return true;
}

bool graphColoring(bool g[V][V], int m, int i, int color[V]){
    if(i==V){
        if(isSafe(g,color)){
            printSol(color);
            return true;
        }
        return false;
    }
    
    for(int j=1; j <= m; j++){
        color[i] = j;
        
        if(graphColoring(g, m, i+1, color)){
            return true;
        }
        
        color[i] = 0;
    }
    return false;
}

int main() {
    bool g[V][V]={
        { 0, 1, 1, 1 },
        { 1, 0, 1, 0 },
        { 1, 1, 0, 1 },
        { 1, 0, 1, 0 },
    };
    int m = 3;
    
    int color[V];
    for(int i=0;i<V;i++)
        color[i] = 0;
    
    if(!graphColoring(g, m, 0, color))
        printf("No solution!!");
    
    
    return 0;
}