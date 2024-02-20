#include<stdio.h>

int main(void)
{
    int a[] = {0.0, 1.0, 2.0, 3.0, 4.0};
    int i;
    for (i=0;i<5;i++);
    {
        a[i]=i;
    }
    for(i=0;i<5;i++)
    {
    printf("a[%d]=%d\n",i,a[i]);
    }
}
