#include<stdio.h>
void printNto1(int initValue, int limit ){
     if(initValue>limit) return;
     printNto1(initValue+1, limit);
     printf("%d\n",initValue);
    
}
int main(){
    int n;
    scanf("%d",&n);
    printNto1(1, n);
    return 0;
}