#include <stdio.h>

int main()
{
    // int i;
    // char y;
    // printf("enter a number between 1 to 10 =  ");
    // scanf("%d",&i);
    // y = (i>10)? 'a':'b'; // ternary operator
    // printf("%c", y);
    // int n,i,sum=0,fact=1;
    // printf("enter the number");
    // scanf("%d",&n);
    // for(i=1;i<=n; i++){
    //     fact=fact*i;
    // }
    //     sum=sum+fact;
    //     printf("%d",sum);
    int i, j, arr[2][2], r, c;
    printf("enter the number of row");
    scanf("%d", &r);
    printf("enter the number of col");
    scanf("%d", &c);
    printf("enter the element of matrix");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("element of matrix are \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
