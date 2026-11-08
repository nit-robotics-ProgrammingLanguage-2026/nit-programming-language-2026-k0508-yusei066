#include <stdio.h>

int main(void) {
    int n;

    // 整数値の入力
    printf("整数を入力してください: ");
    if (scanf("%d", &n) != 1) {
        printf("入力エラーです。\n");
        return 1;
    }

    // 1. 負の数の判定
    if (n < 0) {
        printf("Error\n");
    }
    // 2. 0の判定
    else if (n == 0) {
        printf("No\n");
    }
    // 3. 正の数の判定
    else {
        int matched = 0; // 条件に一つでも当てはまったかを記録するフラグ

        // 3の倍数の判定
        if (n % 3 == 0) {
            printf("Up");
            matched = 1;
        }
        // 5의 倍数の判定
        if (n % 5 == 0) {
            printf("Go");
            matched = 1;
        }
        // 7の倍数の判定
        if (n % 7 == 0) {
            printf("!!");
            matched = 1;
        }

        // どの倍数にも当てはまらなかった場合
        if (!matched) {
            printf("No");
        }

        printf("\n"); // 改行
    }

    return 0;
}
