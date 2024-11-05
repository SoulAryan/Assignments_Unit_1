#include <stdio.h>
int main()
{
    int i;
    printf("Enter age=");
    scanf("%d",&i);
    if(i>=18){
        printf("Eligible to vote");
    }
    else{
        printf("Not eligible to vote");
    }


    return 0;
}