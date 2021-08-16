// array of function pointers

#include<stdio.h>
#include<conio.h>
int sum(int a,int b);
int subt(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int (*fp[4]) (int a,int b);

int main(void)
{
    int result;
    int num1,num2,op;
    fp[0] = sum;
    fp[1] = subt;
    fp[2] = mul;
    fp[3] = div;

    printf("\n Enter the numbers: ");
    scanf("%d %d",&num1,&num2);

    do{
        printf("\n <0> - Add \n <1> - Subtract \n <2> - Multiply \n <3> - Divide \n <4> - Exit\n");
        printf("\n\n Enter the operation: ");
        scanf("%d",&op);
        result = (*fp[op]) (num1,num2);
        printf("\n Result = %d", result);
        getch();
    }while(op!=4);
    
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

int subt(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}
