#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#define ARRAYSIZE 50

int main()
{
    int a[ARRAYSIZE];
    int n;

    scanf("%d",&n);
    assert(n>0 && n<=ARRAYSIZE);


    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
         int k=0;
        for(int j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
             {        k=1;

             }

        }
        if(k==0||a[i]==2)
            {
                printf("YES");
                printf(" ");
            }

        if(k==1)
        {
            printf("NO");
            printf(" ");

        }







}
}

