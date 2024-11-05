#include <stdio.h>
int main()
{
    int a=53;
    int b=56;
    int c=98;
    int d=66;
    int e=45;
    int sum;
    float average;

    sum=a+b+c+d+e;
    printf("Sum =%d\n",sum);

    average=(float)sum/5;
    printf("Average=%f\n",average);

    return 0;
}