// WAP to find out maximum out of two numbers.

void main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    if(num1 > num2) {
        printf("%d is maximum", num1);        
    }

    else if(num2 > num1) {
        printf("%d is maximum", num2);
    }

    else if(num1 == num2) {
        printf("Both are equal");
    }
    else {
        printf("Error: Invalid Input");
    }
}
