#include <stdio.h>
int main()
{
    int i=0;
    for (i=0;i<=100000;i++)
    {
        int n=1;
        int tep=i;
        while (tep /= 10)
        {
            n++;
        }
        int tem=i;
        int sum=0;
        while (tem)
        {
            sum = sum + pow(tem%10 , n);
            tem /= 10;
        }   
         if (i==sum)
        {
            printf("%d\n",sum);
        }
    }
    return 0;
}