#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  operand_1,operand_2;
    float Result;
    char operation;
    // ask to enter operand_1
    printf("Enter the first Number:\n ");
    scanf("%d",&operand_1);
    // clear the output buffer
    fflush(stdin);
     // ask to enter operation
    printf("Enter the operation :\n");
    scanf("%c",&operation);
     // ask to enter operand_2
    printf("Enter the second Number:\n ");
    scanf("%d",&operand_2);
    switch(operation)
    {
    case '+':
        Result=operand_1+operand_2;
        printf("The Result = %0.2f",Result); // print the result as float
        break;
    case '-':
        Result=operand_1-operand_2;
        printf("The Result = %0.2f",Result);
        break;
    case '*':
        Result=operand_1*operand_2;
        printf("The Result = %0.2f",Result);
        break;
    case '/':
        if (0 !=operand_2)
        {
            Result=operand_1/operand_2;
            printf("The Result = %0.2f",Result);
        }
        else
        {
            printf("Divide by zero is not possible !!\n");
        }
        break;
    default :
        printf("Invalid Operation !!");
    }

    return 0;
}
