// WAP to search an element in an array using Binary Search.

void main() {
    int a[10], n, item, beg, mid, end, i;

    // To set range of array:
    printf("\n Enter the range of array: \n");
    scanf("%d", &n);

    // To get values of array:
    printf("\n Enter the elements of the array: \n");
    for (i=0 ; i<=n; i++) {
        scanf("%d", &a[i]);
    }

    // Binary Search Algorithm:
    printf("\n Enter item to search: \n");
    scanf("%d", &item); 
    beg = 0;
    end = n-1;
    mid = (beg + end)/2;
    while ((beg<=end)&&(a[mid]!=item)) {
        if (item<a[mid]) {
            end = mid - 1;
        }
        else {
            beg = mid + 1;
        }
        mid = (beg + end)/2;
    }
    if (a[mid]==item) {
        printf("\n Item found at location: %d", mid + 1);
    }
    else {
        printf("\n Item doesn't exist.");
    }
}