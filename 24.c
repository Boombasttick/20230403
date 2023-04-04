#include <stdio.h>

int main()
{
    int a=0;
    int n=0;
    int sum=0;
    scanf("%d %d",&a,&n);
    int i=0;
    int ret = 0;
    for (i=0 ; i<n ; i++)
    {
        ret = a + ret*10;
        sum += ret;
    }

    printf("%d",sum);
    return 0;
}