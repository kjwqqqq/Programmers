//LEVEL 0

/* 1 ���ڿ� ����ϱ�
#include <stdio.h>
#define LEN_INPUT 1000001

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", &s1);
    printf("%s", s1);

    return 0;
}
*/

/* 2 a�� b ����ϱ�
#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    printf("a = %d\n", a);
    printf("b = %d", b);
    return 0;
}
*/

/* 3 ���ڿ� �ݺ��ؼ� ����ϱ�
#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a;
    scanf("%s %d", s1, &a);
    for (int i = 0; i < a; i++)
    {
        printf("%s", s1);
    }
    return 0;
}
*/


/* 4 ��ҹ��� �ٲ㼭 ����ϱ�
#include <stdio.h>
#define LEN_INPUT 20

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", &s1);
    for (int i = 0; i < 20; i++) {
        if ((s1[i] >= 'a') && (s1[i] <= 'z')) {
            s1[i] -= 32;
        }
        else if ((s1[i] >= 'A') && (s1[i] <= 'Z')) {
            s1[i] += 32;
        }
    }
    printf("%s", s1);
    return 0;
}
*/
/* 5 Ư������ ����ϱ�
#include <stdio.h>

int main() {
    printf("!@#$%%^&*(\\'\"<>?:;");
    return 0;
}
*/