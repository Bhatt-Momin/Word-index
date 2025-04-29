#include<stdio.h>
int main(){
    char word[50];
    printf("Enter the sentence or word\n");
    int position;
    fgets(word,50,stdin);
    printf("\nEnter index\n");
    scanf("%d",&position);
    char i = word[position];
    printf("%c",i);
    return 0;
}