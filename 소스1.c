//�� �ڸ� ������

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
	int* answer = (int*)malloc(sizeof(int) * 100);
	int i = 0;
	while (n) {
		answer[i] = n % 10; # 1�� �ڸ� ���� �ִ´�.
			n /= 10; # 1�� �ڸ� ���� ���ش�.
			i++;
	}
	return answer;
}