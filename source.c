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



//DAY7 HW1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_TASKS 100
#define MAX_LENGTH 100
#define FILENAME "todo_list.txt"

typedef struct {
                char task[MAX_LENGTH];
                int completed;
                char date[11];
                char created[20];
                char completed_time[20];
            } Task;

            Task tasks[MAX_TASKS];
            int task_count = 0;

            void displayTasks();
            void getCurrentTime(char* buffer, int size) {
                time_t t = time(NULL);
                struct tm* lt = localtime(&t);
                strftime(buffer, size, "%Y-%m-%d_%H:%M:%S", lt);
            }

            void loadTasks() {
                FILE* file = fopen(FILENAME, "r");
                if (file == NULL) return;
                while (fscanf(file, "%d %10s %19s %19s %[^\n]",
                    &tasks[task_count].completed,
                    tasks[task_count].date,
                    tasks[task_count].created,
                    tasks[task_count].completed_time,
                    tasks[task_count].task) == 5) {
                    task_count++;
                    if (task_count >= MAX_TASKS) break;
                }
                fclose(file);
            }

            void saveTasks() {
                FILE* file = fopen(FILENAME, "w");
                if (file == NULL) {
                    printf("파일 저장 오류!\n");
                    return;
                }
                for (int i = 0; i < task_count; i++) {
                    fprintf(file, "%d %s %s %s %s\n",
                        tasks[i].completed,
                        tasks[i].date,
                        tasks[i].created,
                        tasks[i].completed_time,
                        tasks[i].task);
                }
                fclose(file);
            }

            void addTask() {
                if (task_count >= MAX_TASKS) {
                    printf("더 이상 할 일을 추가할 수 없습니다.\n");
                    return;
                }
                getchar();
                printf("새로운 할 일: ");
                fgets(tasks[task_count].task, MAX_LENGTH, stdin);
                tasks[task_count].task[strcspn(tasks[task_count].task, "\n")] = '\0';
                printf("완료 날짜 (YYYY-MM-DD): ");
                scanf("%10s", tasks[task_count].date);
                tasks[task_count].completed = 0;
                getCurrentTime(tasks[task_count].created, sizeof(tasks[task_count].created));
                strcpy(tasks[task_count].completed_time, "-");
                task_count++;
                printf("할 일이 추가되었습니다!\n");
            }

            void deleteTask() {
                int num;
                displayTasks();
                if (task_count == 0) return;
                printf("삭제할 할 일 번호:");
                scanf("%d", &num);
                if (num < 1 || num > task_count) {
                    printf("잘못된 번호입니다.\n");
                    return;
                }
                for (int i = num - 1; i < task_count - 1; i++) {
                    tasks[i] = tasks[i + 1];
                }
                task_count--;
                printf("할 일이 삭제되었습니다!\n");
            }

            void displayTasks() {
                if (task_count == 0) {
                    printf("할 일이 없습니다!\n");
                    return;
                }
                printf("\nTODO list : \n");
                for (int i = 0; i < task_count; i++) {
                    printf("%d. [%s] %s (완료 기한: %s, 추가: %s, 완료: %s)\n",
                        i + 1,
                        tasks[i].completed ? "X" : " ",
                        tasks[i].task,
                        tasks[i].date,
                        tasks[i].created,
                        tasks[i].completed ? tasks[i].completed_time : "-");
                }
            }

            void completeTask() {
                int num;
                displayTasks();
                if (task_count == 0) return;
                printf("완료할 할 일 번호: ");
                scanf("%d", &num);
                if (num < 1 || num > task_count) {
                    printf("잘못된 번호입니다.\n");
                    return;
                }
                tasks[num - 1].completed = 1;
                getCurrentTime(tasks[num - 1].completed_time,
                    sizeof(tasks[num - 1].completed_time));
                printf("할 일이 완료되었습니다!\n");
            }

            int main() {
                int choice;
                loadTasks();
                while (1) {
                    printf("\n===== TODO list =====\n");
                    printf("1. 할 일 추가\n");
                    printf("2. 할 일 삭제\n");
                    printf("3. 목록 보기\n");
                    printf("4. 완료 체크\n");
                    printf("5. 종료\n");
                    printf("선택 : ");
                    scanf("%d", &choice);
                    switch (choice) {
                    case 1:
                        addTask();
                        break;
                    case 2:
                        deleteTask();
                        break;
                    case 3:
                        displayTasks();
                        break;
                    case 4:
                        completeTask();
                        break;
                    case 5:
                        saveTasks();
                        printf("프로그램을 종료합니다.\n");
                        return 0;
                    default:
                        printf("잘못된 입력입니다.\n");
                    }
                }
            }


