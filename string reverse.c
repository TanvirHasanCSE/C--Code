#include<stdio.h>
#include<conio.h>
int main(){
    char s1[20];
    char s2[20];
    int i=0,j,len=0;
    gets(s1);
    while(s1[i]!='\o'){
        i++;
        len++;

    }
    for(j=0,i=len-1;i>=o;i--,j++){

        s2[j]=s1[i];
        s2[j]='\o';
    }
    printf("Reverse of the string is %s \n",s2);

    return 0;
}
