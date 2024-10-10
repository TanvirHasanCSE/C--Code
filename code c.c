#include<stdio.h>
#include<conio.h>
int main(){
    int a[5];
    scanf("%d%d",&a[0],&a[1]);
    a[2]=a[0]+a[1];
    printf("%d",a[2]);
    return 0;
}
