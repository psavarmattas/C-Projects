// WAP to sort an array using selection sort.

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void main() {
    int a[10], n, min, i, j;

    // To set range of array:
    printf("\n Enter the range of array: \n");
    scanf("%d", &n);

    // To get values of array:
    printf("\n Enter the elements of the array: \n");
    for (i=0 ; i<=n; i++) {
        scanf("%d", &a[i]);
    }

    // Selection Sort Algorithm:
    for (i=0; i<n; i++) {
        min = i;
        for (j=i+1; j<n; j++) {
            min = j;
        }
        if (min != i) {
            swap(&a[i], &a[min]);
        }
    }

    // Sorted array print:
    printf("\nThe sorted array is: \n");
    for (i=0 ; i<=n; i++) {
        printf("%d \n", &a[i]);
    }
}