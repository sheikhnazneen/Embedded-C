//C program to print table of numbers.
#include<stdio.h>
int main()
{
    int number,i;
    printf("Enter a number to print its multiplication table:");
    scanf("%d",&number);
    //Print the multipication table
    printf("Multiplication table of %d:\n",number);
    for(i=1;i<=20;i++){
        printf("%d x %d = %d\n",number,i,number*i);
    }
    return 0;
}