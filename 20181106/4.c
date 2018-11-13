#include <stdio.h>
const int MOD = 100007;
int main() {
	int N, K;
	int i, j;
	scanf("%d%d", &N, &K);
	N--;
	int fib[1001] = {1, 1};
	for (i = 1; i <= K; ++i)
		fib[i] = 1;
	for (i = 2; i <= N; ++i) {
		for (j = i - 1; j >= i - K && j > 0; --j)
			fib[i] = (fib[i] + fib[j]) % MOD;
	}
	printf("%d", fib[N]);
	return 0;
}
