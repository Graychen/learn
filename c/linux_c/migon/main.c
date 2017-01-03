#include <stdio.h>
#include "main.h"
#include "stack.h"
#include "maze.h"

struct point predecessor[MAX_ROW][MAX_ROW]={
    {{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},}
    {{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},}
    {{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},}
    {{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},}
    {{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},}
}

void visit(int row,int col,struct point pre){
    struct point visit_point ={row,col}
    maze[row][col]=pre,
    push(visit_point);
}

int main(void){
    struct point p={0,0};
    maze
}
