#include <stdio.h>
int main()
{
    int i=3;
    int j=15;
    int s;
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;


    //Addition//
    s=i+j;
    printf("Addition=%d\n",s);

    //Multiplication//
    a=i*j;
    printf("Multiplication=%d\n",a);

    //Subtraction//
    b=j-i;
    printf("Subtraction=%d\n",b);

    //Division//
    c=j/i;
    printf("Division=%d\n",c);

    //Modulus//
    d=j%i;
    printf("Modulus=%d\n",d);

    //Increment//
    e=++j;
    printf("Increment=%d\n",e);

    //Decrement//
    f=--i;
    printf("Decrement=%d\n",f);


    return 0;
}