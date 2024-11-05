#include <stdio.h>

int main()
{
    int x=15;
    int y=15;
    int z=17;
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;

    //Equal to//
    a=x==y;
    printf("%d\n",a);

    //Not equal to//
    b=x!=z;
    printf("%d\n",b);

    //Greater than//
    c=z>x;
    printf("%d\n",c);

    //Lesser than//
    d=x<z;
    printf("%d\n",d);

    //Greater than or equal to//
    e=z>=x;
    printf("%d\n",e);

    //Lesser than or equal to//
    f=x<=z;
    printf("%d\n",f);



    return 0;
}