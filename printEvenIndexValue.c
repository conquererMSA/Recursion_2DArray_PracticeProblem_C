#include<stdio.h>
void printEvenIndexValue(int arr[], int len, int i){
   if(i<0) return;
   if(i%2==0){
    printf("%d ",arr[i]);
   }
   printEvenIndexValue(arr,len,i-1);
}
int main(){
    int len;
    scanf("%d",&len);
    int arr[len];
    for(int i=0; i<len; i++){
        scanf("%d",&arr[i]);
    }
    printEvenIndexValue(arr,len,len-1);
    return 0;
}
// 1 7 3