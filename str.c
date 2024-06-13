#include<stdio.h>
#include<string.h>
struct employ{
    char name[50];
    int employ_id;
    int salary;
}e1,e2;
int main(){
strcpy(e1.name, "nitish");
e1.salary=23;
strcpy(e2.name, "nitish");
e2.salary=23;

  printf("Employee 1: Name: %s, ID: %d, Salary: %d\n", e1.name,  e1.salary);
    printf("Employee 2: Name: %s, ID: %d, Salary: %d\n", e2.name,  e2.salary);
}