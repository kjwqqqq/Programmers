//DAY 3

// 1 문자열 섞기
/*#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//문자를 번갈아가면서 출력하도록 변환하는 함수
char* solution(const char* str1, const char* str2) {

	//문자열 길이를 구함
	int length = strlen(str1);
	char* answer = (char*)malloc((2 * length + 1) * sizeof(char));

	int index = 0;

	//두 문자열을 for문을 이용하여 나란히 반복
	for (int i = 0; i < length; i++)
	{
		//첫번째 문자열의 i값 입력
		answer[index++] = str1[i];
		//두번째 문자열 i값 입력
		answer[index++] = str2[i];
	}

	//끝까지 반복
	answer[index] = '\0';

	return answer;
}

// 문자 소문자 여부를 판별하는 함수
int LowerCase(char* str1, char* str2)
{
	//str1과 str2 각각 끝까지
	while (*str1 != '\0' && *str2 != '\0')
	{
		//두 string이 하나라도 대문자면(소문자가 아니면) 0(false)을 반환
		if (!islower(*str1) || !islower(*str2))
		{
			return 0;
		}
		//while 반복문 증가하며 진행
		str1++;
		str2++;
	}

	//두 문자열 길이가 다른 경우에 0(false)을 반환
	if (*str1 != '\0' || *str2 != '\0')
	{
		return 0;
	}

	//외의 경우엔 1(true)을 반환
	return 1;
}

//메인 함수
int main() {
	const int MAX_LENGTH = 10;  // 입력 받을 문자열의 최대 길이

	char* str1 = (char*)malloc(MAX_LENGTH * sizeof(char));
	char* str2 = (char*)malloc(MAX_LENGTH * sizeof(char));

	scanf("%s %s", str1, str2);

	//대소문자 구별값이 true면
	if (LowerCase(str1, str2))
	{
		char* result = solution(str1, str2);
		printf("%s\n", result);  // 결과 출력
		free(result);  // 메모리 초기화
	}
	//대소문자 구별값이 false면
	else
	{
		printf("입력한 문자열의 길이가 다르거나, 대문자가 포함되어 있습니다.");
	}

	//문자열 동적 할당 메모리 초기화
	free(str1);
	free(str2);
	return 0;
}*/

// 2 문자 리스트를 문자열로 변환하기
/*#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
char* solution(const char* arr[], size_t arr_len) {
	char* answer = (char*)malloc(arr_len + 1);

	for (int i = 0; i < arr_len; i++) {
		answer[i] = *arr[i];

	}
	answer[arr_len] = '\0';
	return answer;
}*/

// 3 문자열 곱하기
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, int k)
{
	// 입력된 문자열의 길이 계산
	int my_string_length = strlen(my_string);
    // 결과 문자열의 길이 계산
	int answer_length = my_string_length * k;

	// 결과 문자열을 저장할 메모리 동적 할당
	char* answer = (char*)malloc((answer_length + 1));
    // 할당한 동적메모리 초기화
	memset(answer, 0, (answer_length + 1));

	// 입력된 문자열을 k번 반복하여 결과 문자열에 복사
	for (int i = 0; i < k; i++)
    {
		strcat(answer, my_string);
	}

	return answer;
}

int main()
{
	// 입력 받을 문자열의 최대 길이
	const int MAX_LENGTH = 100;
	char my_string[MAX_LENGTH];
	int k;

	scanf("%s %d", my_string, &k);

	char* answer = solution(my_string, k);
	printf("%s", answer);

	free(answer);

	return 0;
}*/

// 4 더 크게 합치기
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// 두 정수 중 더 큰 값을 반환
int getMax(int a, int b) {
	return (a > b) ? a : b;
}

// 두 정수를 연결한 값을 계산
int concatenate(int a, int b) {
	int power = 1;
	while (power <= b)
		power *= 10;
	return (a * power) + b;
}

//A+B, B+A를 계산한 뒤 더 큰 값을 반환
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

// 5 두 수의 연산값 비교하기
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

//두 정수 중 더 큰 값을 판별하는 함수
int getMax(int a, int b) {
	return (a > b) ? a : b;
}

// 두 정수를 붙여서 계산하는 함수
int concatenate(int a, int b) {
	int power = 1;
	while (power <= b)
		power *= 10;
	return (a * power) + b;
}

// 두 정수를 2 * a * b 의 식으로 계산하는 함수
int concatenate2(int a, int b) {
	return (2 * a * b);
}

//입력받은 각 a, b 정수를 위의 두 식에 따라 계산한 뒤, 두 결과값 중 더 큰 값을 반환하는 함수
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