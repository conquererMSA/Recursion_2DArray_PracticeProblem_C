#include<stdio.h>
#include<limits.h>
int findMax(int a[], int len, int i){
    if(i==len) return INT_MIN;
    int max=a[i];
    int ans=findMax(a, len, i+1);
    if(ans>max) max=ans;
    return max;
}
int main(){
    int len;
    scanf("%d",&len);
    int a[len];
    for(int i=0; i<len; i++){
        scanf("%d",&a[i]);
    }
    int maxNum=findMax(a,len,0);
    printf("%d",maxNum);
    return 0;
}