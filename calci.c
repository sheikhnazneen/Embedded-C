#include<stdio.h>
int main()
{
    char op;
    double num1,num2,result;

    //Display the menu
    printf("Welcome to the simpke calculator.\n");
    printf("Choose an operation(+,-,*,/):");
    scanf("%c",&op);

    //Taking input number
     printf("Enter the first number:");
     scanf("%lf",&num1);
     printf("Enter the second number:");
     scanf("%lf",&num2);

     //Performing the operation based on user choice
     switch(op){
        case'+':
        result=num1+num2;
        printf("Result: %.2lf\n",result);
        break;
        case'-':
        result=num1-num2;
        printf("Result: %.2lf\n",result);
        break;
        case'*':
        result=num1*num2;
        printf("Result: %.2lf\n",result);
        break;
        case'/':
        if(num2!=0){
        result=num1/num2;
        printf("Result: %.2lf\n",result);
        }else{
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
        default:
        printf("Error:Invalid Operator.\n");
        break;
        
     }
     return 0;

}