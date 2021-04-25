// WAP to solve following expressions. r1= (a++) + (a++) & r2= (--a) + (a--).

void main() {
    int a=10,b;
    b=(a++)+(a++);
    printf("Solve r1=(a++)+(a++)\nThe answer is=%d",b);
    b=(--a)+(a--);
    printf("\nSolve r2=(--a)+(a--)\nThe answer is=%d",b);
}