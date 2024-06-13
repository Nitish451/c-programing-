#include<stdio.h>
#include<math.h>
void quad(int, int, int);
 int main() {
    int a,b,c;
    printf("enter A,B and C");
    scanf("%d%d%d",&a,&b,&c);
    quad(a,b,c);
    
        return 0;
}
void quad(int a, int b, int c )
{
//     int root;
//     double value1,value2;
//     root=b*b-4*a*c;
// if(root==0||root>0){
//     value1=(-b+(sqrt(root)))/2*a;
//     value2=(-b+(sqrt(root)))/2*a;
//     printf("first value is %lf\n",value1);
//     printf("first value is %lf\n",value2);
// }
// else{
//     printf("root are imaginary");
//}
  int d=a+b+c;
 printf("%d",d);
}