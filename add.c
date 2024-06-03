# include<stdio.h>

int main(){
    printf("Welcome to Age Calculater \n");
    float a, b;
    printf("Enter your first number:");
    scanf("%f", & a);
    
    printf("%f + ____  \n", a);
    printf("Enter your second number:");
    scanf("%f", & b);

    float sum = a + b;
    printf("Total is %f", sum);
}