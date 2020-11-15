#include <stdio.h>
#include <stdlib.h>

int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize){
    int res=0;
    *pointsColSize=pointsSize;
    for(int i=0; i<pointsSize-1; i++){
        int x=abs(*(*(points+i))-*(*(points+i+1)));
        int y=abs(*(*(points+i)+1)-*(*(points+i+1)+1));
        if(x>y)
            res+=x;
        else
            res+=y;
    }
    printf("%d\n", res);
    return res;
}

int main()
{
    printf("Hello world!\n");
    int pointss[3][2] = {{1,1},{3,4},{-1,0}};
    int **points=(int**)malloc(3*sizeof(int*));
    for(int i=0; i<3; i++){
        points[i]=(int*)malloc(2*sizeof(int));
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            *(*(points+i)+j)=pointss[i][j];
        }
    }
    int sizeVal;
    minTimeToVisitAllPoints(points, 3, &sizeVal);
    return 0;
}

