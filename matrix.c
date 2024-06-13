#include <stdio.h>

int main()
{
   // write a program to print n element in an array 
    int i,j,a[49],n;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter element of array");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("elemebt of an arry are\n ");
    for(i=0; i<n; i++){
        printf("%d\n",a[i]);
    }

    return 0;
}