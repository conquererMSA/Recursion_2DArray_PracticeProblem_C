#include<stdio.h>
int countVowels(char s[],int i){
  if(s[i]=='\0') return 0;
  int vowels=countVowels(s, i+1);
  if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){
    return vowels+1;
  }
  else { 
    return vowels;
  };
}
int main(){
    char s[200];
    fgets(s, 200, stdin);
   int vowels=countVowels(s,0);
   printf("%d",vowels);
   return 0;
}