//Area and circumfrence of Circle
#include<stdio.h>
#include<conio.h>
void main(){
int  r;
float a , c;
printf("Enter The value of Radius\n");
scanf("%d" ,&r);
a= 3.14*r*r;
c = 2*3.14*r;
printf("The area of the circle is %f\n " ,a);
printf("The circumfrence of circle is %f \n" , c);
getch();
}