#include<stdio.h>
#include<conio.h>
int main() {
    int radius ;
    float Pye = 3.14 ;
    float area;
    printf("Enter The Radius of Circle\n");
    scanf("%d" , &radius);
    area = Pye*radius*radius;
    printf("Area of The Circle is\n %f", area );


    return 0;
}