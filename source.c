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


