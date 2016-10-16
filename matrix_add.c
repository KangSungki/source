#define _CRT_SECURE_NO_WARNINGS
#include<windows.h>
#include <stdio.h>

void matrix_add(int **arr1, int **arr2, int row1, int col1, int row2, int col2);

void matrix_add(int **arr1, int **arr2, int row1, int col1, int row2, int col2) {
	int row = 0;
	int col = 0;
	int **arr = 0;
	int i = 0;
	int j = 0;

	if ((row1 == row2) && (col1 == col2)) {

		row = row1;
		col = col1;

		arr = (int **)malloc(sizeof(int*) * row);
		if (arr == NULL) {
			printf("Heap is full");
			exit(-1);             // 프로세스 자체를 죽인다.
		}
		for (i = 0; i < row; i++) {

			arr[i] = (int *)malloc(sizeof(int) * col);
			if (arr == NULL) {
				printf("Heap is full");
				exit(-1);             // 프로세스 자체를 죽인다.
			}

		}
		



		for (i = 0; i < row; i++) {
			for (j = 0; j < col; j++) {
				arr[i][j] = arr1[i][j] + arr2[i][j];
			}
		}

		for (i = 0; i < row; i++) {
			for (j = 0; j < col; j++) {
				printf("\t%d", arr[i][j]);
			}
			printf("\n");

		}
	}
	else {
		printf("두 행렬의 차원이 동일하지 않습니다.\n");
	}

}
