#include<stdio.h>
int main()
{   char a[20];
    printf("Hello World");
    printf("are you hungry");
    scanf("%s",&a);
    if( a=="yes")
    {
        printf("eat piza");
        printf("eat burger");
    }
    else
    {
        printf("go to bed");
    }
    return 0;
}