//DAY8 HW
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_ACCOUNTS 100
#define FILENAME "accounts.txt"

            typedef struct {
                char name[50];      // 계좌 소유자 이름
                double accountNumber;  // 계좌 번호
                double balance;     // 잔액
            } Account;

            Account accounts[MAX_ACCOUNTS];
            int account_count = 0;

            // 계좌 정보 파일에서 불러오기
            void loadAccounts() {
                FILE* file = fopen(FILENAME, "r");
                if (file == NULL) return;  // 파일이 없으면 그냥 리턴

                while (fscanf(file, "%s %lf %lf", accounts[account_count].name,
                    &accounts[account_count].accountNumber,
                    &accounts[account_count].balance) == 3) {
                    account_count++;
                }
                fclose(file);
            }

            // 계좌 정보 파일에 저장
            void saveAccounts() {
                FILE* file = fopen(FILENAME, "w");
                if (file == NULL) {
                    printf("파일 저장 오류!\n");
                    return;
                }
                for (int i = 0; i < account_count; i++) {
                    fprintf(file, "%s %lf %.2lf\n", accounts[i].name,
                        accounts[i].accountNumber, accounts[i].balance);
                }
                fclose(file);
            }

            // 계좌 개설
            void createAccount() {
                if (account_count >= MAX_ACCOUNTS) {
                    printf("더 이상 계좌를 개설할 수 없습니다!\n");
                    return;
                }

                printf("이름 입력: ");
                scanf("%s", accounts[account_count].name);
                printf("계좌 번호 입력: ");
                scanf("%lf", &accounts[account_count].accountNumber);
                printf("초기 입금액 입력: ");
                scanf("%lf", &accounts[account_count].balance);

                account_count++;
                printf("계좌 개설 완료!\n");
            }

            // 특정 계좌 찾기
            int findAccount(double accountNumber) {
                for (int i = 0; i < account_count; i++) {
                    if (accounts[i].accountNumber == accountNumber) {
                        return i;
                    }
                }
                return -1;  // 계좌 없음
            }

            // 입금
            void deposit() {
                double accountNumber;
                int index;
                double amount;

                printf("입금할 계좌 번호 입력: ");
                scanf("%lf", &accountNumber);

                index = findAccount(accountNumber);
                if (index == -1) {
                    printf("존재하지 않는 계좌입니다!\n");
                    return;
                }

                printf("입금할 금액 입력: ");
                scanf("%lf", &amount);

                accounts[index].balance += amount;
                printf("입금 완료! 현재 잔액: %.2lf\n", accounts[index].balance);
            }

            // 출금
            void withdraw() {
                int index;
                double amount, accountNumber;

                printf("출금할 계좌 번호 입력: ");
                scanf("%lf", &accountNumber);

                index = findAccount(accountNumber);
                if (index == -1) {
                    printf("존재하지 않는 계좌입니다!\n");
                    return;
                }

                printf("출금할 금액 입력: ");
                scanf("%lf", &amount);

                if (accounts[index].balance < amount) {
                    printf("잔액 부족!\n");
                    return;
                }

                accounts[index].balance -= amount;
                printf("출금 완료! 현재 잔액: %.2lf\n", accounts[index].balance);
            }

            // 계좌 정보 조회
            void checkBalance() {
                double accountNumber;
                int index;

                printf("조회할 계좌 번호 입력: ");
                scanf("%lf", &accountNumber);

                index = findAccount(accountNumber);
                if (index == -1) {
                    printf("존재하지 않는 계좌입니다!\n");
                    return;
                }

                printf("계좌 소유자: %s, 잔액: %.2lf\n", accounts[index].name, accounts[index].balance);
            }

            // 모든 계좌 목록 출력
            void displayAccounts() {
                if (account_count == 0) {
                    printf("등록된 계좌가 없습니다!\n");
                    return;
                }

                printf("\n===== 계좌 목록 =====\n");
                for (int i = 0; i < account_count; i++) {
                    printf("%d. 계좌 번호: %lf | 소유자: %s | 잔액: %.2lf\n",
                        i + 1, accounts[i].accountNumber, accounts[i].name, accounts[i].balance);
                }
            }

            int main() {
                int choice;
                loadAccounts();  // 프로그램 시작 시 파일에서 계좌 정보 불러오기

                while (1) {
                    printf("\n===== 은행 시스템 =====\n");
                    printf("1. 계좌 개설\n");
                    printf("2. 입금\n");
                    printf("3. 출금\n");
                    printf("4. 계좌 조회\n");
                    printf("5. 모든 계좌 목록\n");
                    printf("6. 종료\n");
                    printf("선택: ");
                    scanf("%d", &choice);

                    switch (choice) {
                    case 1:
                        createAccount();
                        break;
                    case 2:
                        deposit();
                        break;
                    case 3:
                        withdraw();
                        break;
                    case 4:
                        checkBalance();
                        break;
                    case 5:
                        displayAccounts();
                        break;
                    case 6:
                        saveAccounts();  // 종료 전 파일 저장
                        printf("프로그램을 종료합니다.\n");
                        return 0;
                    default:
                        printf("잘못된 입력입니다.\n");
                    }
                }
            }


