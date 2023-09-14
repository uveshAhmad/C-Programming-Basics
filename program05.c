// area of Triangle 
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
int  a, b , c , s;
 float area;
printf("Enter the length of first side\n");
scanf("%d" ,&a);
printf("Enter the length of  second side \n ");
scanf("%d" ,&b);
printf("Enter the lenght of third side \n");
scanf("%d",&c);
s = (a +b + c)/2;
area = sqrt((s*(s-a)*(s-b)*(s-c)));
printf("The are of Triangle is %f" ,area);
getch();
}