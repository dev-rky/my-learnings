# include<stdio.h>
#include<math.h>
/// this code dislpay data types
/*
this is 
a 
multiline comment

*/
int main(){

  int a,b;
  int get_operator_input;

printf("################################\n## A Basic Calculator Using C ##\n################################\n1 for Additation\n2 for subsctration\n3 for multiplication\n4 for division\n-->>");

  scanf("%d",&get_operator_input);

switch (get_operator_input)
{
case 1:
  printf("Great you have choosen Additation\n\nFirst Number : ");
  scanf("%d", &a);
  printf("Second Number : ");
  scanf("%d", &b);
  printf("The answer is = %d", a + b);
  break;
case 2:
  printf("Great you have choosen Substraction\n\nFirst Number : ");
  scanf("%d", &a);
  printf("Second Number : ");
  scanf("%d", &b);
  printf("The answer is = %d", a - b);
  break;
case 3:
  printf("Great you have choosen Multiplication\n\nFirst Number : ");
  scanf("%d", &a);
  printf("Second Number : ");
  scanf("%d", &b);
  printf("The answer is = %d", a * b);
  break;
case 4:
  printf("Great you have choosen Division\n\nFirst Number : ");
  scanf("%d", &a);
  printf("Second Number : ");
  scanf("%d", &b);
  printf("The answer is = %d", a / b);
  break;

default:
 printf("################################\n###      INVALID INPUT!     ####\n###     Run Code Again:)    ####\n################################");
break;
}

return 0;
}