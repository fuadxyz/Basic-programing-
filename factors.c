#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    printf("The factors of %d are: ",n);
    for(i=1;i<=n;i++)
    {
        if(n%i!=0)
        {
            continue;
        }
        printf("%d, ",i);
    }

    return 0;
}
