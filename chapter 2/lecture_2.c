
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main() {
    int a , b ,c;

    printf("enter the first number\n");
    scanf("%d" , &a);
    printf("Enter the second Number\n");
    scanf("%d" ,&b);
    c = pow(a,b);
    printf("The Answer is %d\n" , c);
    return 0;
}