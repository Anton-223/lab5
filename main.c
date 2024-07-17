#include <stdio.h>

#define MOD 12345

int main() {
    int n;
    
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Довжина послідовності має бути більше 1\n");
        return 1;
    }
    
    int dp[n + 1];
    
    dp[0] = 1; // Порожня послідовність
    dp[1] = 2; // "0", "1"
    dp[2] = 4; // "00", "01", "10", "11"
    
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % MOD;
    }
    
    printf("Кількість шуканих послідовностей довжиною %d: %d\n", n, dp[n]);
    
    return 0;
}
