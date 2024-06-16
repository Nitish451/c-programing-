// #include <stdio.h>

// // Function prototype
// void swap(int *x, int *y);

// int main() {
//     int a, b;

//     // Input two integers from the user
//     printf("Enter two integers: ");
//     scanf("%d %d", &a, &b);

//     // Print the original values
//     printf("Before swapping: a = %d, b = %d\n", a, b);

//     // Call the swap function
//     swap(&b, &a);

//     // Print the swapped values
//     printf("After swapping: a = %d, b = %d\n", a, b);

//     return 0;
// }

// // Function definition
// void swap(int *a, int *b) {
//     int temp;
//     temp = *a;
//     *a= *b;
//     *b = temp;
// }

#include <stdio.h>

// Function prototype
void swap(int x, int y);

int main() {
    int a, b;

    // Input two integers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    

    // Call the swap function
    swap( a,b);

    

    return 0;
}

// Function definition
void swap(int x, int y) {
   
    printf("Before swapping: a = %d, b = %d\n", x, y);
    int temp;
    temp = x;
    x= y;
     y = temp;
      printf("After swapping: a = %d, b = %d\n", x, y);

}

