 #include<stdio.h>
 #include<conio.h>
 void main()
 {
  int num1,num2,swap;
  printf("Enter the two numbers");
  scanf("%d%d",&num1,&num2);
  printf("Before swapping\n num1=%d num2=%d",num1,num2);
  swap=num2;
  num2=num1;
  num1=swap;
  printf("After swapping\n num1=%d num2=%d",num1,num2);
 getch();
  }