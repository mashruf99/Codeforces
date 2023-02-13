#include <stdio.h>
#include <math.h>

int main() {
int tt;
scanf("%d", &tt);
while (tt--) {
int w, d, h;
scanf("%d%d%d", &w, &d, &h);
int a, b;
scanf("%d%d", &a, &b);
int f, g;
scanf("%d%d", &f, &g);
int ans = b + abs(a - f) + g;
ans = fmin(ans, a + abs(b - g) + f);
ans = fmin(ans, (d - b) + abs(a - f) + (d - g));
ans = fmin(ans, (w - a) + abs(b - g) + (w - f));
printf("%d\n", ans + h);
}
return 0;
}





