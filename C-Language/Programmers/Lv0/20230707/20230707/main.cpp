//DAY 3

// 1 ���ڿ� ����
/*#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//���ڸ� �����ư��鼭 ����ϵ��� ��ȯ�ϴ� �Լ�
char* solution(const char* str1, const char* str2) {

	//���ڿ� ���̸� ����
	int length = strlen(str1);
	char* answer = (char*)malloc((2 * length + 1) * sizeof(char));

	int index = 0;

	//�� ���ڿ��� for���� �̿��Ͽ� ������ �ݺ�
	for (int i = 0; i < length; i++)
	{
		//ù��° ���ڿ��� i�� �Է�
		answer[index++] = str1[i];
		//�ι�° ���ڿ� i�� �Է�
		answer[index++] = str2[i];
	}

	//������ �ݺ�
	answer[index] = '\0';

	return answer;
}

// ���� �ҹ��� ���θ� �Ǻ��ϴ� �Լ�
int LowerCase(char* str1, char* str2)
{
	//str1�� str2 ���� ������
	while (*str1 != '\0' && *str2 != '\0')
	{
		//�� string�� �ϳ��� �빮�ڸ�(�ҹ��ڰ� �ƴϸ�) 0(false)�� ��ȯ
		if (!islower(*str1) || !islower(*str2))
		{
			return 0;
		}
		//while �ݺ��� �����ϸ� ����
		str1++;
		str2++;
	}

	//�� ���ڿ� ���̰� �ٸ� ��쿡 0(false)�� ��ȯ
	if (*str1 != '\0' || *str2 != '\0')
	{
		return 0;
	}

	//���� ��쿣 1(true)�� ��ȯ
	return 1;
}

//���� �Լ�
int main() {
	const int MAX_LENGTH = 10;  // �Է� ���� ���ڿ��� �ִ� ����

	char* str1 = (char*)malloc(MAX_LENGTH * sizeof(char));
	char* str2 = (char*)malloc(MAX_LENGTH * sizeof(char));

	scanf("%s %s", str1, str2);

	//��ҹ��� �������� true��
	if (LowerCase(str1, str2))
	{
		char* result = solution(str1, str2);
		printf("%s\n", result);  // ��� ���
		free(result);  // �޸� �ʱ�ȭ
	}
	//��ҹ��� �������� false��
	else
	{
		printf("�Է��� ���ڿ��� ���̰� �ٸ��ų�, �빮�ڰ� ���ԵǾ� �ֽ��ϴ�.");
	}

	//���ڿ� ���� �Ҵ� �޸� �ʱ�ȭ
	free(str1);
	free(str2);
	return 0;
}*/

// 2 ���� ����Ʈ�� ���ڿ��� ��ȯ�ϱ�
/*#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len�� �迭 arr�� �����Դϴ�.
char* solution(const char* arr[], size_t arr_len) {
	char* answer = (char*)malloc(arr_len + 1);

	for (int i = 0; i < arr_len; i++) {
		answer[i] = *arr[i];

	}
	answer[arr_len] = '\0';
	return answer;
}*/

// 3 ���ڿ� ���ϱ�
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, int k)
{
	// �Էµ� ���ڿ��� ���� ���
	int my_string_length = strlen(my_string);
    // ��� ���ڿ��� ���� ���
	int answer_length = my_string_length * k;

	// ��� ���ڿ��� ������ �޸� ���� �Ҵ�
	char* answer = (char*)malloc((answer_length + 1));
    // �Ҵ��� �����޸� �ʱ�ȭ
	memset(answer, 0, (answer_length + 1));

	// �Էµ� ���ڿ��� k�� �ݺ��Ͽ� ��� ���ڿ��� ����
	for (int i = 0; i < k; i++)
    {
		strcat(answer, my_string);
	}

	return answer;
}

int main()
{
	// �Է� ���� ���ڿ��� �ִ� ����
	const int MAX_LENGTH = 100;
	char my_string[MAX_LENGTH];
	int k;

	scanf("%s %d", my_string, &k);

	char* answer = solution(my_string, k);
	printf("%s", answer);

	free(answer);

	return 0;
}*/

// 4 �� ũ�� ��ġ��
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// �� ���� �� �� ū ���� ��ȯ
int getMax(int a, int b) {
	return (a > b) ? a : b;
}

// �� ������ ������ ���� ���
int concatenate(int a, int b) {
	int power = 1;
	while (power <= b)
		power *= 10;
	return (a * power) + b;
}

//A+B, B+A�� ����� �� �� ū ���� ��ȯ
int solution(int a, int b) {
	int ab = concatenate(a, b);
	int ba = concatenate(b, a);

	return getMax(ab, ba);
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int result = solution(a, b);

	printf("%d", result);

	return 0;
}*/

// 5 �� ���� ���갪 ���ϱ�
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

//�� ���� �� �� ū ���� �Ǻ��ϴ� �Լ�
int getMax(int a, int b) {
	return (a > b) ? a : b;
}

// �� ������ �ٿ��� ����ϴ� �Լ�
int concatenate(int a, int b) {
	int power = 1;
	while (power <= b)
		power *= 10;
	return (a * power) + b;
}

// �� ������ 2 * a * b �� ������ ����ϴ� �Լ�
int concatenate2(int a, int b) {
	return (2 * a * b);
}

//�Է¹��� �� a, b ������ ���� �� �Ŀ� ���� ����� ��, �� ����� �� �� ū ���� ��ȯ�ϴ� �Լ�
int solution(int a, int b) {
	int ab = concatenate(a, b);
	int ab2 = concatenate2(a, b);

	return getMax(ab, ab2);
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int result = solution(a, b);

	printf("%d", result);

	return 0;
}*/