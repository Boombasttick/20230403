#include <stdio.h>
#include <string.h>
#include <assert.h>


void reverse(char* str)
{
    assert(str);
    int len = strlen(str);
    char* left = str;
    char* right = str+len-1;
    while(left<right)
    {
        char tep = *left ;
        *left = *right;
        *right = tep;
        left++;
        right--;
    }
}
int main()
{
    char arr[20]={0};
    //scanf("%s",arr);
    gets(arr);
    reverse(arr);
    printf("%s",arr);
    return 0;
} 