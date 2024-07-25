#include <stdio.h>

int main() {
    int n;


    printf("Enter the number of elements you want to enter in the array: ");
    scanf("%d", &n);

    while (getchar() != '\n');


    char arr[n];


    printf("Enter %d characters: ", n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);
    }


    int i = 0;
    int j = n - 1;
    while (i < j) {
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");

    return 0;
}
