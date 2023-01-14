#include <stdio.h>
#include <limits.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int _ = 0; _ < t; _++) {
        int a[4];
        for(int i = 0; i < 4; i++)
            scanf("%d", &a[i]);

        int maxpos = 0, minpos = 0;
        for (int i = 0; i < 4; i++) {
            if (a[i] > a[maxpos]) {
                maxpos = i;
            }
            if (a[i] < a[minpos]) {
                minpos = i;
            }
        }
        if(maxpos + minpos == 3)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
