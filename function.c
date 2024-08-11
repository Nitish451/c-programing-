//Q find quadratic root 

#include<stdio.h>
#include<math.h>
void quad(int, int, int, int);
 int main() {
    int a,b,c,z;
    printf("enter A,B and C");
    scanf("%d%d%d",&a,&b,&c);
    quad(a,b,c,z);
    
        return 0;
}
void quad(int x, int y, int z , int d)
{
    int root,a,b,c;
    double value1,value2;
    root=b*b-4*a*c;
if(root==0||root>0){
    value1=(-b+(sqrt(root)))/2*a;
    value2=(-b+(sqrt(root)))/2*a;
    printf("first value is %lf\n",value1);
    printf("first value is %lf\n",value2);
}
else{
    printf("root are imaginary");
}
   d=x+y+z;
 printf("%d",d);
}


//Q find factorial  by using recursion 


#include<stdio.h>

int factorial (int);
 int main() {
int fact,n;
printf("enter any number");
scanf("%d",&n);
fact=factorial(n);
printf("the factorial of %d = %d",n,fact);

   
   return 0;
 }
 int factorial(int a)
 {
   if(a>=1){
return a*factorial( a-1);
   }else
   return 1;
 }

// que-swap the number using call by refrence 

#include<stdio.h>
void swap(int*, int*);
int main(){
   int a,b;
   printf("Before swaping \n");
   printf("A = ");
scanf("%d",&a);
   printf("B = ");
scanf("%d",&b);
swap(&a,&b);
   return 0;
}
void swap(int *a,int *b){
   int temp;
   temp =*a;
   *a=*b;
   *b=temp;
   printf("after swaping \n");
   printf("A = %d\n",*a);
   printf("B = %d",*b);
}