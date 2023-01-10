#include <stdio.h>

void solve(){
    int n; scanf("%d", &n);
    for(int i = 1 ,nouse ; i <= n ; ++i){
        scanf("%d", &nouse);
    }
    printf("1 %d\n", n);
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        solve();
    }
    return 0;
}




