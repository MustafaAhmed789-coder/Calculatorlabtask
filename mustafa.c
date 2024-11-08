#include<stdio.h>
int main(){
  char op;
  int num1,num2,result;
  printf("Enter Equation : ");
  scanf("%d %c %d",&num1, &op, &num2);
  switch(op){
    case 'x':
      result = num1 * num2;
      break;
    case '+':
      result = num1 + num2;
      break;
    case '-': 
      result = num1 - num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
          printf("\nInvalid");
          return 1;
  }
printf("%d %c %d = %d", num1, op, num2,result);
  return 0;
}