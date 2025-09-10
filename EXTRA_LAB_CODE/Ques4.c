
#include <stdbool.h>

bool ispoweroftwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int n = 8;

    if (ispoweroftwo(n)) {
        printf("%d is a power of two.\n", n);
    } else {
        printf("%d is not a power of two.\n", n);
    }

    return 0;
}
