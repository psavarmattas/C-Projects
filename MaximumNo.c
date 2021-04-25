// WAP to find maximum number using conditional operator.

void main() {
    int a,b,max;
    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    printf("Maximum between %d and %d is %d",a,b,max);
}
