// WAP to solve given expression.
// ans = a /  (a+b) - [ d * e / (f*g)]


void main() {
    int a, b, e, d, f, g, ans;
    printf("Enter the value of a & b\n");
    scanf("%d,%d", &a, &b);
    printf("\nEnter the value of e & d\n");
    scanf("%d,%d", &e, &d);
    printf("\nEnter the value of f & g\n");
    scanf("%d,%d", &f, &g);
    ans == a / (a+b) - (d * e / (f*g));
    printf("\n The answer to a /  (a+b) - [ d * e / (f*g)] = %d", ans);
}
