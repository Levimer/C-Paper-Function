#include <stdio.h>



// Cut out the largest square until no paper left
void findSquares(int n, int m) {
    int isFirst = 1;
    while (n > 0 && m > 0) {
        int square_size;
        if (n < m) {
            square_size = n;
            m -= n;
        } else {
            square_size = m;
            n -= m;
        }
        if (!isFirst) {
            printf(", ");
        }
        printf("%dx%d", square_size, square_size);
        isFirst = 0;
    }
    printf("\n");
}

int main() {
    int n, m;

    n = 6;
    m = 5;
    printf("Input: N = %d, M = %d\n", n, m);
    printf("Output: ");
    findSquares(n, m);  // Output: 5x5, 1x1, 1x1, 1x1, 1x1, 1x1
    printf("\n");

    n = 1;
    m = 1;
    printf("Input: N = %d, M = %d\n", n, m);
    printf("Output: ");
    findSquares(n, m);  // Output: 1x1
    printf("\n");

    n = 9;
    m = 9;
    printf("Input: N = %d, M = %d\n", n, m);
    printf("Output: ");
    findSquares(n, m);  // Output: 9x9
    printf("\n");

    return 0;
}
