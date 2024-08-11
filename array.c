#include<stdio.h>

int main() {
int i,j;
for(i=1; i<=4; i++)
{
    for(j=1; j<=i; j++)
    {
printf("*");
}
printf("\n");
} 
    return 0;
}

//sum of element of an array 

#include <stdio.h>

int main()
{
    int n, a[60], i, sum = 0;
    printf("enter the size of array");
    scanf("%d", &n);
    printf("enter the element of array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("the sum of an array is %d", sum);
    return 0;
}

