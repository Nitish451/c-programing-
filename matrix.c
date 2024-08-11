 // write a program to print n element in an array 
#include <stdio.h>

int main()
{
  
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

//multiplication of two matrices in 2D

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, k, m, n, p, q;
    int a[20][30], b[20][30], c[20][30] ;

    // Input the dimensions of matrix A
    printf("Enter the rows and columns of matrix A: ");
    scanf("%d%d", &m, &n);

    // Input the dimensions of matrix B
    printf("Enter the rows and columns of matrix B: ");
    scanf("%d%d", &p, &q);

    // Check if matrices can be multiplied
    if (n != p) {
        printf("Matrices cannot be multiplied, column of A must be equal to row of B.\n");
        return 0;
    }

    // Input elements of matrix A
    printf("Enter the elements of matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of matrix B
    printf("Enter the elements of matrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Display matrix A
    printf("Matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Display matrix B
    printf("Matrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    // Matrix multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display the result matrix C
    printf("Multiplication of matrix A and B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// wap to take two dimensional array and show in mattrix form
 #include <stdio.h>

int main()
{
    int a[50][50], row, col, i, j;
    printf("enter the number of row \n");
    scanf("%d", &row);
    printf("enter the number of col\n");
    scanf("%d", &col);
    printf("enter the element of matrix\n");
    for (i = 0; i < row; i++)
    {  for (j = 0; j < col; j++){
      
            scanf("%d", &a[i][j]);
    }
}

printf("the matrix will be \n");
for (i = 0; i < row; i++)
{
    for (j = 0; j < col; j++)
    {
        printf("%d\t", a[i][j]);
        
    }
    printf("\n");
}
return 0;
}