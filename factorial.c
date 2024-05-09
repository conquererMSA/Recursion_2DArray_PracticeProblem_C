#include<stdio.h>
long long int countFactorial(long long int n){

    if(n==0) return 1;
   long long int ans= countFactorial(n-1);
   return ans*n;

}
int main(){
    long long int n;
    long long int factorial;
    scanf("%lld",&n);
    factorial=countFactorial(n);
    printf("%lld",factorial);
    return 0;
}