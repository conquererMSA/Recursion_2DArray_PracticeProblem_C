#include<stdio.h>
void digitSeperation(int n){
    if(n==0) return;
    int spD=n%10;
    // printf("%d ",spD);
    digitSeperation(n/10);
    printf("%d ",spD);
}
int main(){
    int n;
    scanf("%d",&n);
    digitSeperation(n);
    // printf("\n");
    return 0;
}