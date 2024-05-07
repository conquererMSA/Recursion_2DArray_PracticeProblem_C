#include<stdio.h>
int arraySumByRecursion(int arr[], int i, int len){
   if(i==len) return 0;
   int total=0;
   total=total+arr[i];
   int t=arraySumByRecursion(arr, i+1, len);
   return total+t;
}
int main(){
    int len;
    scanf("%d",&len);
    int arr[len];
    for(int i=0; i<len; i++){
        scanf("%d",&arr[i]);
    }
  int total= arraySumByRecursion(arr,0,len);
  printf("%d",total);
   return 0;
}