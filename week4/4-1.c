#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a+b+c>=80 && a+b+c<=100)
    {
        printf("A");
    }
    else if (a+b+c>=75 && a+b+c<=79)
    {
        printf("B+");
    }
    else if (a+b+c>=70 && a+b+c<=74)
    {
        printf("B");
    }
    else if (a+b+c>=65 && a+b+c<=69)
    {
        printf("C+");
    }
    else if (a+b+c>=60 && a+b+c<=64)
    {
        printf("C");
    }
    else if (a+b+c>=55 && a+b+c<=59)
    {
        printf("D+");
    }
    else if (a+b+c>=50 && a+b+c<=54)
    {
        printf("D");
    }
    else
    {
        printf("F");
<<<<<<< HEAD
    } 
=======
    }
>>>>>>> 6d9bb127ae58f87ecbf45e2425bc3b16737bc1e3
    return 0;
}
