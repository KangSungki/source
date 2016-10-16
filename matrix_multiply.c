#define _CRT_SECURE_NO_WARNINGS
#include<windows.h>
#include <stdio.h>

void matrix_multiply(int **arr, int **arr2, int row1, int col1, int row2, int col2);

void matrix_multiply(int **arr1, int **arr2, int row1, int col1, int row2, int col2) {
	int row = 0;
	int col = 0;
	int **arr = 0;
	int i = 0;
	int j = 0;
	int n = 0;

	if (col1 == row2) {

		row = row1;
		col = col2;

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
				arr[i][j] = 0;
				for (n = 0; n < col1; n++) {
					arr[i][j] += arr1[i][n] * arr2[n][j];
				}
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
		printf("행렬 곱하기의 조건이 맞지 않습니다.");
	}
}
