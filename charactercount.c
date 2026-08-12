#include <stdio.h>

int main() {
    int n, i, count;

    printf("Enter number of characters: ");
    scanf("%d", &n);

    printf("Enter %d characters:\n", n);

    for (i = 0; i < n; i++) {
        char ch;
        scanf(" %c", &ch);
    }

    printf("Character Count = %d\n", n);

    return 0;
}
