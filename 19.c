#include <stdio.h>
int main()
{
    char *a[]={"work" , "at","alibaba"};
    char **pa = a;
    //pa++;
    char**p=pa++;
    printf("%s\n",*pa);
    printf("%s\n",*p);
    printf("%d\n",sizeof(a)/sizeof(a[0]));
    return 0;
}