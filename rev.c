// #include <stdio.h>
// #include<math.h>
// int main()
// {

//     int a, b, c;
//     int root =b * 2 - 4 * a * c ;
//     int value1, value2;
//     printf("enter the number ");
//     scanf("%d%d%d", &a, &b, &c);
//     if (root > 0 ||root==0){
//         value1 =-b+(sqrt(root))/2*a;
//         value2 =-b+(sqrt(root))/2*a;
//         printf("%d\t",value1);
//         printf("%d",value2);

//     }else
//     printf("imaginary");
//         return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n,i, sum=0, fact=1;
//     printf("enter the number");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++){
//          fact=fact*i;
//         sum=sum+fact;
//     }
//         printf("%d",sum);
//         return 0;

// }


//Q niven number

// #include <stdio.h>

// int main()
// {
//     int rem, temp, n, sum = 0;
//     printf("enter the number");
//     scanf("%d", &n);
//     temp = n ;
//     while (temp != 0)
//     {
//         rem = temp % 10;
//         sum = sum + rem;
//         temp = temp / 10;
//     }
//     if (n % sum == 0)
//     {
//         printf("niven num");
//     }
//     else
//         printf("not num");

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i, a[30], n, b[30],j;
//     printf("enter the size of elemet ");
//     scanf("%d", &n);
//     printf("enetr the element od array\n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("element of an array A is\n ");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\n", a[i]);
//     }
//     for (j = 0; j < n; j++)
//     {
//         b[j] = a[j];
//     }
//     printf("element of an array B is\n ");
//     for (j = 0; j < n; j++)
//     {
//         printf("%d\n", b[j]);
//     }
//         return 0;
//     }

// #include <stdio.h>

// int main()
// {
//     int n, a[60], i, sum = 0;
//     printf("enter the size of array");
//     scanf("%d", &n);
//     printf("enter the element of array");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i < n; i++)
//     {
//         sum = sum + a[i];
//     }
//     printf("the sum of an array is %d", sum);
//     return 0;
// }

// wap to take two dimensional array and show in mattrix form
// #include <stdio.h>

// int main()
// {
//     int a[50][50], row, col, i, j;
//     printf("enter the number of row \n");
//     scanf("%d", &row);
//     printf("enter the number of col\n");
//     scanf("%d", &col);
//     printf("enter the element of matrix\n");
//     for (i = 0; i < row; i++)
//     {  for (j = 0; j < col; j++){
      
//             scanf("%d", &a[i][j]);
//     }
// }

// printf("the matrix will be \n");
// for (i = 0; i < row; i++)
// {
//     for (j = 0; j < col; j++)
//     {
//         printf("%d\t", a[i][j]);
        
//     }
//     printf("\n");
// }
// return 0;
// }

// multiplication of two matrix in 2d
#include <stdio.h>

int main()
{
    
    
    return 0;
}