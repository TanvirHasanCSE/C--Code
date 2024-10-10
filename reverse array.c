#include <stdio.h>

int main() {
    int  n, i;
    char a[10];

    // Input the number of elements
    printf("Enter the number of elements (up to 10): ");
    scanf("%d", &n);

    // Input elements into array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", &a[i]);
    }

    // Print elements of the array in reverse order
    printf("Elements in reverse order: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%s ", a[i]);
    }
    printf("\n");

    return 0;
}

