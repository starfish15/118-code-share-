#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    char choice;  // 用于用户选择是否继续

    do {
        // 提示用户输入操作符和两个数字
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator); // 使用 " %c" 跳过前导空格

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        // 根据操作符进行计算
        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
                break;
            case '/':
                // 处理除数为零的情况
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Error: Invalid operator.\n");
                break;
        }

        // 询问用户是否想继续计算
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);  // 读取用户输入选择

    } while (choice == 'y' || choice == 'Y');  // 如果用户输入 'y' 或 'Y'，继续循环

    printf("Calculator exited.\n");
    return 0;
}