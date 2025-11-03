//DAY1 HW
//first example

#include <stdio.h>

int main() {
    int A, B;
    printf("두 자연수 A와 B를 입력하세요: ");
    scanf("%d %d", &A, &B);

    printf("A + B = %d\n", A + B);
    printf("A - B = %d\n", A - B);
    printf("A * B = %d\n", A * B);
    printf("A / B = %d\n", A / B);   // 몫
    printf("A %% B = %d\n", A % B);  // 나머지 (%% → % 출력용)

    return 0;
}

//2
#include <stdio.h>

int main() {
    char ch;
    printf("문자(알파벳, 숫자 등)를 입력하세요: ");
    scanf_s(" %c", &ch);   
    printf("'%c'의 ASCII 코드 값: %d\n", ch, (int)ch);

    return 0;
}

//3
#include <stdio.h>

int main() {
    int A, B, C;
    printf("세 수 A, B, C를 입력하세요: ");
    scanf("%d %d %d", &A, &B, &C);

    int left1 = (A + B) % C;
    int right1 = ((A % C) + (B % C)) % C;

    int left2 = (A * B) % C;
    int right2 = ((A % C) * (B % C)) % C;

    printf("(A + B) %% C = %d\n", left1);
    printf("((A %% C) + (B %% C)) %% C = %d\n", right1);
    printf("(A * B) %% C = %d\n", left2);
    printf("((A %% C) * (B %% C)) %% C = %d\n", right2);

    return 0;
}


//DAY2 HW

//1
#include <stdio.h>

int main(void) {
    int year;
    scanf_s("%d", &year);

    int is_leap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    printf("%d\n", is_leap);
    return 0;
}

//2
#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= 9; i++) {
        printf("%d * %d = %d\n", N, i, N * i);
    }
    return 0;
}

//3
#include <stdio.h>

int main(void) {
    long long n;
    scanf("%lld", &n);

    if (n == 0) { printf("0\n"); return 0; }
    if (n == 1) { printf("1\n"); return 0; }

    long long a = 0, b = 1;      // F0=0, F1=1
    for (long long i = 2; i <= n; i++) {
        long long c = a + b;     // Fi = Fi-1 + Fi-2
        a = b;
        b = c;
    }
    printf("%lld\n", b);
    return 0;
}

//DAY3 HW1
#include <stdio.h>

int main(void) {
    int x, max = -1, idx = -1;

    for (int i = 1; i <= 9; i++) {
        if (scanf("%d", &x) != 1) return 0;  // 입력 실패 방지
        if (x > max) {
            max = x;
            idx = i;  // 1-based 위치
        }
    }

    printf("%d\n%d\n", max, idx);
    return 0;
}


//DAY3 HW2
#include <stdio.h>

int main(void) {
    int x, max = -1, idx = -1;

    for (int i = 1; i <= 9; i++) {
        if (scanf("%d", &x) != 1) return 0;  // 입력 실패 방지
        if (x > max) {
            max = x;
            idx = i;  // 1-based 위치
        }
    }

    printf("%d\n%d\n", max, idx);
    return 0;
}


//DAY3 HW3
#include <stdio.h>

int main(void) {
    int T;
    if (scanf("%d", &T) != 1) return 0;

    while (T--) {
        int R;
        char S[21];                 // S 길이 ≤ 20
        if (scanf("%d %20s", &R, S) != 2) return 0;

        for (int i = 0; S[i] != '\0'; i++) {
            for (int k = 0; k < R; k++) {
                putchar(S[i]);
            }
        }
        putchar('\n');
    }
    return 0;
}


//DAY3 HW4
#include <stdio.h>

int main(void) {
    int N, M;
    if (scanf("%d %d", &N, &M) != 2) return 0;

    int A[100][100];

    // 행렬 A 입력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // 행렬 B 입력받으며 바로 더하기
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int x;
            scanf("%d", &x);
            A[i][j] += x;
        }
    }

    // 결과 출력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (j) putchar(' ');
            printf("%d", A[i][j]);
        }
        putchar('\n');
    }
    return 0;
}



