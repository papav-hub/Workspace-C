#include<cstdio>
#include<stdbool.h>
int n, m;
int arr[10];
bool check[10];
void pick(int cnt) {
    if (cnt == m) {
        for (int i = 0; i < m; i++)
            printf("%d ", arr[i]);
        printf("\n");
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (!check[i]) {
            check[i] = true;
            arr[cnt] = i;
            pick(cnt + 1);
            check[i] = false;
        }
    }
}
int main(void) {
    scanf("%d %d", &n, &m);
    pick(0);
    return 0;
}