#include<stdio.h>
 int main() 
 {
 int a,b,c;
 printf("enter a number = ");
 scanf("%d",&a);
  printf("enter sec number = ");
 scanf("%d",&b);
 if(a>5 && b>6){     //cotrect code 
    c=a+b;
    printf("'%d",c);
 }else{
    printf("hehe");
 }
return 0;
 }



 //Q niven number

#include <stdio.h>

int main()
{
    int rem, temp, n, sum = 0;
    printf("enter the number");
    scanf("%d", &n);
    temp = n ;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }
    if (n % sum == 0)
    {
        printf("niven num");
    }
    else
        printf("not num");

    return 0;
}

