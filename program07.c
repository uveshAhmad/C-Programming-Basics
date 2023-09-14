//Swaping of two value using third variable
#include<stdio.h>
#include<conio.h>
void main(){
int a , b , temp;
printf("Enter the value of a=");
scanf("%d" ,&a);
printf("Enter the value of b=");
scanf("%d" ,&b);
temp=a;
a=b;
b=temp;
printf("after swapping the value of\n  a =%d and  b=%d", a ,b);
getch();
}