//program to swap two numbers by using third variable
#include<stdio.h>
#include<conio.h>
void  main()
{
  
  int no1,no2,temp;
  clrscr()
  printf("Enter values for no1 & no2 ...: ");
  scanf("%d%d",&no1,&no2);
  printf("Before Swapping\n");
  printf("The value in no1 = %d",no1);
  printf("\nThe value in no2 = %d",no2);
  temp=no1;
  no1=no2;
  no2=temp;
  printf("After swapping");
  printf("The value in no1 = %d",no1);
  printf("The value in no2 = %d",no2);
  getch();
  
  
  
  }
  
