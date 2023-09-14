//Simple Intrest
#include<stdio.h>
#include<conio.h>
void main(){
int P , R , T;
float SI;
printf("Enter the Principal Value\n ");
scanf("%d" ,&P);
printf("Enter the rate\n");
scanf("%d" ,&R);
printf("Enter the Time\n");
scanf("%d" ,&T);
SI=(P*R*T)/100;
printf("Simple Intrest is %f\n" ,SI);
getch();
}