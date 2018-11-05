#include<stdio.h>
void matrix_product(int mat1[][K], int mat2[][N], int product[][N]) {
	int i, j, k;
	memset(product, 0, sizeof(int) * M * N);
	for (i = 0; i < M; ++i)
		for (j = 0; j < N; ++j)
			for (k = 0; k < K; ++k)
				product[i][j] += mat1[i][k] * mat2[k][j];
}
void main()
{
	int i,j,k;
	void matrix_product(int mat1[][K], int mat2[][N], int product[][N]);
}
