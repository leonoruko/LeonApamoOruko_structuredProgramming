#include <stdio.h>

char calculator(int x,int y,char operation){
    int result = 0;
    switch(operation){
        case '+':
            result = x + y;
            printf("The sum of %d and %d is %d\n", x, y, result);
            break;
        case '-':
            result = x - y;
            printf("The difference of %d and %d is %d\n", x, y, result);
            break;
        case '*':
            result = x * y;
            printf("The product of %d and %d is %d\n", x, y, result);
            break;
        case '/':
            if (y == 0) {
                fprintf(stderr, "Error: division by zero\n");
            } else {
                result = x / y;
                printf("The division of %d by %d is %d\n", x, y, result);
            }
            break;
        case '%':
            if (y == 0) {
                fprintf(stderr, "Error: modulus by zero\n");
            } else {
                result = x % y;
                printf("The modulus of %d and %d is %d\n", x, y, result);
            }
            break;
        default:
            fprintf(stderr, "Unknown operation: %c\n", operation);
            break;
    }
    
    return result;
}
int main(){
    int a = 15;
    int b = 3;

    calculator(a, b, '+');
    calculator(a, b, '-');
    calculator(a, b, '*');
    calculator(a, b, '/');
    calculator(a, b, '%');
    return 0;
}