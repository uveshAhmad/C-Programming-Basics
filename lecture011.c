#include<stdio.h>
#include<conio.h>
int main() {
  int length , breadth ;
  int area = length*breadth;
  printf("Enter The Length\n");
  scanf("%d" , &length);
  printf("Enter The Breth\n");
  scanf("%d" ,&breadth);
  area = length*breadth;
  printf("The area of rectangle is\n %d" , area );


    return 0;
}