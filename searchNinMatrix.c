#include<stdio.h>
int main(){
    int row,col,searchNum;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&searchNum);
    int isExist=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
           if(a[i][j]==searchNum){
            isExist=1;
            break;
           }
        }
    }
    if(isExist){
        printf("will not take number");
    }else{
        printf("will take numer");
    }
    return 0;
}