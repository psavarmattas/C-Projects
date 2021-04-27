// WAP to sort an array using bubble sort.

void main() {
    int array[10], n, c, d, swap;

    // To set range of array:
    printf("\n Enter the range of array: \n");
    scanf("%d", &n);

    // To get values of array:
    printf("\n Enter the elements of the array: \n");
    for (c=0 ; c<=n; c++) {
        scanf("%d \n", &array[c]);
    }

    // To print the elements of the insorted array:
    printf("\n The elements of the unsorted array are: \n");
    for (c=0 ; c<=n; c++) {
        printf("%d \n", array[c]);
    }

    // Bubble Ssort algorithm:
    for (c=0 ; c<=n-1; c++) {
        for (d=0; d<n-c-1; d++) {
            if (array[d] > array[d+1]) {
                swap = array[d+1];
                array[d] = array[d+1];
                array[d+1] = swap;
            }
        }
    }

    // To print the elements of the sorted array:
    printf("\n The elements of the sorted array are: \n");
    for (c=0 ; c<=n; c++) {
        printf("\n %d \n", array[c]);
    }
}