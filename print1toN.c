#include<stdio.h>
void print1toN(int initValue, int limit ){
     if(initValue>limit) return;
     printf("%d\n",initValue);
     print1toN(initValue+1, limit);
}
int main(){
    int n;
    scanf("%d",&n);
    print1toN(1, n);
    return 0;
}