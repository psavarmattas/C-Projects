// WAP to search an element in an array using Linear Search.

void main() {
    int a[10], i, item, n;

    // To set range of array:
    printf("\n Enter the range of array: \n");
    scanf("%d", &n);

    // To get values of array:
    printf("\n Enter the elements of the array: \n");
    for (i=0 ; i<=n; i++) {
        scanf("%d", &a[i]);
    }

    // Liner Search Algorithm:
    printf("\n Enter item to search: \n");
    scanf("%d", &item); 
    for (i=0; i<=n; i++) {
        if (item==a[i]) {
            printf("\n Item found at location %d", i+1);
            break;
        }
        if (i>n) {
            printf("\n Item does not exist.");
        }
    }
}