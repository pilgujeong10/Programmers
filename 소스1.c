//각 자리 뒤집기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
	int* answer = (int*)malloc(sizeof(int) * 100);
	int i = 0;
	while (n) {
		answer[i] = n % 10; # 1의 자리 수를 넣는다.
			n /= 10; # 1의 자리 수를 없앤다.
			i++;
	}
	return answer;
}