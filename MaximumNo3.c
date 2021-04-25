// WAP to find maximum out of three number using conditional operator.

void main() {
    int a,b,c,max;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    max = a > b ? ( a > c ? a : c ) : ( b > c ? b : c);
    printf("\nThe biggest number between %d, %d & %d is: %d",a,b,c,max);
}