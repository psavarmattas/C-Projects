// WAP to print out an array of dynamic values.

void main() {
    int r,n,i,a[10];

    // To set range of array:
    printf("\n Enter the range of array: \n");
    scanf("%d", &n);

    // To get values of array:
    printf("\n Enter the elements of the array: \n");
    r = 0;
    for (i=0 ; i<=n; i++) {
        scanf("%d", &a[i]);
    }

    // To print the elements of the array:
    printf("\n The elements of the array are: \n");
    for (i=0 ; i<=n; i++) {
        r++;
        printf("\n a[%d] = %d \n", r, a[i]);
    }
}