#include <stdio.h>

int main()
{
    int var ,result = 0;
    printf("Please Enter number : ");
    scanf("%d",&var);
    while(var != 0)
    {
        result+=var;
        printf("Enter a new number : ");
        scanf("%d",&var);

    }
    printf("the result is %d\n",result);
}