// 1. WAP to check A character is a vowel or consonant
#include<stdio.h>

void main(){
    printf("Enter a character: ");
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='e' || ch=='I' || ch=='O' || ch=='U' ){
        printf("%c is vowel",ch);
    }else{
        printf("%c is consonant",ch);
    }
}