#include<stdio.h>
int main(){
    int rowcol,row,col;
    scanf("%d",&rowcol);
    row=rowcol, col=rowcol;
    int a[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int primaryDiagonalSum=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==j){
                primaryDiagonalSum=primaryDiagonalSum+a[i][j];
            }
        }
    }

    int secondaryDiagonalSum=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i+j==row-1){
                secondaryDiagonalSum=secondaryDiagonalSum+a[i][j];
            }
        }
    }
    int diff=primaryDiagonalSum-secondaryDiagonalSum;
    if(diff<0){
        diff=diff*-1;
    }
    printf("%d",diff);
    return 0;
}