//area and circle of Rectangle 
#include<stdio.h>
#include<conio.h>
void main(){
int l , b ,per ,area;
printf("Enter  the lenght of rectangle\n");
scanf("%d" ,&l);
printf("Enter the value of breath\n");
scanf("%d" , &b);
per = 2*(l+b);
area = l*b;
printf("The perimeter of ractanle is %d\n" ,per);
printf("The area of rectangle is %d\n" , area);
getch();
}