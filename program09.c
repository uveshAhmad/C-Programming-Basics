// Compound Intrest
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
int P , R  ,T;
float CI;
printf("Enter the Principal value \n");
scanf("%d" ,&P);
printf("Enter the Rate \n" );
scanf("%d" ,&R);
printf("Enter the Time \n");
scanf("%d" , &T);
CI = P*pow((1+R/100) , T);
printf("\n Compound intrest is %f \n" , CI);
getch();
}