//BILL/CASH MEMO
#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=0;
    b=0;
    c=0;
    d=0;
    printf("\t\t-------------------------------------");
    printf("\n\t\tenter the prize of first chocolate:");
    scanf("%d",&a);
    printf("\n\t\t-------------------------------------");

    printf("\n\t\t--------------------------------------");
    printf("\n\t\tenter the prize of second chocolate:");
    scanf("%d",&b);
    printf("\n\t\t--------------------------------------");

    printf("\n\t\t--------------------------------------");
    printf("\n\t\tenter the prize of third chocolate:");
    scanf("%d",&c);
    printf("\n\t\t--------------------------------------");

    d=a+b+c;
    printf("\t\tTotal amount is %d",d);
    return 0;
}
