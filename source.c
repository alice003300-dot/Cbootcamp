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

//DAY4 HW1
#include <stdio.h>

int main(void) {
    int num;
    int max = -1;     
    int maxRow = 1;
    int maxCol = 1;

    for (int i = 1; i <= 9; i++) {        
        for (int j = 1; j <= 9; j++) {    
            scanf("%d", &num);

            if (num > max) {              
                max = num;
                maxRow = i;
                maxCol = j;
            }
        }
    }

    printf("%d\n", max);
    printf("%d %d\n", maxRow, maxCol);

    return 0;
}


//DAY4 HW2
#include <stdio.h>

int main(void) {
    int x1, y1;
    int x2, y2;
    int x3, y3;
    int x4, y4;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);

   
    if (x1 == x2) x4 = x3;
    else if (x1 == x3) x4 = x2;
    else x4 = x1;

  
    if (y1 == y2) y4 = y3;
    else if (y1 == y3) y4 = y2;
    else y4 = y1;

    printf("%d %d\n", x4, y4);

    return 0;
}

//DAY4 HW3
#include <stdio.h>

int main(void) {
    int N;
    int w[50], h[50];   
    int rank[50];

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &w[i], &h[i]);
        rank[i] = 1;   
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) continue;

            if (w[j] > w[i] && h[j] > h[i]) {
                rank[i]++;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d", rank[i]);
        if (i != N - 1) printf(" ");
    }
    printf("\n");

    return 0;
}

//DAY5 HW1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    FILE* fp = fopen("data.txt", "wt");
    if (fp == NULL) {
        printf("Failed to open file");
        return -1;
    }

    fputc('A', fp);
    fputc('B', fp);
    fputc('C', fp);

    fclose(fp);
    return 0;
}


//DAY5 HW2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char ch;

    FILE* fp = fopen("C:/KHS_Code/C_VS2022/ch5/ex1/data.txt", "rt");
    if (fp == NULL) {
        printf("Failed to open file");
        return -1;
    }

    for (int i = 0; i < 3; i++) {
        ch = fgetc(fp);
        printf("%c\n", ch);
    }

    fclose(fp);
    return 0;
}


//DAY5 HW3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    FILE* org = fopen("input.txt", "rt");
    FILE* copy = fopen("output.txt", "wt");
    char str[20];

    if (org == NULL || copy == NULL) {
        printf("Failed to open file");
        return -1;
    }

    while (fgets(str, sizeof(str), org) != NULL) {
        fputs(str, copy);
    }

    if (feof(org) != 0)
        printf("File copied successfully");
    else
        printf("Failed to copy file");

    fclose(org);
    fclose(copy);

    return 0;
}


//DAY5 HW4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char name[10];
    int age;

    FILE* fp = fopen("student.txt", "wt");

    for (int i = 0; i < 3; i++)
    {
        printf("다음 순서로 입력 (name age): ");
        scanf("%s %d", name, &age);
        getchar();
        fprintf(fp, "%s %d\n", name, age);
    }

    fclose(fp);
    return 0;
}


//DAY5 HW5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* ptr1 = (int*)malloc(sizeof(int));
    int* ptr2 = (int*)malloc(sizeof(int) * 3);

    *ptr1 = 20;

    for (int i = 0; i < 3; i++)
        ptr2[i] = i;

    printf("%d\n", *ptr1);
    for (int i = 0; i < 3; i++)
        printf("%d ", ptr2[i]);

    free(ptr1);
    free(ptr2);

    return 0;
}

//DAY6 HW1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int N;
    int stack[10000];
    int top = -1;
    char cmd[10];
    int x;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", cmd);

        if (strcmp(cmd, "push") == 0) {
            scanf("%d", &x);
            stack[++top] = x;
        }
        else if (strcmp(cmd, "pop") == 0) {
            if (top == -1) printf("-1\n");
            else printf("%d\n", stack[top--]);
        }
        else if (strcmp(cmd, "size") == 0) {
            printf("%d\n", top + 1);
        }
        else if (strcmp(cmd, "empty") == 0) {
            printf("%d\n", top == -1 ? 1 : 0);
        }
        else if (strcmp(cmd, "top") == 0) {
            if (top == -1) printf("-1\n");
            else printf("%d\n", stack[top]);
        }
    }

    return 0;
}


//DAY6 HW2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int N;
    int queue[10000];
    int front = 0, back = 0;
    char cmd[10];
    int x;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", cmd);

        if (strcmp(cmd, "push") == 0) {
            scanf("%d", &x);
            queue[back++] = x;
        }
        else if (strcmp(cmd, "pop") == 0) {
            if (front == back) printf("-1\n");
            else printf("%d\n", queue[front++]);
        }
        else if (strcmp(cmd, "size") == 0) {
            printf("%d\n", back - front);
        }
        else if (strcmp(cmd, "empty") == 0) {
            printf("%d\n", front == back ? 1 : 0);
        }
        else if (strcmp(cmd, "front") == 0) {
            if (front == back) printf("-1\n");
            else printf("%d\n", queue[front]);
        }
        else if (strcmp(cmd, "back") == 0) {
            if (front == back) printf("-1\


