//Calculation
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
int  x ,n;
float y;
printf("Enter the value of x\n ");
scanf("%d" ,&x);
printf("Enter the value of n\n");
scanf("%d" ,&n);
y = pow(x+5 ,n) - sqrt((3*x)/(2*n));
printf("The value of this expression is %f" ,y);
getch();
}