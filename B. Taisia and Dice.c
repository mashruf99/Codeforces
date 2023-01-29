#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, s, r;
        scanf("%d %d %d", &n, &s, &r);
        int v[n];
        v[0] = s - r;
        int a = r / (n - 1);
        int mod = r % (n - 1);
        for (int i = 1; i < n; i++) {
            if (mod > 0) {
                v[i] = a + 1;
                mod--;
            } else {
                v[i] = a;
            }
        }
        qsort(v, n, sizeof(int), compare);
        for (int i = 0; i < n; i++)
            printf("%d ", v[i]);

        printf("\n");
    }

    return 0;
}
