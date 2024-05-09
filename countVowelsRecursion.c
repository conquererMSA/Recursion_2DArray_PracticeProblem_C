#include<stdio.h>
int countVowels(char s[],int i){
    if(s[i]=='\0') {
        return 0;
        }
    int ans=countVowels(s, i+1);
    //if s[i] is capital, convert into small letter
    if(s[i]>='A'&&s[i]<='Z'){
        s[i]=s[i]+32;
    }
    //count if its a vowels
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        return ans+1;
    }
    else{
        ans;
    }
}
int main(){
    char s[200];
    fgets(s, 200, stdin);
   int vowels=countVowels(s,0);
   printf("%d",vowels);
   return 0;
}