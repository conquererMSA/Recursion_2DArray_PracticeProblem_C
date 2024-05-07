#include<stdio.h>
void printNTimes(int init, int ntimes){
     if(init==ntimes) return;
     printf("I Love Recursion\n");
     printNTimes(init+1, ntimes);
}
int main(){
    int n;
    scanf("%d",&n);
    n=n+1;
    printNTimes(1, n);
    return 0;
}