// WAP to perform arithmetic operations (addition, subtraction, multiplication, division, modulo).

void main() {
    int a,b;
    int sum,sub,multiply, mod;
    float div;
    a=10;
    b=20;
    sum=a+b;
    sub=a-b;
    multiply=a*b;
    div=(float)a/b;
    mod=a%b;
    printf("Value of a = %d & b = %d \n", a,b);
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", sub);
    printf("Product = %d\n", multiply);
    printf("Quotient = %f\n", div);
    printf("Modulus = %d", mod);
}
