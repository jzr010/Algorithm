//다이나믹 프로그래밍이란 하나의 문제를 단 한 번만 풀도록 하는 알고리즘.
//메모이제이션!! 


#include <iostream>

int d[101];

int fibonacci(int x) {
	if(x == 1) return 1;
	if(x == 2) return 1;
	if(d[x] != 0) return d[x];
	return d[x] = fibonacci(x - 1) + fibonacci(x - 2);
} 

int main(void) {
	printf("%d", fibonacci(10));
}
