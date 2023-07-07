#include <stdio.h>

long long count_num(int r) {
    
    long long c = 0;
    long long count_5 = 1;
    long long count_9 = 1;

    for (int i = 2; i <= r; i++) {
        long long New = count_5 + count_9;
        count_5 = count_9;
        count_9 = New;

        c = count_5 + count_9;
    }

    return c;
}

int main() {
    int r;

    printf("Enter the integer r: ");
    scanf("%d", &r);

    long long res = count_num(r);

    printf("Number of numbers with %d digits: %lld\n", r, res);

    return 0;
}
