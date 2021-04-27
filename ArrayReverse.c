// WAP to print out an array of dynamic values in rverse order.

void main() {
    int i, r, a[10], n;

    // To set range of array:
    printf("\n Enter the range of array: \n");
    scanf("%d", &n);

    // To get values of array:
    printf("\n Enter the elements of the array: \n");
    n-1;
    r = n;
    for (i=0 ; i<=n; i++) {
        scanf("%d", &a[i]);
    }

    // To print the elements of the array:
    printf("\n The elements of the array are: \n");
    for (i=n ; i>=0; i--) {
        r--;
        printf("\n a[%d] = %d \n", r, a[i]);
    }
}