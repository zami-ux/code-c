#include<stdio.h>
int main()
{
    char operator;
    double n1, n2;
    printf("What is the operation do you want to do? \n(+, -, *, /):");
    scanf("%c", &operator);
    printf("\tenter two number:");
    scanf("%lf %lf", &n1, &n2);
    switch(operator)
    {
    case '+':
        printf("%.1lf + %.1lf=%.1lf", n1, n2, n1+n2);
        break;
    case '-':
        printf("%.1lf - %.1lf=%.1lf", n1, n2, n1-n2);
        break;
    case '*':
        printf("%.1lf * %.1lf=%.1lf", n1, n2, n1*n2);
        break;
    case '/':
        printf("%.1lf / %.1lf=%.1lf", n1, n2, n1/n2);
        break;
    default :
        printf("Error! Wrong operator");
    }
    return 0;
}
